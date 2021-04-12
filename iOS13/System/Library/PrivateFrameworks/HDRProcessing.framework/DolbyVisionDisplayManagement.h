/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <HDRProcessing/HDRProcessing-Structs.h>
@interface DolbyVisionDisplayManagement : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLComputePipelineState> _displayManagementKernel;
	id<MTLBuffer> _config;
	id<MTLTexture> _inputYTexture;
	id<MTLTexture> _inputUVTexture;
	id<MTLTexture> _outputTexture;

}
-(id)initWithDevice:(id)arg1 ;
-(void)setupMetal;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD42*)arg4 ;
-(void)setupTexturesWithInput:(IOSurfaceRef)arg1 Output:(IOSurfaceRef)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD42*)arg4 tcControl:(ToneCurve_Control*)arg5 hdrControl:(SCD_Struct_HD40*)arg6 ;
@end

