/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBProcess.h>

@class FBSProcessTerminationRequest, FBProcessWatchdogEventContext, NSMutableArray, FBProcessWatchdog, FBSProcessWatchdogPolicy, FBSProcessExecutionProvision, RBSAssertion, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {

	FBSProcessTerminationRequest* _terminationRequest;
	FBProcessWatchdogEventContext* _terminationWatchdogContext;
	long long _terminationReason;
	NSMutableArray* _queue_terminateRequestCompletionBlocks;
	long long _watchdogReportType;
	FBProcessWatchdog* _watchdog;
	FBSProcessWatchdogPolicy* _sceneCreateWatchdogPolicy;
	FBSProcessExecutionProvision* _latestViolatedProvision;
	unsigned long long _htAppIdentifier;
	unsigned long long _launchToken;
	RBSAssertion* _gracefulKillAssertion;
	BKSProcessAssertion* _mediaAssertion;
	BKSProcessAssertion* _audioAssertion;
	BKSProcessAssertion* _accessoryAssertion;
	BOOL _recordingAudio;
	BOOL _nowPlayingWithAudio;
	BOOL _connectedToExternalAccessory;

}

@property (assign,getter=isRecordingAudio,nonatomic) BOOL recordingAudio;                                          //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,getter=isNowPlayingWithAudio,nonatomic) BOOL nowPlayingWithAudio;                                //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,getter=isConnectedToExternalAccessory,nonatomic) BOOL connectedToExternalAccessory;              //@synthesize connectedToExternalAccessory=_connectedToExternalAccessory - In the implementation block
@property (nonatomic,readonly) double elapsedCPUTime; 
-(void)invalidate;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(id)_watchdogProvider;
-(id)initWithHandle:(id)arg1 identity:(id)arg2 executionContext:(id)arg3 ;
-(BOOL)isApplicationProcess;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_dropAssertions;
-(id)_queue_createBootstrapContext;
-(void)_queue_noteLaunchWillComplete;
-(void)_queue_noteLaunchDidComplete:(BOOL)arg1 ;
-(void)_queue_noteProcessDidExit:(id)arg1 ;
-(BOOL)_wantsStateUpdates;
-(id)_queue_newWatchdogForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)_queue_activationInfoForEvent:(int)arg1 withToken:(unsigned long long)arg2 ;
-(void)_queue_killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_cancelWatchdogTimer;
-(void)_queue_executeTerminateRequestCompletionBlocksIfNecessaryForSucccess:(BOOL)arg1 ;
-(id)_queue_internalDebugEnvironmentVariables;
-(void)_queue_startWatchdogTimerForContext:(id)arg1 ;
-(id)_queue_composeContextWithValue:(id)arg1 key:(id)arg2 ;
-(id)_queue_crashReportThermalsInfo;
-(void)_queue_executeKillForRequest:(id)arg1 ;
-(void)_queue_doGracefulKillWithDeliveryConfirmation:(/*^block*/id)arg1 ;
-(long long)_exceptionCodeForKillReason:(int)arg1 ;
-(void)_queue_terminateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_queue_shouldWatchdogWithDeclineReason:(id*)arg1 ;
-(long long)_watchdogReportType;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;
-(double)elapsedCPUTime;
-(void)setConnectedToExternalAccessory:(BOOL)arg1 ;
-(BOOL)isRecordingAudio;
-(BOOL)isNowPlayingWithAudio;
-(BOOL)isConnectedToExternalAccessory;
@end

