/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWFigVideoCaptureStreamStillImageCaptureDelegate.h>
#import <libobjc.A.dylib/BWStillImageProcessingStatusDelegate.h>

@protocol BWStillImageCaptureStatusDelegate, OS_dispatch_queue, OS_dispatch_group;
@class BWFigVideoCaptureDevice, NSDictionary, NSMutableArray, NSObject, FigStateMachine, NSMutableDictionary, FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWPhotoManifest, NSString;

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoCaptureStreamStillImageCaptureDelegate, BWStillImageProcessingStatusDelegate> {

	BOOL _active;
	BWFigVideoCaptureDevice* _captureDevice;
	NSDictionary* _portTypeToInput;
	NSDictionary* _portTypeToOutput;
	id<BWStillImageCaptureStatusDelegate> _stillImageCaptureStatusDelegate;
	BOOL _stillImageGraphSupportsMultipleInflightCaptures;
	unsigned _numberOfBurstCapturesInFlight;
	unsigned _maxNumberOfBurstCapturesAllowedInFlight;
	BOOL _alwaysRequestsPreBracketedEV0;
	BOOL _usesHDRPreBracketFrameForErrorRecovery;
	BOOL _supportsCalibrationWithoutDepthForBravoConstituentPhoto;
	NSMutableArray* _requestQueue;
	os_unfair_lock_s _requestQueueLock;
	int _captureRequestCount;
	int _prepareRequestCount;
	NSObject*<OS_dispatch_queue> _stillImageDispatchQueue;
	NSObject*<OS_dispatch_group> _stillImageDispatchGroup;
	FigStateMachine* _stateMachine;
	NSMutableDictionary* _receivedImagesOrErrorsForRequestByPortType;
	int _clientExpectedImagesOrErrorsForRequest;
	int _clientReceivedImagesOrErrorsForRequest;
	FigCaptureStillImageSettings* _currentRequestedStillImageCaptureSettings;
	int _captureType;
	BWStillImageCaptureSettings* _currentResolvedStillImageCaptureSettings;
	BWPhotoManifest* _photoManifest;
	unsigned _firedDelegateCallbackFlags;
	BOOL _isMomentCaptureCapturingBeforeCommitted;
	NSMutableArray* _momentCaptureUnfiredCallbacks;
	NSMutableArray* _momentCaptureBuffersByInputIndex;
	int _momentCaptureUncommittedStillImageCaptureError;
	SCD_Struct_BW2 _streamingDisruptionEndPTS;
	BOOL _receivedQuadraHighResError;

}

@property (assign,nonatomic) id<BWStillImageCaptureStatusDelegate> stillImageCaptureStatusDelegate;              //@synthesize stillImageCaptureStatusDelegate=_stillImageCaptureStatusDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)_stateMachine;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)nodeDidCaptureStillImage:(id)arg1 ;
-(void)node:(id)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(id)arg2 pts:(SCD_Struct_BW2)arg3 ;
-(id)inputForPortType:(id)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)node:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg2 transform:(id)arg3 ;
-(void)clientReceivedPayloadForSettings:(id)arg1 status:(int)arg2 clientIsMidStillImageGraph:(BOOL)arg3 ;
-(void)setAlwaysRequestsPreBracketedEV0:(BOOL)arg1 ;
-(BOOL)alwaysRequestsPreBracketedEV0;
-(int)worstCaseMaxBracketedCaptureBufferCountForPreparedSettings:(id)arg1 ;
-(void)setStillImageCaptureStatusDelegate:(id<BWStillImageCaptureStatusDelegate>)arg1 ;
-(void)willStopGraph:(BOOL)arg1 ;
-(void)setSupportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto:(BOOL)arg1 ;
-(int)initiateStillImageCaptureNowWithSettings:(id)arg1 ;
-(int)beginStillImageMomentCaptureWithSettings:(id)arg1 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(int)prepareStillImageCaptureNowWithSettings:(id)arg1 ;
-(int)commitStillImageMomentCaptureWithSettings:(id)arg1 ;
-(int)cancelStillImageMomentCaptureWithSettingsID:(long long)arg1 ;
-(void)_serviceNextRequest;
-(void)captureStreamWillBeginStillImageCapture:(id)arg1 ;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2 ;
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW2)arg2 ;
-(void)captureStream:(id)arg1 didCompleteStillImageCaptureWithPTS:(SCD_Struct_BW2)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3 ;
-(id)_initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 allStateTransitionsHandler:(/*^block*/id)arg3 ;
-(void)_setupStateMachineWithAllStateTransitionsHandler:(/*^block*/id)arg1 ;
-(int)_enqueueRequestWithSettings:(id)arg1 serviceRequestsIfNecessary:(BOOL)arg2 ;
-(id)_resolvePhotoManifest;
-(void)_cancelMomentCaptureIfNeeded;
-(void)_renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)_flushStillImageRequestWithError:(int)arg1 ;
-(void)_addAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_outputForInput:(id)arg1 ;
-(void)_completeRequestWithStatus:(int)arg1 ;
-(void)_fireDelegateCallbackWithFlag:(unsigned)arg1 ;
-(void)_didResolveStillImagePTS:(SCD_Struct_BW2)arg1 isPreBracketedEV0:(BOOL)arg2 ;
-(void)_didCaptureStillImage;
-(void)_didResolveReferenceFrameBracketedCaptureSequenceNumber:(id)arg1 ;
-(void)_didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg1 transform:(id)arg2 ;
-(void)_beginPreparingCapture;
-(void)_beginInitiatingCapture;
-(void)_beginResolvingCapture;
-(void)_beginCapture;
-(void)_beginMomentCapture;
-(void)_beginUncommittedMomentCapture;
-(void)_commitMomentCapture;
-(void)_cancelMomentCapture;
-(void)_unpackNextRequest;
-(void)_configureCurrentCaptureRequestStateForFigCaptureStillImageSettings;
-(id)_clientBracketSettingsWithFrameStatisticsByPortType:(id)arg1 ;
-(int)_captureTypeForSettings:(id)arg1 frameStatisticsByPortType:(id)arg2 captureFlags:(unsigned long long*)arg3 ;
-(void)_fireDelegateCallbackWithInfo:(id)arg1 ;
-(void)_setupProcessing;
-(void)node:(id)arg1 didReceiveOriginalImageWithPTS:(SCD_Struct_BW2)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 inputPortTypes:(id)arg2 ;
-(BOOL)stillImageGraphSupportsMultipleInflightCaptures;
-(void)setStillImageGraphSupportsMultipleInflightCaptures:(BOOL)arg1 ;
-(void)setUsesHDRPreBracketFrameForErrorRecovery:(BOOL)arg1 ;
-(BOOL)usesHDRPreBracketFrameForErrorRecovery;
-(BOOL)supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
-(void)setMaxNumberOfBurstCapturesAllowedInFlight:(unsigned)arg1 ;
-(unsigned)maxNumberOfBurstCapturesAllowedInFlight;
-(id)_stillImageDispatchQueue;
-(id<BWStillImageCaptureStatusDelegate>)stillImageCaptureStatusDelegate;
@end

