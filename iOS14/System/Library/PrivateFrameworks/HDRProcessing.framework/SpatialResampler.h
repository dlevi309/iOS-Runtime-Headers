/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class ResamplerShader;

@interface SpatialResampler : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	ResamplerShader* _verticalResampleKernel;
	ResamplerShader* _verticalResampleChromaKernel;
	ResamplerShader* _horizontalResampleKernel;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)createKernels;
-(id)getComputePipeLineStateForShader:(id)arg1 ;
-(void)setupTextures:(id)arg1 input:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 ;
-(void)encodeSpatialResampleVertical:(id)arg1 Input:(id)arg2 Output:(id)arg3 isChroma:(BOOL)arg4 ;
-(void)encodeSpatialResampleHorizontal:(id)arg1 Input:(id)arg2 Output:(id)arg3 ;
@end

