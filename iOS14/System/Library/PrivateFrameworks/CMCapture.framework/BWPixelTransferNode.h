/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class NSArray, BWPixelBufferPool, NSObject, HDRProcessor, BWLimitedGMErrorLogger, NSString;

@interface BWPixelTransferNode : BWNode <BWNodeBackPressureSource> {

	int _cropMode;
	int _liveCropMode;
	CGRect _inputCropRect;
	CGRect _liveInputCropRect;
	BOOL _haveLiveInputCropRect;
	BOOL _passesBuffersThroughWhenPossible;
	BOOL _livePassesBuffersThroughWhenPossible;
	BOOL _appliesUprightExifOrientationTransformToInput;
	BOOL _liveAppliesUprightExifOrientationTransformToInput;
	int _rotationDegrees;
	int _liveRotationDegrees;
	BOOL _flipHorizontal;
	BOOL _liveFlipHorizontal;
	BOOL _flipVertical;
	BOOL _liveFlipVertical;
	BOOL _liveZeroFillBuffers;
	BOOL _lowSpeed;
	BOOL _liveLowSpeed;
	BOOL _updatesSampleBufferMetadataForIrisVIS;
	BOOL _liveUpdatesSampleBufferMetadataForIrisVIS;
	unsigned long long _outputWidth;
	unsigned long long _outputHeight;
	unsigned _outputPixelFormat;
	NSArray* _preferredOutputPixelFormats;
	int _outputColorSpaceProperties;
	SCD_Struct_BW2 _validOutputDimensions;
	SCD_Struct_BW2 _liveValidOutputDimensions;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	BOOL _rotationSessionFlipHorizontal;
	BOOL _rotationSessionFlipVertical;
	BOOL _rotationSessionZeroFillBuffers;
	BOOL _rotationSessionLowSpeed;
	BOOL _rotationSessionEnablesHistogram;
	int _rotationSessionColorSpaceProperties;
	int _lastInputUprightExifOrientation;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW2 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	BOOL _makeCurrentConfigurationLiveOnNextRenderCallback;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	BOOL _expectsMarkerBuffers;
	BOOL _liveExpectsMarkerBuffers;
	BOOL _appliesPrimaryCaptureRect;
	BOOL _generatesHistogram;
	int _conversionMethodForStillImagesDuringHDRVideo;
	CVBufferRef _intermediatePixelBufferForStillHDRToSDRConversion;
	HDRProcessor* _HDRProcessingProcessor;
	IOSurfaceAcceleratorRef _msrScalerForHDRProcessing;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(int)rotationDegrees;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)makeCurrentConfigurationLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(unsigned)outputPixelFormat;
-(id)nodeType;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(unsigned long long)outputWidth;
-(void)_updatePrimaryCaptureRect:(CGRect)arg1 forOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(unsigned long long)outputHeight;
-(id)init;
-(void)setGeneratesHistogram:(BOOL)arg1 ;
-(int)cropMode;
-(void)_updatePassthroughModes;
-(void)setPassesBuffersThroughWhenPossible:(BOOL)arg1 ;
-(void)_updateMetadataForOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 destinationRect:(CGRect)arg2 ;
-(BOOL)expectsMarkerBuffers;
-(id)preferredOutputPixelFormats;
-(int)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW2)arg1 ;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(int)conversionMethodForStillImagesDuringHDRVideos;
-(BOOL)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setValidOutputDimensions:(SCD_Struct_BW2)arg1 ;
-(BOOL)lowSpeed;
-(void)setExpectsMarkerBuffers:(BOOL)arg1 ;
-(BOOL)appliesPrimaryCaptureRect;
-(CGRect)inputCropRect;
-(void)_updateOutputRequirements;
-(int)_convertUsingHDRProcessing:(CVBufferRef)arg1 toSDR:(CVBufferRef)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(id)_supportedInputPixelFormats;
-(SCD_Struct_BW2)validOutputDimensions;
-(BOOL)updatesSampleBufferMetadataForIrisVIS;
-(id)_supportedOutputPixelFormats;
-(int)outputColorSpaceProperties;
-(void)setRotationDegrees:(int)arg1 ;
-(void)_updateInputRequirements;
-(BOOL)_zeroFillBuffers;
-(void)setPreferredOutputPixelFormats:(id)arg1 ;
-(SCD_Struct_BW2)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW2)arg1 outputDimensions:(SCD_Struct_BW2)arg2 ;
-(void)setUpdatesSampleBufferMetadataForIrisVIS:(BOOL)arg1 ;
-(BOOL)flipVertical;
-(void)setCropMode:(int)arg1 ;
-(void)setAppliesPrimaryCaptureRect:(BOOL)arg1 ;
-(void)_ensureTransferSession;
-(BOOL)appliesUprightExifOrientationTransformToInput;
-(BOOL)passesBuffersThroughWhenPossible;
-(void)_updateLiveRotationAndFlipsToApplyUprightExifOrientation:(int)arg1 ;
-(void)setInputCropRect:(CGRect)arg1 ;
-(void)_ensureIntermediatePixelBufferForStillHDRToSDRConversionIfNeeded;
-(BOOL)generatesHistogram;
-(BOOL)flipHorizontal;
-(void)setConversionMethodForStillImagesDuringHDRVideos:(int)arg1 ;
-(void)_ensureRotationSession;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(void)_updateUprightExifOrientationOnSampleBufferIfNeeded:(opaqueCMSampleBufferRef)arg1 ;
-(void)_makeCurrentConfigurationLive;
-(void)setFlipHorizontal:(BOOL)arg1 ;
-(void)setLowSpeed:(BOOL)arg1 ;
-(void)setAppliesUprightExifOrientationTransformToInput:(BOOL)arg1 ;
-(void)_updateCameraIntrinsicsMatrixOnSampleBufferIfNeeded:(opaqueCMSampleBufferRef)arg1 inputCropRect:(CGRect)arg2 ;
-(void)dealloc;
-(CGRect)_getUpdatedPrimaryCaptureRectForOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 inputDimensions:(SCD_Struct_BW2)arg2 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(void)setFlipVertical:(BOOL)arg1 ;
@end

