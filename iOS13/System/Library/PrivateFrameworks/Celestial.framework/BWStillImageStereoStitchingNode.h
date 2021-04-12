/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSArray, FigStillImageSharedProcessingResources, FigStillStereoStitchingProcessor, BWStillImageNodeConfiguration, BWNodeInput, BWNodeOutput, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeError, NSDictionary;

@interface BWStillImageStereoStitchingNode : BWNode {

	NSArray* _sensorConfigurations;
	FigStillImageSharedProcessingResources* _sharedResources;
	FigStillStereoStitchingProcessor* _processor;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	BWStillImageNodeConfiguration* _nodeConfiguration;
	float _overCaptureMultiplier;
	BWNodeInput* _wideFieldOfViewInput;
	BWNodeInput* _narrowFieldOfViewInput;
	BWNodeOutput* _overCaptureOutput;
	BWNodeOutput* _narrowFieldOfViewOutput;
	opaqueCMFormatDescriptionRef _outputSbufFormatDescription;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _overCaptureMode;
	opaqueCMSampleBufferRef _wideFieldOfViewSbuf;
	opaqueCMSampleBufferRef _narrowFieldOfViewSbuf;
	BWNodeError* _wideFieldOfViewError;
	BWNodeError* _narrowFieldOfViewError;
	NSDictionary* _baseZoomFactorByPortType;
	BOOL _stereoStitchingEnabled;

}

@property (nonatomic,readonly) BWNodeInput * wideFieldOfViewInput;                  //@synthesize wideFieldOfViewInput=_wideFieldOfViewInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * narrowFieldOfViewInput;                //@synthesize narrowFieldOfViewInput=_narrowFieldOfViewInput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * overCaptureOutput;                    //@synthesize overCaptureOutput=_overCaptureOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * narrowFieldOfViewOutput;              //@synthesize narrowFieldOfViewOutput=_narrowFieldOfViewOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSharedResources:(id)arg1 ;
-(id)sharedResources;
-(id)_processorOptions;
-(void)_clearCaptureRequestState;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurations:(id)arg2 overCapturePercentage:(float)arg3 overCaptureOutputDimensions:(SCD_Struct_BW19)arg4 stereoStitchingEnabled:(BOOL)arg5 ;
-(BWNodeInput *)wideFieldOfViewInput;
-(BWNodeInput *)narrowFieldOfViewInput;
-(BWNodeOutput *)narrowFieldOfViewOutput;
-(BWNodeOutput *)overCaptureOutput;
-(void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(int)_processDualCameraStereoStitchingWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(int)_processSingleCameraOverCaptureWithOutputSampleBuffer:(opaqueCMSampleBufferRef)arg1 primaryImageZoomCropRect:(CGRect)arg2 overCaptureImageTypeOut:(int*)arg3 overCaptureImageConfidenceScoreOut:(unsigned*)arg4 ;
-(BOOL)_horizonLinePresentInSampleBuffer:(opaqueCMSampleBufferRef)arg1 horizonLineAngleInDegreesOut:(float*)arg2 horizonLineVerticalCenterlineIntersectionOut:(float*)arg3 ;
-(void)_addOverCaptureImageMetadataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 ;
-(int)_scaleInputPixelBuffer:(CVBufferRef)arg1 inputRect:(CGRect)arg2 outputPixelBuffer:(CVBufferRef)arg3 outputDimensions:(SCD_Struct_BW19)arg4 ;
-(int)_generatePartialOverCaptureImageFromInputPixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 primaryImageZoomCropRect:(CGRect)arg3 validBufferRect:(CGRect)arg4 ;
-(int)_generateFallbackOverCaptureImageWithWide:(opaqueCMSampleBufferRef)arg1 narrowSbuf:(opaqueCMSampleBufferRef)arg2 outputSbuf:(opaqueCMSampleBufferRef)arg3 primaryImageZoomCropRect:(CGRect)arg4 onlyCrop:(BOOL)arg5 ;
-(float)_zoomAdjustedHorizonLineVerticalCenterlineIntersection:(float)arg1 finalCropRect:(CGRect)arg2 ;
-(int)_loadAndConfigureProcessor;
-(void)_emitNodeErrorForError:(int)arg1 fromNodeOutput:(id)arg2 ;
-(void)_processOverCaptureIfNecessary;
@end

