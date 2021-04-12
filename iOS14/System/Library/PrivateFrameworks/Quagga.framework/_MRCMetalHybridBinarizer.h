/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Quagga.framework/Quagga
*/


@protocol MTLComputePipelineState;
#import <Quagga/Quagga-Structs.h>
@class _MRCMetalContext;

@interface _MRCMetalHybridBinarizer : NSObject {

	_MRCMetalContext* _metalContext;
	id<MTLComputePipelineState> _calcuateBlackPointsPipelineState;
	id<MTLComputePipelineState> _fixBlackPointsPipelineState;
	id<MTLComputePipelineState> _thresholdPipelineState;

}
-(id)init;
-(id)initWithMetalContext:(id)arg1 error:(id*)arg2 ;
-(id)newTextureByBinarizingPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

