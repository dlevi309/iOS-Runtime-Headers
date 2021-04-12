/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@protocol MTLCommandBuffer, MTLBuffer;
#import <UB/UB-Structs.h>
@class FigMetalContext, GrayGhostDetectionShaders;

@interface GrayGhostDetection : NSObject {

	FigMetalContext* _metal;
	GrayGhostDetectionShaders* _shaders;
	id<MTLCommandBuffer> _pendingResultCommandBuffer;
	id<MTLBuffer> _grayGhostCountBuffer;
	unsigned long long _totalPixels;

}
+(int)prewarmShaders:(id)arg1 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)runGrayGhostDetection:(id)arg1 ev0Bands:(id)arg2 evmProperties:(const frameProperties_t*)arg3 ev0Properties:(const frameProperties_t*)arg4 hasChromaBias:(BOOL)arg5 atBand:(int)arg6 params:(const GrayGhostParams*)arg7 ;
-(float)getGrayGhostResultSync;
@end

