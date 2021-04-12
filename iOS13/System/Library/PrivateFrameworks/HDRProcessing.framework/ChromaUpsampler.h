/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState;
#import <HDRProcessing/HDRProcessing-Structs.h>
@interface ChromaUpsampler : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLComputePipelineState> _verticalChromaFilterKernel;
	id<MTLComputePipelineState> _horizontalChromaFilterKernel;

}
-(id)initWithDevice:(id)arg1 ;
-(void)setupMetal;
-(void)encodeChromaUpsampleVertical:(id)arg1 Input:(id)arg2 Output:(id)arg3 ;
-(void)encodeChromaUpsampleHorizontal:(id)arg1 Input:(id)arg2 Output:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 InputUV:(IOSurfaceRef)arg2 OutputUV:(IOSurfaceRef)arg3 ;
@end

