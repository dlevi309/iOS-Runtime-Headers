/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol SidecarWriter;
#import <UB/UB-Structs.h>
@class FigMetalContext, SyntheticReferenceShaders, NSMutableArray;

@interface SyntheticReferenceStage : NSObject {

	FigMetalContext* _metal;
	SyntheticReferenceShaders* _shaders;
	unsigned long long _pyramidLevels;
	NSMutableArray* _dsrResult;
	int _syntheticReferenceMode;
	BOOL _useMotionDetector;
	id<SidecarWriter> _sidecarWriter;

}

@property (assign,nonatomic,__weak) id<SidecarWriter> sidecarWriter;              //@synthesize sidecarWriter=_sidecarWriter - In the implementation block
+(int)prewarmShaders:(id)arg1 ;
+(unsigned long long)computeScratchBufferSizeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 metal:(id)arg3 ;
+(unsigned long long)pyramidLevels;
+(unsigned long long)_computeBufferOffset:(unsigned long long*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(unsigned long long)arg4 metal:(id)arg5 ;
+(unsigned long long)_computeScratchBufferSizeForHighlightRecoveryWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 metal:(id)arg3 ;
+(unsigned long long)_computeScratchBufferSizeForDeepShadowRecoveryWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 metal:(id)arg3 ;
-(id)initWithMetalContext:(id)arg1 ;
-(void)purgeResources;
-(int)allocateResourcesWithScratchBuffer:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)setSidecarWriter:(id<SidecarWriter>)arg1 ;
-(int)startDetectorsWithGrayGhost:(id)arg1 motionDetection:(id)arg2 evm:(id)arg3 ev0:(id)arg4 evmProperties:(const frameProperties_t*)arg5 ev0Properties:(const frameProperties_t*)arg6 ubPlist:(id)arg7 ;
-(int)collectDetectorsResultsWithGrayGhost:(id)arg1 motionDetection:(id)arg2 ubPlist:(id)arg3 ;
-(int)getSyntheticReferenceMode;
-(int)doSyntheticReference:(id)arg1 noiseDivisorOutputTex:(id)arg2 lscGainsTex:(id)arg3 evm:(id)arg4 ev0:(id)arg5 evmHomography:(SCD_Struct_Wa0)arg6 ev0Homography:(SCD_Struct_Wa0)arg7 evmProperties:(const frameProperties_t*)arg8 evmGreenTintAdjustment:(SCD_Struct_De20)arg9 ev0Properties:(const frameProperties_t*)arg10 ubPlist:(id)arg11 intermediateMetadata:(id)arg12 ;
-(int)generateNoiseMap:(id)arg1 outputNoiseMapChroma:(id)arg2 noiseDivisorTex:(id)arg3 lscGainsTex:(id)arg4 evm:(id)arg5 ev0:(id)arg6 evmHomography:(SCD_Struct_Wa0)arg7 ev0Homography:(SCD_Struct_Wa0)arg8 evmProperties:(const frameProperties_t*)arg9 evmGreenTintAdjustmentParams:(SCD_Struct_De20)arg10 ev0Properties:(const frameProperties_t*)arg11 ;
-(int)generateNoiseMap:(id)arg1 outputNoiseMapChroma:(id)arg2 lscGainsTex:(id)arg3 ev0:(id)arg4 ev0Homography:(SCD_Struct_Wa0)arg5 ev0Properties:(const frameProperties_t*)arg6 ;
-(id<SidecarWriter>)sidecarWriter;
-(id)_allocTextureWithDesc:(id)arg1 offset:(unsigned long long*)arg2 buffer:(id)arg3 ;
-(int)_allocateResourcesWithScratchBufferDeepShadowRecovery:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 ;
-(void)_purgeResourcesHighlightRecovery;
-(void)_purgeResourcesDeepShadowRecovery;
-(int)_doHighlightRecovery:(id)arg1 noiseDivisorOutputTex:(id)arg2 evm:(id)arg3 ev0:(id)arg4 evmHomography:(SCD_Struct_Wa0)arg5 ev0Homography:(SCD_Struct_Wa0)arg6 evmProperties:(const frameProperties_t*)arg7 evmGreenTintAdjustmentParams:(SCD_Struct_De20)arg8 ev0Properties:(const frameProperties_t*)arg9 srPlist:(id)arg10 ;
-(int)_doDeepShadowRecovery:(id)arg1 noiseDivisorOutputTex:(id)arg2 lscGainsTex:(id)arg3 evm:(id)arg4 ev0:(id)arg5 evmHomography:(SCD_Struct_Wa0)arg6 ev0Homography:(SCD_Struct_Wa0)arg7 evmProperties:(const frameProperties_t*)arg8 evmGreenTintAdjustmentParams:(SCD_Struct_De20)arg9 ev0Properties:(const frameProperties_t*)arg10 srPlist:(id)arg11 ;
-(int)_doColorConvertEv0ToOutput:(id)arg1 ev0:(id)arg2 ev0Properties:(const frameProperties_t*)arg3 ;
@end

