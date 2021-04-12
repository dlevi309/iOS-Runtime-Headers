/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject {

	BOOL _allowsMultipleInflightCaptures;
	BOOL _clientIsCameraOrDerivative;
	BOOL _allowedToModifyInputBuffers;
	unsigned _inputPixelFormat;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	float _maxSupportedFrameRate;
	int _motionAttachmentsSource;
	BOOL _stillImageOutputDerivesFromVideoCaptureOutput;
	FigCaptureSinkConfiguration* _sinkConfiguration;
	BOOL _usesHighEncodingPriority;
	unsigned _outputPixelFormat;
	BOOL _stillImageStabilizationSupported;
	int _noiseReductionAndStabilizationScheme;
	SCD_Struct_BW19 _depthDataDimensions;
	float _portraitEffectsMatteMainImageDownscalingFactor;

}

@property (assign,nonatomic) BOOL allowsMultipleInflightCaptures;                               //@synthesize allowsMultipleInflightCaptures=_allowsMultipleInflightCaptures - In the implementation block
@property (assign,nonatomic) BOOL clientIsCameraOrDerivative;                                   //@synthesize clientIsCameraOrDerivative=_clientIsCameraOrDerivative - In the implementation block
@property (assign,nonatomic) BOOL allowedToModifyInputBuffers;                                  //@synthesize allowedToModifyInputBuffers=_allowedToModifyInputBuffers - In the implementation block
@property (assign,nonatomic) unsigned inputPixelFormat;                                         //@synthesize inputPixelFormat=_inputPixelFormat - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;                                 //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                                   //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) float maxSupportedFrameRate;                                       //@synthesize maxSupportedFrameRate=_maxSupportedFrameRate - In the implementation block
@property (assign,nonatomic) int motionAttachmentsSource;                                       //@synthesize motionAttachmentsSource=_motionAttachmentsSource - In the implementation block
@property (nonatomic,retain) FigCaptureSinkConfiguration * sinkConfiguration;                   //@synthesize sinkConfiguration=_sinkConfiguration - In the implementation block
@property (assign,nonatomic) BOOL usesHighEncodingPriority;                                     //@synthesize usesHighEncodingPriority=_usesHighEncodingPriority - In the implementation block
@property (assign,nonatomic) unsigned outputPixelFormat;                                        //@synthesize outputPixelFormat=_outputPixelFormat - In the implementation block
@property (assign,nonatomic) BOOL stillImageStabilizationSupported;                             //@synthesize stillImageStabilizationSupported=_stillImageStabilizationSupported - In the implementation block
@property (assign,nonatomic) int noiseReductionAndStabilizationScheme;                          //@synthesize noiseReductionAndStabilizationScheme=_noiseReductionAndStabilizationScheme - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW19 depthDataDimensions;                               //@synthesize depthDataDimensions=_depthDataDimensions - In the implementation block
@property (assign,nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;              //@synthesize portraitEffectsMatteMainImageDownscalingFactor=_portraitEffectsMatteMainImageDownscalingFactor - In the implementation block
-(void)dealloc;
-(void)setSinkConfiguration:(FigCaptureSinkConfiguration *)arg1 ;
-(float)maxSupportedFrameRate;
-(float)portraitEffectsMatteMainImageDownscalingFactor;
-(BOOL)stillImageStabilizationSupported;
-(FigCaptureSinkConfiguration *)sinkConfiguration;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(int)motionAttachmentsSource;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(unsigned)outputPixelFormat;
-(void)setClientIsCameraOrDerivative:(BOOL)arg1 ;
-(void)setAllowsMultipleInflightCaptures:(BOOL)arg1 ;
-(void)setAllowedToModifyInputBuffers:(BOOL)arg1 ;
-(void)setInputPixelFormat:(unsigned)arg1 ;
-(void)setMaxSupportedFrameRate:(float)arg1 ;
-(void)setUsesHighEncodingPriority:(BOOL)arg1 ;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(void)setStillImageStabilizationSupported:(BOOL)arg1 ;
-(void)setNoiseReductionAndStabilizationScheme:(int)arg1 ;
-(void)setDepthDataDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setPortraitEffectsMatteMainImageDownscalingFactor:(float)arg1 ;
-(BOOL)clientIsCameraOrDerivative;
-(BOOL)allowsMultipleInflightCaptures;
-(BOOL)allowedToModifyInputBuffers;
-(unsigned)inputPixelFormat;
-(int)noiseReductionAndStabilizationScheme;
-(SCD_Struct_BW19)depthDataDimensions;
-(BOOL)usesHighEncodingPriority;
@end

