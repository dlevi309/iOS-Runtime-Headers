/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

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

}

@property (nonatomic,readonly) BWNodeInput * wideInput;                   //@synthesize wideInput=_wideInput - In the implementation block
@property (nonatomic,readonly) BWNodeInput * telephotoInput;              //@synthesize telephotoInput=_telephotoInput - In the implementation block
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
-(int)_OSStatusFromDisparityResult:(int)arg1 ;
-(void)_finishPendingProcessing;
-(void)_resolveProcessingMode;
-(id)_sensorConfigurationWithPortraitTuningParameters;
-(void)_clearCaptureRequestState;
-(BOOL)attachesInputBracketToOutputSampleBuffer;
-(void)setAttachesInputBracketToOutputSampleBuffer:(BOOL)arg1 ;
-(void)_configureCurrentCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(void)_handleError:(int)arg1 duringProcessingOfSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromInput:(id)arg3 ;
-(void)_processBuffersForDisparityIfNecessary;
-(void)_computeDisparityForTeleBuffer:(opaqueCMSampleBufferRef)arg1 wideBuffer:(opaqueCMSampleBufferRef)arg2 attachToOutputBuffer:(opaqueCMSampleBufferRef)arg3 ;
-(id)processorOptionsDictionary;
-(int)_loadAndConfigureDisparityGenerator;
-(BWNodeInput *)wideInput;
-(BWNodeInput *)telephotoInput;
-(id)initWithNodeConfiguration:(id)arg1 sensorConfigurationsByPortType:(id)arg2 disparityMapWidth:(unsigned long long)arg3 disparityMapHeight:(unsigned long long)arg4 outputDisparityBufferCount:(int)arg5 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(void)dealloc;
@end

