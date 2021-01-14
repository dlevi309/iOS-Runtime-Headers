/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol NUVideoProperties;
@class PIReframeKeyframeSequence;

@interface PIVideoReframeNode : NURenderNode {

	BOOL _shouldApplyWatermark;
	PIReframeKeyframeSequence* _keyframeSequence;
	id<NUVideoProperties> _inputVideoProperties;
	SCD_Struct_PI7 _frameDuration;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,retain) PIReframeKeyframeSequence * keyframeSequence;              //@synthesize keyframeSequence=_keyframeSequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect;                               //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,retain) id<NUVideoProperties> inputVideoProperties;                //@synthesize inputVideoProperties=_inputVideoProperties - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI7 frameDuration;                              //@synthesize frameDuration=_frameDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyWatermark;                                 //@synthesize shouldApplyWatermark=_shouldApplyWatermark - In the implementation block
-(void)setFrameDuration:(SCD_Struct_PI7)arg1 ;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
-(SCD_Struct_PI7)frameDuration;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(BOOL)canPropagateOriginalLivePhotoMetadataTrack;
-(id)initWithKeyframes:(id)arg1 stabCropRect:(SCD_Struct_PI6)arg2 input:(id)arg3 ;
-(id)_stabilizeImage:(id)arg1 cleanRect:(CGRect)arg2 cropRect:(CGRect)arg3 transform:(SCD_Struct_PI9)arg4 geometry:(id)arg5 ;
-(PIReframeKeyframeSequence *)keyframeSequence;
-(void)setKeyframeSequence:(PIReframeKeyframeSequence *)arg1 ;
-(id<NUVideoProperties>)inputVideoProperties;
-(void)setInputVideoProperties:(id<NUVideoProperties>)arg1 ;
-(BOOL)shouldApplyWatermark;
-(void)setShouldApplyWatermark:(BOOL)arg1 ;
@end

