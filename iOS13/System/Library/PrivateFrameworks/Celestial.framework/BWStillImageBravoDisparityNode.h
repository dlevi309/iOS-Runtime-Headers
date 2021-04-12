/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary, FigDisparityGenerator, BWNodeInput, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWNodeError, BWStillImageNodeConfiguration;

@interface BWStillImageBravoDisparityNode : BWNode {

	NSDictionary* _sensorConfigurationsByPortType;
	FigDisparityGenerator* _disparityGenerator;
	BWNodeInput* _wideInput;
	BWNodeInput* _telephotoInput;
	unsigned long long _disparityMapWidth;
	unsigned long long _disparityMapHeight;
	opaqueCMFormatDescriptionRef _disparityFormatDescription;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	int _expectedDisparityCount;
	int _deliveredDisparityCount;
	int _processingMode;
	opaqueCMSampleBufferRef _teleSbuf;
	opaqueCMSampleBufferRef _wideSbuf;
	BOOL _emitTeleFrame;
	BOOL _emitWideFrame;
	BWNodeError* _errorForWide;
	BWNodeError* _errorForTele;
	BOOL _shouldComputeDisparityWhenCalibrationFails;
	BOOL _disparityInputIsRaw;
	BWStillImageNodeConfiguration* _nodeConfiguration;
	BWNodeInput* _disparityFromReferenceFramesTelephotoFusedInput;

}

@property (nonatomic,readonly) BWNodeInput * wideInput;                                                    //@synthesize wideInput=_wideInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * telephotoInput;                                               //@synthesize telephotoInput=_telephotoInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * disparityFromReferenceFramesTelephotoFusedInput;              //@synthesize disparityFromReferenceFramesTelephotoFusedInput=_disparityFromReferenceFramesTelephotoFusedInput - In the implementation block
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
-(id)processorOptionsDictionary;
-(void)_clearCaptureRequestState;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 outputDisparityBufferCount:(int)arg5 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(BWNodeInput *)wideInput;
-(BWNodeInput *)telephotoInput;
-(void)_finishPendingProcessing;
-(void)_resolveProcessingMode;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(int)_loadAndConfigureDisparityGenerator;
-(void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromInput:(id)arg3 ;
-(void)_processBuffersForDisparityIfNecessary;
-(void)_computeDisparityForTeleBuffer:(opaqueCMSampleBufferRef)arg1 wideBuffer:(opaqueCMSampleBufferRef)arg2 attachToOutputBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(int)_OSStatusFromDisparityResult:(int)arg1 ;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(BWNodeInput *)disparityFromReferenceFramesTelephotoFusedInput;
@end

