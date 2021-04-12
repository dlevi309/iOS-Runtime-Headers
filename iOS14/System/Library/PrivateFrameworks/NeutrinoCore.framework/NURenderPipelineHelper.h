/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NURenderPipelineState;

@interface NURenderPipelineHelper : NSObject {

	NURenderPipelineState* _pipelineState;

}

@property (nonatomic,readonly) NURenderPipelineState * pipelineState;              //@synthesize pipelineState=_pipelineState - In the implementation block
-(id)nodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(BOOL)arg2 settingsAndInputs:(id)arg3 ;
-(CGRect)overcaptureRectForAutoCrop:(SCD_Struct_NU7)arg1 overcaptureVideoComplementSize:(SCD_Struct_NU7)arg2 primarySize:(SCD_Struct_NU7)arg3 CGRect:(CGRect)arg4 ;
-(id)remapPortraitV2Strength:(id)arg1 portraitEffectKind:(id)arg2 ;
-(id)videoReframe:(id)arg1 reframes:(id)arg2 error:(out id*)arg3 ;
-(id)videoCrossfadeLoop:(id)arg1 crossfadeAdjustment:(id)arg2 error:(out id*)arg3 ;
-(long long)versionForPortraitEffect:(id)arg1 ;
-(id)performLongExposureFusionForComposition:(id)arg1 longExposureImage:(id)arg2 useHDRFilter:(BOOL)arg3 error:(out id*)arg4 ;
-(id)performApertureRedeyeOnImage:(id)arg1 useHDRFilter:(BOOL)arg2 redEyeAdjustment:(id)arg3 ;
-(id)performRedeyeOnImage:(id)arg1 useHDRFilter:(BOOL)arg2 redEyeAdjustment:(id)arg3 ;
-(id)debugNodeByApplyingFilterWithName:(id)arg1 useHDRFilter:(BOOL)arg2 settingsAndInputs:(id)arg3 ;
-(NURenderPipelineState *)pipelineState;
-(id)beginGroupWithName:(id)arg1 error:(out id*)arg2 ;
-(BOOL)endGroupWithName:(id)arg1 error:(out id*)arg2 ;
-(id)initWithPipelineState:(id)arg1 ;
-(long long)mediaTypeForComposition:(id)arg1 ;
-(BOOL)hasStaticTime;
-(id)inputForPath:(id)arg1 error:(out id*)arg2 ;
-(id)addTagWithName:(id)arg1 inputNode:(id)arg2 error:(out id*)arg3 ;
-(id)getTagWithPath:(id)arg1 error:(out id*)arg2 ;
-(id)renderNodeFromSource:(id)arg1 settings:(id)arg2 error:(out id*)arg3 ;
-(id)cacheNode:(id)arg1 type:(id)arg2 settings:(id)arg3 error:(out id*)arg4 ;
-(id)scaleNode:(id)arg1 scale:(SCD_Struct_NU7)arg2 error:(out id*)arg3 ;
-(id)cropNode:(id)arg1 cropRect:(SCD_Struct_NU8)arg2 cropSettings:(id)arg3 ;
-(BOOL)isCIFilterAvailable:(id)arg1 propertyName:(id)arg2 ;
-(id)vectorWithFloats:(id)arg1 ;
-(BOOL)isSourceAvailable:(id)arg1 sourceSettings:(id)arg2 ;
-(id)auxiliaryImageFromComposition:(id)arg1 type:(id)arg2 error:(out id*)arg3 ;
-(void)resetTag:(id)arg1 input:(id)arg2 ;
-(BOOL)resetTag:(id)arg1 input:(id)arg2 error:(out id*)arg3 ;
-(id)trimInput:(id)arg1 startTime:(SCD_Struct_NU6)arg2 endTime:(SCD_Struct_NU6)arg3 error:(out id*)arg4 ;
-(id)createSloMoWithInput:(id)arg1 startTime:(SCD_Struct_NU6)arg2 endTime:(SCD_Struct_NU6)arg3 rate:(float)arg4 error:(out id*)arg5 ;
-(id)perspectiveTransformWithPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(CGRect)arg4 ;
-(id)straightenTransformWithAngle:(double)arg1 extent:(SCD_Struct_NU8)arg2 ;
-(id)orientedNode:(id)arg1 withOrientation:(long long)arg2 ;
-(id)livePhotoKeyFrameMetadataFromNode:(id)arg1 time:(SCD_Struct_NU6)arg2 error:(out id*)arg3 ;
@end

