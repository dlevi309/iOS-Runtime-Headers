/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
*/


@protocol MTLDevice, MTLCommandQueue, OS_dispatch_queue, OS_dispatch_semaphore;
#import <HDRProcessing/HDRProcessing-Structs.h>
@class MSRHDRProcessing, DolbyVisionComposer, SpatialResampler, DolbyVisionDisplayManagement, NSObject;

@interface HDRProcessor : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	MSRHDRProcessing* _msr;
	DolbyVisionComposer* _composer;
	SpatialResampler* _resampler;
	DolbyVisionDisplayManagement* _dm;
	EDRMetaData_RBSP* _parser;
	SCD_Struct_HD25* _edrMetaData[2];
	unsigned _hardwareType;
	unsigned _hdrMode;
	unsigned long long _bitDepth;
	unsigned long long _sdrMaxBrightnessInNits;
	unsigned _displayType;
	unsigned long long _displayDiagonalSize;
	unsigned long long _maxDisplayBrightnessNits;
	float _minDisplayBrightnessNits;
	float _displayContrastRatio;
	unsigned _displayCompensationType;
	float _displayCompensationGammaValue;
	unsigned long long _videoFullRangeFlag;
	unsigned long long _colourPrimaries;
	unsigned long long _transferFunction;
	unsigned long long _matrixCoeffs;
	unsigned long long _maxMasteringNits;
	float _minMasteringNits;
	unsigned long long _numberOfRequestedFrames;
	unsigned long long _numberOfScheduledFrames;
	unsigned long long _numberOfProcessedFrames;
	SCD_Struct_HD26* _configurationParameters;
	CVPixelBufferPoolRef _420vPool;
	CVPixelBufferPoolRef _x420Pool;
	NSObject*<OS_dispatch_queue> _scheduleQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_semaphore> _scheduleSemaphone;
	CFErrorRef _error_success;
	float _defaultMaxEDRValue;
	float _defaultEDRFactorValue;
	float _defaultAmbientLightValue;
	float _defaultContrastRatioValue;
	double _targetNits;
	double _targetMinNits;
	CFStringRef _targetColorPrimaries;

}

@property (assign) float defaultMaxEDRValue;                      //@synthesize defaultMaxEDRValue=_defaultMaxEDRValue - In the implementation block
@property (assign) float defaultEDRFactorValue;                   //@synthesize defaultEDRFactorValue=_defaultEDRFactorValue - In the implementation block
@property (assign) float defaultAmbientLightValue;                //@synthesize defaultAmbientLightValue=_defaultAmbientLightValue - In the implementation block
@property (assign) float defaultContrastRatioValue;               //@synthesize defaultContrastRatioValue=_defaultContrastRatioValue - In the implementation block
@property (assign) double targetNits;                             //@synthesize targetNits=_targetNits - In the implementation block
@property (assign) double targetMinNits;                          //@synthesize targetMinNits=_targetMinNits - In the implementation block
@property (assign) CFStringRef targetColorPrimaries;              //@synthesize targetColorPrimaries=_targetColorPrimaries - In the implementation block
+(void)dolbyIOMFBMetadata:(SCD_Struct_HD32*)arg1 withMinBrightness:(float)arg2 maxBrightness:(float)arg3 ;
-(void)dealloc;
-(BOOL)allocateResources;
-(void)releaseResources;
-(long long)encodeToCommandBuffer:(id)arg1 inputSurfaceLayer0:(IOSurfaceRef)arg2 inputSurfacelayer1:(IOSurfaceRef)arg3 outputSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 ;
-(long long)generateMSRColorConfigWithOperation:(unsigned)arg1 config:(SCD_Struct_HD36*)arg2 inputSurface:(IOSurfaceRef)arg3 outputSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 histogram:(RgbHistogram_t*)arg6 ;
-(id)initWithDevice:(id)arg1 config:(const SCD_Struct_HD37*)arg2 ;
-(id)initWithConfig:(SCD_Struct_HD37*)arg1 ;
-(long long)processFrameWithLayer0:(CVBufferRef)arg1 layer1:(CVBufferRef)arg2 output:(CVBufferRef)arg3 metadata:(id)arg4 commandbuffer:(id)arg5 callback:(/*^block*/id)arg6 ;
-(long long)processFrameInternalWithLayer0:(IOSurfaceRef)arg1 layer1:(IOSurfaceRef)arg2 outout:(IOSurfaceRef)arg3 metadata:(id)arg4 commandbuffer:(id)arg5 operation:(unsigned)arg6 config:(SCD_Struct_HD36*)arg7 histogram:(RgbHistogram_t*)arg8 ;
-(BOOL)hasMetalDeviceChanged:(id)arg1 ;
-(long long)ValidateMSRColorConfigInput:(unsigned)arg1 config:(SCD_Struct_HD36*)arg2 inputSurface:(IOSurfaceRef)arg3 outputSurface:(IOSurfaceRef)arg4 metadata:(id)arg5 histogram:(RgbHistogram_t*)arg6 ;
-(void)extractFrameMetadata:(CFDictionaryRef)arg1 intoTCControl:(ToneCurve_Control*)arg2 ;
-(void)extractCAMetaData:(id)arg1 withRPU:(BOOL)arg2 tcCtrl:(ToneCurve_Control*)arg3 ;
-(void)checkIOSurface:(IOSurfaceRef)arg1 forInfoFrame:(SCD_Struct_HD22*)arg2 withRPUData:(BOOL)arg3 ;
-(unsigned)selectHDRUsage;
-(void)setHDRControl:(SCD_Struct_HD40*)arg1 withRUP:(BOOL)arg2 ;
-(long long)processPixelsWithLayer0:(IOSurfaceRef)arg1 layer1:(IOSurfaceRef)arg2 output:(IOSurfaceRef)arg3 metaData:(SCD_Struct_HD43*)arg4 tcControl:(ToneCurve_Control*)arg5 hdrControl:(SCD_Struct_HD40*)arg6 hdr10InfoFrame:(SCD_Struct_HD22*)arg7 commandbuffer:(id)arg8 ;
-(void)extractHEVCHDRParameterFromInputIOSurface:(IOSurfaceRef)arg1 forInfoFrame:(SCD_Struct_HD22*)arg2 ;
-(void)getDisplayPipelineCompensationType:(id)arg1 gamma:(float)arg2 ;
-(void)setCSCMatrixInHDRControl:(SCD_Struct_HD40*)arg1 forIndex:(unsigned)arg2 ;
-(float)defaultMaxEDRValue;
-(void)setDefaultMaxEDRValue:(float)arg1 ;
-(float)defaultEDRFactorValue;
-(void)setDefaultEDRFactorValue:(float)arg1 ;
-(float)defaultAmbientLightValue;
-(void)setDefaultAmbientLightValue:(float)arg1 ;
-(float)defaultContrastRatioValue;
-(void)setDefaultContrastRatioValue:(float)arg1 ;
-(double)targetNits;
-(void)setTargetNits:(double)arg1 ;
-(double)targetMinNits;
-(void)setTargetMinNits:(double)arg1 ;
-(CFStringRef)targetColorPrimaries;
-(void)setTargetColorPrimaries:(CFStringRef)arg1 ;
@end

