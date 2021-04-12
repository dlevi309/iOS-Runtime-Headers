/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderNode.h>

@protocol NUVideoProperties;
@class PIReframeKeyframeSequence;

@interface PIVideoReframeNode : NURenderNode {

	PIReframeKeyframeSequence* _keyframeSequence;
	id<NUVideoProperties> _inputVideoProperties;
	SCD_Struct_PI8 _frameDuration;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,retain) PIReframeKeyframeSequence * keyframeSequence;              //@synthesize keyframeSequence=_keyframeSequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI6 stabCropRect;                               //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,retain) id<NUVideoProperties> inputVideoProperties;                //@synthesize inputVideoProperties=_inputVideoProperties - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI8 frameDuration;                              //@synthesize frameDuration=_frameDuration - In the implementation block
-(SCD_Struct_PI8)frameDuration;
-(void)setFrameDuration:(SCD_Struct_PI8)arg1 ;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(BOOL)requiresVideoComposition;
-(id)initWithSettings:(id)arg1 inputs:(id)arg2 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(SCD_Struct_PI6)stabCropRect;
-(void)setStabCropRect:(SCD_Struct_PI6)arg1 ;
-(id)initWithKeyframes:(id)arg1 stabCropRect:(SCD_Struct_PI6)arg2 input:(id)arg3 ;
-(id)_stabilizeImage:(id)arg1 cleanRect:(CGRect)arg2 cropRect:(CGRect)arg3 transform:(SCD_Struct_PI9)arg4 geometry:(id)arg5 ;
-(PIReframeKeyframeSequence *)keyframeSequence;
-(void)setKeyframeSequence:(PIReframeKeyframeSequence *)arg1 ;
-(id<NUVideoProperties>)inputVideoProperties;
-(void)setInputVideoProperties:(id<NUVideoProperties>)arg1 ;
@end

