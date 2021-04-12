/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNGeometry, SCNNode, NSArray, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {

	C3DSkinnerRef _skinner;
	SCNGeometry* _baseGeometry;
	BOOL _bonesAndIndicesCompression;
	SCNNode* _skeleton;

}

@property (assign,nonatomic,__weak) SCNNode * skeleton; 
@property (nonatomic,retain) SCNGeometry * baseGeometry; 
@property (assign,nonatomic) SCNMatrix4 baseGeometryBindTransform; 
@property (nonatomic,readonly) NSArray * boneInverseBindTransforms; 
@property (nonatomic,readonly) NSArray * bones; 
@property (nonatomic,readonly) SCNGeometrySource * boneWeights; 
@property (nonatomic,readonly) SCNGeometrySource * boneIndices; 
+(BOOL)supportsSecureCoding;
+(id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5 ;
+(id)skinnerWithSkinnerRef:(C3DSkinnerRef)arg1 ;
+(C3DSkinnerRef)_createSkinnerWithVertexCount:(long long)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 baseGeometry:(id)arg5 ;
+(C3DSkinnerRef)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 ;
+(C3DSkinnerRef)_createSkinnerWithCompressedData:(id)arg1 bonesCount:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 ;
+(id)_skinnerWithBaseGeometry:(id)arg1 skinnableGeometry:(id)arg2 bones:(id)arg3 boneInverseBindTransforms:(id)arg4 bindMatrix:(SCNMatrix4)arg5 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)scene;
-(void)setSkeleton:(SCNNode *)arg1 ;
-(SCNNode *)skeleton;
-(id)joints;
-(void)setBaseGeometryBindTransform:(SCNMatrix4)arg1 ;
-(const void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCModel;
-(void)_setBaseGeometry:(id)arg1 ;
-(C3DSkinnerRef)skinnerRef;
-(NSArray *)bones;
-(void)setBones:(NSArray *)arg1 ;
-(id)initWithSkinnerRef:(C3DSkinnerRef)arg1 ;
-(void)_setSkeleton:(id)arg1 ;
-(void)set_bonesAndIndicesCompression:(BOOL)arg1 ;
-(void)setBoneInverseBindTransforms:(NSArray *)arg1 ;
-(SCNGeometry *)baseGeometry;
-(SCNMatrix4)baseGeometryBindTransform;
-(SCNGeometrySource *)boneWeights;
-(SCNGeometrySource *)boneIndices;
-(NSArray *)boneInverseBindTransforms;
-(BOOL)wantsCPUSkinning;
-(void)setWantsCPUSkinning:(BOOL)arg1 ;
-(BOOL)_bonesAndIndicesCompression;
-(void)setBaseGeometry:(SCNGeometry *)arg1 ;
@end

