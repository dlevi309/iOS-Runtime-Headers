/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLComputePipelineState;
#import <CMCapture/CMCapture-Structs.h>
@class FigMetalContext;

@interface FigMetalHistogram : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _pipelineStates[1];

}
-(int)_initShaders;
-(int)singleComponentCPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputHistogram:(SCD_Struct_Fi99*)arg3 ;
-(int)singleComponentGPUAverageInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputAverage:(float*)arg3 ;
-(int)singleComponentCPUAverageInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputAverage:(float*)arg3 ;
-(id)initWithMetalContext:(id)arg1 ;
-(int)singleComponentGPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 outputHistogram:(SCD_Struct_Fi99*)arg3 ;
-(int)singleComponentCPUHistogramInputPixelBuffer:(CVBufferRef)arg1 validRect:(CGRect)arg2 subSampleX:(unsigned)arg3 subSampleY:(unsigned)arg4 outputHistogram:(SCD_Struct_Fi99*)arg5 ;
@end

