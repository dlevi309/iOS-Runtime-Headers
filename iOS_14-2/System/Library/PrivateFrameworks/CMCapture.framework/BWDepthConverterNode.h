/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol DepthProcessor;
@class NSDictionary, NSString, BWStillImageNodeConfiguration;

@interface BWDepthConverterNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	BOOL _forceCPath;
	SCD_Struct_BW2 _inputDepthDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	unsigned _outputFormat;
	SCD_Struct_BW2 _outputDimensions;
	SCD_Struct_BW14 _identityExtrinsicMatrix;
	SCD_Struct_BW14 _infraredCameraExtrinsicMatrix;
	int _depthAccuracy;
	BOOL _depthLensDistortionCorrectionPolynomialsAvailable;
	SCD_Struct_BW97 _depthLensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW97 _depthLensDistortionCorrectionDynamicPolynomial;
	float _depthRelativePixelSizeInMicrons;
	float _infraredCameraPixelSizeInMicrons;
	int _baseRotationDegrees;
	int _rotationDegrees;
	BOOL _mirroringEnabled;
	BOOL _streamingFilteringEnabled;
	BOOL _stillFilteringEnabled;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	BOOL _depthIsAlwaysHighQuality;
	BOOL _depthOriginatesFromNeuralNetwork;
	CVBufferRef _fixedPointScaledIntermediateBuffer;
	CVBufferRef _fixedPointRotatedIntermediateBuffer;
	CVBufferRef _filteringInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthOutputBuffer;
	CVBufferRef _filteringScaledYUVBuffer;
	CVBufferRef _filteringOutputBuffer;
	BOOL _conversionAfterFilteringRequired;
	BOOL _depthFromInfrared;
	NSString* _depthProcessorClassName;
	FigPhotoScaleAndRotateSessionRef _scaler;
	id<DepthProcessor> _depthProcessor;
	int _depthBufferOriginalExifOrientation;
	int _depthBufferFinalExifOrientation;
	BOOL _workIntervalHintsEnabled;
	work_intervalRef _workInterval;
	BWStillImageNodeConfiguration* _nodeConfiguration;

}
+(void)initialize;
-(int)rotationDegrees;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeType;
-(void)setOutputFormat:(unsigned)arg1 ;
-(id)nodeSubType;
-(int)_parseCameraInfo;
-(int)_loadAndConfigureDepthProcessorClass:(id)arg1 ;
-(int)baseRotationDegrees;
-(int)_computeConversionParametersFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 convertOptionsOut:(SCD_Struct_BW132*)arg2 ;
-(int)_convertDepthDisparityToFloat_NEON:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW132*)arg3 ;
-(int)_convertDepthDisparityToFloat_C:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW132*)arg3 ;
-(int)convertToFloatAndRotate:(opaqueCMSampleBufferRef)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(int)filterBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 imageSampleBuffer:(opaqueCMSampleBufferRef)arg3 depthSampleBuffer:(opaqueCMSampleBufferRef)arg4 ;
-(id)_depthMetadataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 stillFilteringRequested:(BOOL)arg3 ;
-(int)rotateAndScaleImagePixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 to:(CVBufferRef)arg3 rotationAngle:(int)arg4 flip:(BOOL)arg5 ;
-(BOOL)streamingFilteringEnabled;
-(void)setStreamingFilteringEnabled:(BOOL)arg1 ;
-(BOOL)stillFilteringEnabled;
-(unsigned)outputFormat;
-(BOOL)mirroringEnabled;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(int)verticalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(void)_updateOutputRequirements;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)outputDimensions;
-(int)horizontalSensorBinningFactor;
-(id)initWithNodeConfiguration:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDDictionary:(id)arg3 rgbPersonSegmentationEnabled:(BOOL)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 depthOriginatesFromNeuralNetwork:(BOOL)arg6 ;
-(void)setStillFilteringEnabled:(BOOL)arg1 ;
-(void)setBaseRotationDegrees:(int)arg1 ;
-(void)dealloc;
@end

