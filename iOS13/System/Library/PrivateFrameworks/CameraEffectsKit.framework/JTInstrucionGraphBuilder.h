/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JTInstrucionGraphBuilder : NSObject {

	int _renderingIntent;
	int _timeScale;
	CGSize _outputSize;

}

@property (assign,nonatomic) CGSize outputSize;                //@synthesize outputSize=_outputSize - In the implementation block
@property (assign,nonatomic) int renderingIntent;              //@synthesize renderingIntent=_renderingIntent - In the implementation block
@property (assign,nonatomic) int timeScale;                    //@synthesize timeScale=_timeScale - In the implementation block
-(void)setOutputSize:(CGSize)arg1 ;
-(CGSize)outputSize;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(id)initWithOutputSize:(CGSize)arg1 ;
-(void)setRenderingIntent:(int)arg1 ;
-(id)instructionGraphForJTClip:(id)arg1 presentationTimeRange:(SCD_Struct_JT16)arg2 sourceTransform:(CGAffineTransform)arg3 compositionTrackID:(int)arg4 liveTransform:(PVTransformAnimationInfo*)arg5 excludingEffectType:(int)arg6 customRendererProperties:(id)arg7 ;
-(id)_sourceNodeForVideoMediaItem:(id)arg1 sourceTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 ;
-(id)_sourceNodeForStillMediaItem:(id)arg1 sourceTransform:(CGAffineTransform)arg2 transformAnimation:(id)arg3 presentationRange:(SCD_Struct_JT16)arg4 ;
-(id)applyEffectStack:(id)arg1 presentationRange:(SCD_Struct_JT16)arg2 toInput:(id)arg3 ;
-(id)applyTrackedEffects:(id)arg1 presentationRange:(SCD_Struct_JT16)arg2 renderDelegate:(id)arg3 transform:(CGAffineTransform)arg4 metadata:(id)arg5 toInput:(id)arg6 ;
-(id)sourceNodeForMediaItem:(id)arg1 sourceTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 transformAnimation:(id)arg4 presentationTimeRange:(SCD_Struct_JT16)arg5 ;
-(CGAffineTransform)JT_calculateCompositeNodeTransformForCrop;
-(id)blendNodeForClipSourceNodes:(id)arg1 ;
-(id)aggregateAndApplyTrackableEffects:(id)arg1 presentationRange:(SCD_Struct_JT16)arg2 renderDelegate:(id)arg3 transform:(CGAffineTransform)arg4 metadata:(id)arg5 toInput:(id)arg6 ;
-(id)sourceNodeForImageBuffer:(id)arg1 sourceTransform:(CGAffineTransform)arg2 ;
-(id)sourceNodeForGeneratorEffect:(id)arg1 effectRange:(SCD_Struct_JT16)arg2 ;
-(id)applyEffectStack:(id)arg1 toInput:(id)arg2 ;
-(id)arSelfieEffectNode:(id)arg1 inputNode:(id)arg2 maskNode:(id)arg3 bgImageNodes:(id)arg4 ;
-(id)_buildTestXFormAnimation:(SCD_Struct_JT16)arg1 baseTransform:(CGAffineTransform)arg2 clipNaturalSize:(CGSize)arg3 ;
-(int)renderingIntent;
@end

