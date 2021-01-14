/*
* Generated on Thursday, January 14, 2021 at 2:29:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLBuffer, MTLTexture;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class DMShader;

@interface DolbyVisionDisplayManagement : NSObject {

	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	DMShader* _displayManagementKernel;
	id<MTLBuffer> _config;
	id<MTLTexture> _inputYTexture;
	id<MTLTexture> _inputUVTexture;
	id<MTLTexture> _outputTexture;
	unsigned long long _inputProtectionOptions;
	unsigned long long _outputProtectionOptions;

}
-(id)initWithDevice:(id)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD45*)arg4 ;
-(void)setupMetal;
-(id)getComputePipeLineStateForShader:(id)arg1 ;
-(void)setupTexturesWithInput:(IOSurfaceRef)arg1 Output:(IOSurfaceRef)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 Input:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD45*)arg4 tcControl:(ToneCurve_Control*)arg5 hdrControl:(SCD_Struct_HD43*)arg6 ;
@end

