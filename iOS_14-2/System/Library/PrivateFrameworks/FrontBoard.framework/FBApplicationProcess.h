/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBProcess.h>

@class FBProcessCPUStatistics, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {

	FBProcessCPUStatistics* _cpuStatistics;
	BKSProcessAssertion* _queue_mediaAssertion;
	BKSProcessAssertion* _queue_audioAssertion;
	BKSProcessAssertion* _queue_accessoryAssertion;
	unsigned long long _htAppIdentifier;
	unsigned long long _launchToken;
	BOOL _recordingAudio;
	BOOL _nowPlayingWithAudio;
	BOOL _connectedToExternalAccessory;

}

@property (assign,getter=isRecordingAudio,nonatomic) BOOL recordingAudio;                                          //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,getter=isNowPlayingWithAudio,nonatomic) BOOL nowPlayingWithAudio;                                //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,getter=isConnectedToExternalAccessory,nonatomic) BOOL connectedToExternalAccessory;              //@synthesize connectedToExternalAccessory=_connectedToExternalAccessory - In the implementation block
@property (nonatomic,readonly) double elapsedCPUTime; 
+(id)_internalDebugEnvironmentVariables;
-(void)setNowPlayingWithAudio:(BOOL)arg1 ;
-(id)_createBootstrapContext;
-(double)elapsedCPUTime;
-(void)_noteLaunchDidComplete;
-(id)_queue_createLegacyAssertionForReason:(unsigned)arg1 withName:(id)arg2 ;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_activationInfoForEvent:(int)arg1 withToken:(unsigned long long)arg2 ;
-(void)_finishInit;
-(void)_bootstrapDidComplete;
-(void)killForReason:(long long)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;
-(BOOL)isApplicationProcess;
-(void)setConnectedToExternalAccessory:(BOOL)arg1 ;
-(BOOL)isConnectedToExternalAccessory;
-(BOOL)isRecordingAudio;
-(void)_noteProcessDidExit:(id)arg1 ;
-(BOOL)_wantsStateUpdates;
-(void)setRecordingAudio:(BOOL)arg1 ;
-(BOOL)isNowPlayingWithAudio;
@end

