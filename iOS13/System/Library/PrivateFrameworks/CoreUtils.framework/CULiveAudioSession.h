/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue;
@class RPCompanionLinkClient, NSObject, NSArray, NSMutableSet, AVVoiceController, NSString;

@interface CULiveAudioSession : NSObject <AVVoiceControllerRecordDelegate, CUActivatable> {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	unsigned long long _activateTicks;
	BOOL _clinkActivated;
	RPCompanionLinkClient* _clinkClient;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _destinationDevices;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _peersActivated;
	NSMutableSet* _peerSessionSet;
	int _sessionState;
	BOOL _sentTimingInfo;
	int _startRecordingState;
	int _stopRecordingState;
	AVVoiceController* _voiceController;
	/*^block*/id _invalidationHandler;
	NSArray* _destinationIDs;

}

@property (nonatomic,copy) NSArray * destinationIDs;                                  //@synthesize destinationIDs=_destinationIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_run;
-(void)_reportError:(id)arg1 where:(const char*)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerMediaServicesWereReset:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)_runCLinkActivateStart;
-(void)_runCLinkActivateCompleted;
-(void)_runCLinkPeersActivateStart;
-(BOOL)_voiceControllerSetup;
-(void)_voiceControllerTearDown;
-(BOOL)_voiceControllerStart;
-(NSArray *)destinationIDs;
-(void)setDestinationIDs:(NSArray *)arg1 ;
@end
