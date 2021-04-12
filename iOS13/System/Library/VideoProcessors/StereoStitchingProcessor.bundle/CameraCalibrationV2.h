/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@protocol MTLTexture;
#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class FigMetalContext, StereoStitchingGpuUtilities, FigWiredMemory, Calibration, RegWarpPP;

@interface CameraCalibrationV2 : NSObject {

	FigMetalContext* _metalContext;
	StereoStitchingGpuUtilities* _utilityProcessor;
	SCD_Struct_Fi68 _tuningParameters;
	FigWiredMemory* _sharedRegWarpBuffer;
	Calibration* _calibrationProcessor;
	unsigned _calibProcConfiguredNumPoints;
	id<MTLTexture> _registrationTexture;
	CVBufferRef _registrationPixelBuffer;
	unsigned _resourcesAllocatedWidth;
	unsigned _resourcesAllocatedHeight;
	SCD_Struct_Fi4 _referenceValidBufferRect;
	RegWarpPP* _registrationProcessor;
	SCD_Struct_Ca73 _registrationProcessorConfig;
	SCD_Struct_Ca74 _registrationPointsPairs[3072];
	SCD_Struct_Fi8 _registrationProcessorHomography;
	unsigned _configuredGridWidth;
	unsigned _configuredGridHeight;
	CGPoint _adaptiveCorrectionKeypointsReferenceDistorted[3072];
	CGPoint _adaptiveCorrectionKeypointsAuxiliaryDistorted[3072];
	unsigned _keypointsCount;
	int _registrationProcessorResults;
	SCD_Struct_Fi9 _outputResults;

}
-(void)dealloc;
-(void)releaseResources;
-(int)setSharedRegWarpBuffer:(id)arg1 ;
-(int)extractParametersFromOptions:(id)arg1 adaptiveCorrectionConfig:(SCD_Struct_Fi69)arg2 ;
-(int)compileShaders;
-(id)initWithMetalContext:(id)arg1 utilityProcessor:(id)arg2 ;
-(int)setMaximumsAndAllocateResources:(unsigned)arg1 maximumSupportedImageHeight:(unsigned)arg2 ;
-(int)calculateRegWarpMemoryRequirements:(unsigned long long*)arg1 ;
-(int)computeCalibration:(id)arg1 wideMetadata:(id)arg2 narowLumaTexture:(id)arg3 wideLumaTexture:(id)arg4 narrowValidBufferRect:(SCD_Struct_Fi4)arg5 cameraCalibrationResults:(SCD_Struct_Ca75*)arg6 ;
-(int)reallocatePixelBuffersAndTextures:(unsigned)arg1 height:(unsigned)arg2 ;
-(int)verifySubProcessorsResources:(unsigned)arg1 height:(unsigned)arg2 ;
-(int)detectKeypoints:(id)arg1 referenceValidRectBuffer:(SCD_Struct_Fi4)arg2 auxiliaryLumaTexture:(id)arg3 auxiliaryValidRectBuffer:(SCD_Struct_Fi4)arg4 ;
-(int)computeWideRoiWithValidBufferRect:(SCD_Struct_Fi4)arg1 usingADCHomographies:(BOOL)arg2 wideWidth:(unsigned)arg3 wideHeight:(unsigned)arg4 resultingRoi:(SCD_Struct_Fi4*)arg5 ;
-(int)checkValidROI:(SCD_Struct_Fi4)arg1 reference:(SCD_Struct_Fi4)arg2 ;
@end

