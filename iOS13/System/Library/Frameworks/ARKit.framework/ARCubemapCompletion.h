/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@protocol MTLTexture, MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKit/ARKit-Structs.h>
@class ARGPUCubemapConverter, ARGPUSphericalBlur;

@interface ARCubemapCompletion : NSObject {

	void* _espresso_ctx;
	void* _espresso_plan;
	SCD_Struct_AR129* _espresso_net;
	SCD_Struct_AR130 _espresso_processing_params;
	BOOL _espressoInitialized;
	vector<unsigned char, std::__1::allocator<unsigned char> > _randomNumbers;
	vector<unsigned char, std::__1::allocator<unsigned char> > _srgbToLogLUT;
	vImage_Buffer* _vImageBuffer;
	ARGPUCubemapConverter* _cubemapConverter;
	ARGPUSphericalBlur* _sphericalBlur;
	id<MTLTexture> _roughness;
	double _bias_exposure_threshold;
	unsigned long long _bias_height;
	float _r_bias;
	float _g_bias;
	float _b_bias;
	int _bias_mask;
	float _r_avg;
	float _g_avg;
	float _b_avg;
	float _alpha_threshold;
	unsigned long long _gan_size;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	id<MTLComputePipelineState> _combineBuffersToHDR;
	BOOL _generateHDROutput;

}

@property (assign,nonatomic) BOOL generateHDROutput;              //@synthesize generateHDROutput=_generateHDROutput - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setGenerateHDROutput:(BOOL)arg1 ;
-(id)completeCubemap:(id)arg1 cameraExposure:(double)arg2 rotationWorldFromCube:(SCD_Struct_AR24)arg3 ;
-(id)generateSeamSmoothingTexture;
-(unsigned char)srgbToLog:(unsigned char)arg1 ;
-(id)grayCubemapOfSize:(unsigned long long)arg1 ;
-(id)completeLatLongImage:(id)arg1 ;
-(vImage_Buffer*)toVImageBuffer:(id)arg1 ;
-(id)toTexture:(SCD_Struct_AR17*)arg1 ;
-(BOOL)generateHDROutput;
@end

