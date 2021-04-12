/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>
#import <libobjc.A.dylib/VCAudioSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VCAudioSessionMediaProperties, VCAudioUnitProperties, NSDictionary, NSMutableArray, AVAudioDevice, VCAudioRelay, VCAudioRelayIO, NSString;

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioSessionDelegate> {

	tagHANDLE* _hAUIO;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _state;
	VCAudioSessionMediaProperties* _currentAudioSessionMediaProperties;
	VCAudioUnitProperties* _currentAudioUnitProperties;
	NSDictionary* _vpOperatingModeToAudioSessionMediaFormatMapping;
	NSMutableArray* _allClients;
	NSMutableArray* _startingIOClients;
	AVAudioDevice* _inputDevice;
	AVAudioDevice* _outputDevice;
	BOOL _isGKVoiceChat;
	BOOL _isMicrophoneMuted;
	BOOL _isInDaemon;
	BOOL _isInputMeteringEnabled;
	BOOL _isOutputMeteringEnabled;
	BOOL _isSpeakerPhoneEnabled;
	BOOL _isSuspended;
	VCAudioIOControllerIOState* _sinkData;
	VCAudioIOControllerIOState* _sourceData;
	int _interruptThreadState;
	VCAudioRelay* _interruptThread;
	VCAudioRelayIO* _interruptThreadClient;

}

@property (nonatomic,retain) VCAudioSessionMediaProperties * currentAudioSessionMediaProperties;              //@synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties - In the implementation block
@property (nonatomic,retain) VCAudioUnitProperties * currentAudioUnitProperties;                              //@synthesize currentAudioUnitProperties=_currentAudioUnitProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * vpOperatingModeToAudioSessionMediaFormatMapping;                  //@synthesize vpOperatingModeToAudioSessionMediaFormatMapping=_vpOperatingModeToAudioSessionMediaFormatMapping - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice;                                              //@synthesize inputDevice=_inputDevice - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice;                                             //@synthesize outputDevice=_outputDevice - In the implementation block
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted;                                   //@synthesize isMicrophoneMuted=_isMicrophoneMuted - In the implementation block
@property (assign,nonatomic) BOOL isInDaemon;                                                                 //@synthesize isInDaemon=_isInDaemon - In the implementation block
@property (assign,nonatomic) BOOL isGKVoiceChat;                                                              //@synthesize isGKVoiceChat=_isGKVoiceChat - In the implementation block
@property (assign,getter=isSpeakerPhoneEnabled,nonatomic) BOOL speakerPhoneEnabled;                           //@synthesize isSpeakerPhoneEnabled=_isSpeakerPhoneEnabled - In the implementation block
@property (nonatomic,readonly) VCAudioIOControllerIOState* sinkIO; 
@property (nonatomic,readonly) VCAudioIOControllerIOState* sourceIO; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)addClient:(id)arg1 ;
-(BOOL)removeClient:(id)arg1 ;
-(AVAudioDevice *)currentInputDevice;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioDevice *)currentOutputDevice;
-(void)stopAudioSession;
-(unsigned)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2 ;
-(BOOL)setupInterruptThread;
-(void)computeHardwarePreferences;
-(void)cleanupInterruptThread;
-(BOOL)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned)arg2 ;
-(void)setVpOperatingModeToAudioSessionMediaFormatMapping:(NSDictionary *)arg1 ;
-(VCAudioIOControllerIOState*)sinkIO;
-(VCAudioIOControllerIOState*)sourceIO;
-(void)unregisterClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
-(void)waitIdleForClient:(id)arg1 ;
-(void)setupIODevicesForAUIO:(tagHANDLE*)arg1 ;
-(void)setInputMetering;
-(void)setOutputMetering;
-(void)registerClientIO:(VCAudioIOControllerClientIO*)arg1 controllerIO:(VCAudioIOControllerIOState*)arg2 ;
-(BOOL)startAudioSessionWithProperties:(id)arg1 ;
-(void)resetAudioTimestamps;
-(void)flushEventQueue:(opaqueCMSimpleQueueRef)arg1 ;
-(void)removeAllClientsForIO:(VCAudioIOControllerIOState*)arg1 ;
-(void)setCurrentAudioUnitProperties:(VCAudioUnitProperties *)arg1 ;
-(BOOL)shouldResetAudioSessionWithProperties:(id)arg1 ;
-(void)resetAudioSessionWithProperties:(id)arg1 ;
-(BOOL)startAUIOWithProperties:(id)arg1 ;
-(BOOL)stateRunningShouldTransitionToStarted:(id)arg1 ;
-(void)stopAUIO;
-(void)enterStateStarted;
-(void)startInterruptThread;
-(void)stateRunningToSessionStarted;
-(BOOL)stateRunningShouldTransitionToInterrupted:(id)arg1 ;
-(void)stateTransitionRunningToInterrupted;
-(BOOL)shouldResetAudioUnitWithProperties:(id)arg1 ;
-(void)applyControllerFormatToClients:(id)arg1 ;
-(void)activateStartingClient:(id)arg1 applyControllerFormat:(BOOL)arg2 ;
-(void)resetAUIOWithProperties:(id)arg1 ;
-(void)completeStartForAllStartingClients;
-(BOOL)stateInterruptedShouldGoToStarted:(id)arg1 ;
-(void)stopInterruptThread;
-(void)stateTransitionInterruptedToStarted;
-(BOOL)stateInterruptedShouldGoToRunning:(id)arg1 ;
-(void)stateTransitionInterruptedToRunning;
-(void)_cleanupDeadClients;
-(id)newAudioUnitPropertiesWithClient:(id)arg1 ;
-(id)newAudioSessionMediaPropertiesWithClient:(id)arg1 ;
-(BOOL)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned*)arg4 ;
-(BOOL)updateStateWithAudioIOClient:(id)arg1 ;
-(void)setCurrentAudioSessionMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(void)stopClient:(id)arg1 ;
-(VCAudioSessionMediaProperties *)currentAudioSessionMediaProperties;
-(void)didSessionPause;
-(void)didSessionResume;
-(void)didUpdateBasebandCodec:(const VCRemoteCodecInfo*)arg1 ;
-(void)startClient:(id)arg1 ;
-(void)updateClient:(id)arg1 ;
-(void)refreshInputMetering;
-(void)refreshOutputMetering;
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2 ;
-(void)didSessionStop;
-(void)didSessionEnd;
-(void)getPreferredFormat:(AudioStreamBasicDescription*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(AudioStreamBasicDescription*)arg6 ;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(BOOL)isSpeakerPhoneEnabled;
-(void)setSpeakerPhoneEnabled:(BOOL)arg1 ;
-(VCAudioUnitProperties *)currentAudioUnitProperties;
-(BOOL)isInDaemon;
-(void)setIsInDaemon:(BOOL)arg1 ;
-(NSDictionary *)vpOperatingModeToAudioSessionMediaFormatMapping;
@end

