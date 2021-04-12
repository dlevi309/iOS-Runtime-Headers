/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWNodeBackPressureSource.h>

@protocol OS_dispatch_semaphore;
@class BWPixelBufferPool, NSObject, BWLimitedGMErrorLogger, NSString;

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
	int _outputColorSpaceProperties;
	SCD_Struct_BW19 _validOutputDimensions;
	SCD_Struct_BW19 _liveValidOutputDimensions;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	BOOL _rotationSessionFlipHorizontal;
	BOOL _rotationSessionFlipVertical;
	BOOL _rotationSessionZeroFillBuffers;
	BOOL _rotationSessionLowSpeed;
	int _rotationSessionColorSpaceProperties;
	int _lastInputUprightExifOrientation;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW19 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	BOOL _makeCurrentConfigurationLiveOnNextRenderCallback;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;
	BOOL _packed10BitPixelFormatSupported;
	BOOL _htpcCompressionSupported;
	BOOL _expectsMarkerBuffers;
	BOOL _liveExpectsMarkerBuffers;
	BOOL _appliesPrimaryCaptureRect;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> emitSampleBufferSemaphore; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)setOutputWidth:(unsigned long long)arg1 ;
-(void)setOutputHeight:(unsigned long long)arg1 ;
-(unsigned long long)outputWidth;
-(unsigned long long)outputHeight;
-(CGRect)inputCropRect;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
-(void)setPassesBuffersThroughWhenPossible:(BOOL)arg1 ;
-(int)outputColorSpaceProperties;
-(NSObject*<OS_dispatch_semaphore>)emitSampleBufferSemaphore;
-(void)setEmitSampleBufferSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned)outputPixelFormat;
-(void)setOutputPixelFormat:(unsigned)arg1 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)_updateOutputRequirements;
-(BOOL)_zeroFillBuffers;
-(void)_makeCurrentConfigurationLive;
-(BOOL)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appliesPrimaryCaptureRect;
-(void)_updateLiveRotationAndFlipsToApplyUprightExifOrientation:(int)arg1 ;
-(SCD_Struct_BW19)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW19)arg1 outputDimensions:(SCD_Struct_BW19)arg2 ;
-(int)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW19)arg1 ;
-(void)_ensureTransferSession;
-(void)_ensureRotationSession;
-(void)_updateMetadataForOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 destinationRect:(CGRect)arg2 ;
-(void)_updateUprightExifOrientationOnSampleBufferIfNeeded:(opaqueCMSampleBufferRef)arg1 ;
-(void)_updatePrimaryCaptureRect:(opaqueCMSampleBufferRef)arg1 inputDimensions:(SCD_Struct_BW19)arg2 ;
-(void)_updateCameraIntrinsicsMatrixOnSampleBufferIfNeeded:(opaqueCMSampleBufferRef)arg1 inputCropRect:(CGRect)arg2 ;
-(id)_supportedOutputPixelFormatsInPreferredOrder;
-(void)setCropMode:(int)arg1 ;
-(int)cropMode;
-(void)setInputCropRect:(CGRect)arg1 ;
-(void)setUpdatesSampleBufferMetadataForIrisVIS:(BOOL)arg1 ;
-(BOOL)updatesSampleBufferMetadataForIrisVIS;
-(BOOL)passesBuffersThroughWhenPossible;
-(void)setOutputColorSpaceProperties:(int)arg1 ;
-(void)setValidOutputDimensions:(SCD_Struct_BW19)arg1 ;
-(SCD_Struct_BW19)validOutputDimensions;
-(void)setAppliesUprightExifOrientationTransformToInput:(BOOL)arg1 ;
-(BOOL)appliesUprightExifOrientationTransformToInput;
-(void)setFlipHorizontal:(BOOL)arg1 ;
-(BOOL)flipHorizontal;
-(void)setFlipVertical:(BOOL)arg1 ;
-(BOOL)flipVertical;
-(void)setLowSpeed:(BOOL)arg1 ;
-(BOOL)lowSpeed;
-(void)setPacked10BitPixelFormatSupported:(BOOL)arg1 ;
-(BOOL)packed10BitPixelFormatSupported;
-(void)setHtpcCompressionSupported:(BOOL)arg1 ;
-(BOOL)htpcCompressionSupported;
-(void)setExpectsMarkerBuffers:(BOOL)arg1 ;
-(BOOL)expectsMarkerBuffers;
-(void)setAppliesPrimaryCaptureRect:(BOOL)arg1 ;
@end

