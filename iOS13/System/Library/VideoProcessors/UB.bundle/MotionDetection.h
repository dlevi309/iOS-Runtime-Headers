/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLBuffer, MTLTexture, MTLCommandBuffer;
#import <UB/UB-Structs.h>
@class FigMetalContext, MotionDetectionShaders;

@interface MotionDetection : NSObject {

	FigMetalContext* _metal;
	MotionDetectionShaders* _shaders;
	id<MTLBuffer> _motionDetectScore;
	id<MTLTexture> _motionDetectClippingMap;
	id<MTLTexture> _motionDetectClippingMapDilated;
	id<MTLTexture> _motionDetectScoreMap;
	id<MTLTexture> _motionDetectDownsampledEV0;
	id<MTLTexture> _motionDetectDownsampledEVM;
	id<MTLTexture> _motionDetectGradientEV0;
	id<MTLTexture> _motionDetectWarpedEVM;
	id<MTLTexture> _motionDetectGradientEV0AsRG;
	id<MTLTexture> _motionDetectGradientEVM;
	id<MTLTexture> _motionDetectGradientEVMAsRG;
	id<MTLTexture> _llmotionDetectScoreMap;
	id<MTLTexture> _llmotionDetectDownsampledEV0;
	id<MTLTexture> _llmotionDetectDownsampledEVM;
	id<MTLTexture> _llmotionDetectWarpedEVM;
	id<MTLCommandBuffer> _pendingResultCommandBuffer;
	float _tileScoreScale;
	float _scorePower;

}
+(int)prewarmShaders:(id)arg1 ;
+(unsigned long long)scratchBufferBytesRequiredForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 metal:(id)arg3 ;
+(unsigned long long)computeBufferOffset:(unsigned long long*)arg1 width:(int)arg2 height:(int)arg3 format:(unsigned long long)arg4 metal:(id)arg5 ;
-(void)dealloc;
-(void)releaseResources;
-(id)initWithMetalContext:(id)arg1 ;
-(int)allocateResourcesForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scratchBuffer:(id)arg3 ;
-(int)runMotionDetection:(float*)arg1 evm:(id)arg2 ev0:(id)arg3 evmProperties:(const frameProperties_t*)arg4 ev0Properties:(const frameProperties_t*)arg5 ubPlist:(id)arg6 ;
-(float)getMotionDetectionResultSync;
-(int)runMotionDetectionLL:(BOOL)arg1 image:(id)arg2 imgProperties:(frameProperties_t*)arg3 refProperties:(frameProperties_t*)arg4 ;
-(id)allocTextureWithDesc:(id)arg1 offset:(unsigned long long*)arg2 buffer:(id)arg3 ;
-(int)startMotionDetection:(id)arg1 evm:(id)arg2 ev0:(id)arg3 evmProperties:(const frameProperties_t*)arg4 ev0Properties:(const frameProperties_t*)arg5 ;
@end

