// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

namespace flatbuffers {
struct CSParseBinary;
struct NodeTree;
struct Options;
struct WidgetOptions;
struct LayoutComponentTable;
struct SingleNodeOptions;
struct SpriteOptions;
struct ParticleSystemOptions;
struct GameMapOptions;
struct ButtonOptions;
struct CheckBoxOptions;
struct ImageViewOptions;
struct TextAtlasOptions;
struct TextBMFontOptions;
struct TextOptions;
struct TextFieldOptions;
struct LoadingBarOptions;
struct SliderOptions;
struct PanelOptions;
struct ScrollViewOptions;
struct PageViewOptions;
struct ListViewOptions;
struct ProjectNodeOptions;
struct ComponentOptions;
struct ComAudioOptions;
struct AnimationInfo;
struct NodeAction;
struct TimeLine;
struct Frame;
struct PointFrame;
struct ScaleFrame;
struct ColorFrame;
struct TextureFrame;
struct EventFrame;
struct IntFrame;
struct BoolFrame;
struct InnerActionFrame;
struct RotationSkew;
struct Position;
struct Scale;
struct AnchorPoint;
struct Color;
struct ColorVector;
struct FlatSize;
struct CapInsets;
struct ResourceData;
}  // namespace flatbuffers

namespace flatbuffers {

struct Node3DOption;
struct Vector3;

MANUALLY_ALIGNED_STRUCT(4) Vector3 {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vector3(float x, float y, float z)
    : x_(flatbuffers::EndianScalar(x)), y_(flatbuffers::EndianScalar(y)), z_(flatbuffers::EndianScalar(z)) { }

  float x() const { return flatbuffers::EndianScalar(x_); }
  float y() const { return flatbuffers::EndianScalar(y_); }
  float z() const { return flatbuffers::EndianScalar(z_); }
};
STRUCT_END(Vector3, 12);

struct Node3DOption : private flatbuffers::Table {
  const flatbuffers::WidgetOptions *nodeOptions() const { return GetPointer<const flatbuffers::WidgetOptions *>(4); }
  const Vector3 *position3D() const { return GetStruct<const Vector3 *>(6); }
  const Vector3 *rotation3D() const { return GetStruct<const Vector3 *>(8); }
  const Vector3 *scale3D() const { return GetStruct<const Vector3 *>(10); }
  int32_t cameramask() const { return GetField<int32_t>(12, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* nodeOptions */) &&
           verifier.VerifyTable(nodeOptions()) &&
           VerifyField<Vector3>(verifier, 6 /* position3D */) &&
           VerifyField<Vector3>(verifier, 8 /* rotation3D */) &&
           VerifyField<Vector3>(verifier, 10 /* scale3D */) &&
           VerifyField<int32_t>(verifier, 12 /* cameramask */) &&
           verifier.EndTable();
  }
};

struct Node3DOptionBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_nodeOptions(flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions) { fbb_.AddOffset(4, nodeOptions); }
  void add_position3D(const Vector3 *position3D) { fbb_.AddStruct(6, position3D); }
  void add_rotation3D(const Vector3 *rotation3D) { fbb_.AddStruct(8, rotation3D); }
  void add_scale3D(const Vector3 *scale3D) { fbb_.AddStruct(10, scale3D); }
  void add_cameramask(int32_t cameramask) { fbb_.AddElement<int32_t>(12, cameramask, 0); }
  Node3DOptionBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  Node3DOptionBuilder &operator=(const Node3DOptionBuilder &);
  flatbuffers::Offset<Node3DOption> Finish() {
    auto o = flatbuffers::Offset<Node3DOption>(fbb_.EndTable(start_, 5));
    return o;
  }
};

inline flatbuffers::Offset<Node3DOption> CreateNode3DOption(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions = 0,
   const Vector3 *position3D = 0,
   const Vector3 *rotation3D = 0,
   const Vector3 *scale3D = 0,
   int32_t cameramask = 0) {
  Node3DOptionBuilder builder_(_fbb);
  builder_.add_cameramask(cameramask);
  builder_.add_scale3D(scale3D);
  builder_.add_rotation3D(rotation3D);
  builder_.add_position3D(position3D);
  builder_.add_nodeOptions(nodeOptions);
  return builder_.Finish();
}

inline const Node3DOption *GetNode3DOption(const void *buf) { return flatbuffers::GetRoot<Node3DOption>(buf); }

inline bool VerifyNode3DOptionBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Node3DOption>(); }

inline void FinishNode3DOptionBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Node3DOption> root) { fbb.Finish(root); }

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_
