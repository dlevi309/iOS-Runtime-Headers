/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol DepthProcessor;
@class NSDictionary, NSString, BWStillImageNodeConfiguration;

@interface BWDepthConverterNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	BOOL _forceCPath;
	SCD_Struct_BW19 _inputDepthDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	unsigned _outputFormat;
	SCD_Struct_BW19 _outputDimensions;
	SCD_Struct_BW69 _identityExtrinsicMatrix;
	SCD_Struct_BW69 _infraredCameraExtrinsicMatrix;
	int _depthAccuracy;
	BOOL _depthLensDistortionCorrectionPolynomialsAvailable;
	SCD_Struct_BW21 _depthLensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW21 _depthLensDistortionCorrectionDynamicPolynomial;
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
-(void)dealloc;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(id)nodeType;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
-(BOOL)mirroringEnabled;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW19)arg1 ;
-(SCD_Struct_BW19)outputDimensions;
-(void)_updateOutputRequirements;
-(int)_parseCameraInfo;
-(int)_loadAndConfigureDepthProcessorClass:(id)arg1 ;
-(int)_computeConversionParametersFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 convertOptionsOut:(SCD_Struct_BW72*)arg2 ;
-(int)_convertDepthDisparityToFloat_NEON:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW72*)arg3 ;
-(int)_convertDepthDisparityToFloat_C:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW72*)arg3 ;
-(int)convertToFloatAndRotate:(opaqueCMSampleBufferRef)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(int)filterBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 imageSampleBuffer:(opaqueCMSampleBufferRef)arg3 depthSampleBuffer:(opaqueCMSampleBufferRef)arg4 ;
-(id)_depthMetadataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 stillFilteringRequested:(BOOL)arg3 ;
-(int)rotateAndScaleImagePixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 to:(CVBufferRef)arg3 rotationAngle:(int)arg4 flip:(BOOL)arg5 ;
-(id)initWithNodeConfiguration:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDDictionary:(id)arg3 rgbPersonSegmentationEnabled:(BOOL)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 depthOriginatesFromNeuralNetwork:(BOOL)arg6 ;
-(void)setBaseRotationDegrees:(int)arg1 ;
-(int)baseRotationDegrees;
-(void)setStreamingFilteringEnabled:(BOOL)arg1 ;
-(BOOL)streamingFilteringEnabled;
-(void)setStillFilteringEnabled:(BOOL)arg1 ;
-(BOOL)stillFilteringEnabled;
@end

