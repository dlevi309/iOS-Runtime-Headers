/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol SidecarWriter;
#import <UB/UB-Structs.h>
@class FigMetalContext, ToneMappingShaders, ToneMapSmoothingResources;

@interface ToneMappingStage : NSObject {

	FigMetalContext* _metal;
	ToneMappingShaders* _shaders;
	ToneMapSmoothingResources* _toneMapSmoothingResources;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(int)prewarmShaders:(id)arg1 ;
+(unsigned long long)computeScratchBufferSizeForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)purgeResources;
-(int)allocateResourcesForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 offset:(unsigned long long)arg3 scratchBuffer:(id)arg4 ;
-(int)runToneMapping:(id)arg1 bilateralGrid:(id)arg2 bilateralGridHomography:(SCD_Struct_Wa0)arg3 tmPlist:(id)arg4 darkestFrameMetadata:(const frameMetadata*)arg5 ev0FrameMetadata:(const frameMetadata*)arg6 scaleInput:(float)arg7 colorCorrection:(SCD_Struct_Wa0)arg8 hasChromaBias:(BOOL)arg9 quality:(int)arg10 inputIsLinear:(BOOL)arg11 ;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(id<SidecarWriter>)sidecarWriter;
-(int)calculateBlackWhiteContrastCenter:(float)arg1 contrastParam:(id)arg2 ;
-(int)performLTM:(id)arg1 bilateralGrid:(id)arg2 bilateralGridHomography:(SCD_Struct_Wa0)arg3 detailEnhance:(const frameMetadata*)arg4 darkestFrameMetadata:(float)arg5 scaleInput:(SCD_Struct_Wa0)arg6 colorCorrection:(int)arg7 outputMode:(float)arg8 chromaGainAdjPower:(BOOL)arg9 inputIsLinear:(float)arg10 chromaBias:(BOOL)arg11 ;
-(int)fetchTuningParametersFromPlist:(id)arg1 ev0FrameMetadata:(const frameMetadata*)arg2 toneMap:(id)arg3 destinationMTLBuffer:(id)arg4 ;
-(int)performSubjectRelightingWithTonemap:(id)arg1 luma:(id)arg2 chroma:(id)arg3 ltmChroma:(id)arg4 validROI:(CGRect)arg5 skinMask:(id)arg6 personMask:(id)arg7 faceLandmarks:(id)arg8 faceLandmarkOrientation:(int)arg9 ltmOutputMode:(int)arg10 inputIsLinear:(BOOL)arg11 chromaBias:(float)arg12 tmPlist:(id)arg13 ;
-(int)performToneMapSmoothing:(id)arg1 mask:(id)arg2 tmPlist:(id)arg3 ev0FrameMetadata:(const frameMetadata*)arg4 ;
-(int)mstmsApplyLumaGain:(id)arg1 inputLuma:(id)arg2 inputChroma:(id)arg3 outputChroma:(id)arg4 localGainMap:(id)arg5 chromaGainAdjPower:(float)arg6 inputIsLinear:(BOOL)arg7 chromaBias:(float)arg8 ;
-(int)performBlackSubtractionWithBlackWhiteParams:(float)arg1 maxContrastStrength:(id)arg2 inOutTex:(id)arg3 ;
@end

