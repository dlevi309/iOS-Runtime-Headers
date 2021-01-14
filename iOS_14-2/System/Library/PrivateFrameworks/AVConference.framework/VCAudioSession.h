/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableDictionary, VCAudioSessionClient, NSMutableArray, NSDictionary;

@interface VCAudioSession : NSObject {

	opaqueCMSessionRef _cmSession;
	unsigned _audioSessionId;
	int _sessionPid;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _requestedAudioSessionProperties;
	NSMutableDictionary* _currentAudioSessionProperties;
	VCAudioSessionClient* _activeClient;
	NSMutableArray* _clients;
	NSDictionary* _micSourceBack;
	NSDictionary* _micSourceFront;
	unsigned _selectedMicrophone;
	BOOL _isTetheredDisplayMode;
	double _hardwareSampleRate;
	BOOL _isInterrupted;
	int _currentClientPid;

}

@property (nonatomic,readonly) NSDictionary * audioSessionProperties; 
@property (assign,nonatomic) int clientPid;                                        //@synthesize currentClientPid=_currentClientPid - In the implementation block
@property (nonatomic,readonly) opaqueCMSessionRef cmSession;                       //@synthesize cmSession=_cmSession - In the implementation block
@property (nonatomic,readonly) unsigned audioSessionId;                            //@synthesize audioSessionId=_audioSessionId - In the implementation block
+(id)sharedInstance;
+(BOOL)convertAudioSessionProperties:(id)arg1 operatingMode:(int*)arg2 deviceRole:(int*)arg3 enableAudioPreWarming:(BOOL*)arg4 ;
-(void)invalidateCache;
-(id)init;
-(BOOL)stopClient:(id)arg1 ;
-(int)clientPid;
-(BOOL)setSampleRate:(double)arg1 ;
-(void)didStop;
-(void)dealloc;
-(BOOL)startInternal;
-(void)setAudioSessionProperties:(NSDictionary *)arg1 ;
-(BOOL)shouldResetAudioSession;
-(BOOL)startClient:(id)arg1 clientType:(unsigned char)arg2 mediaProperties:(id)arg3 sessionRef:(unsigned*)arg4 ;
-(BOOL)resetClient:(id)arg1 mediaSetting:(id)arg2 interruptSuccessful:(BOOL*)arg3 ;
-(BOOL)isAnswerOnHoldUpdateParameters:(id)arg1 ;
-(BOOL)didRequestedStringPropertyChange:(id)arg1 ;
-(BOOL)applyRequestedProperty:(id)arg1 defaultValue:(void*)arg2 ;
-(NSDictionary *)audioSessionProperties;
-(void)setupInputBeamforming;
-(void)setBlockSize:(double)arg1 sampleRate:(double)arg2 force:(BOOL)arg3 ;
-(BOOL)forceBufferFrames:(int*)arg1 ;
-(void)applyClientPid;
-(void)selectMicrophoneWithType:(unsigned)arg1 ;
-(void)setupVPBlockFormatWithProperties:(id)arg1 ;
-(void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned)arg1 ;
-(void)refreshAudioSessionProperties;
-(BOOL)applyAudioSessionMediaProperties:(id)arg1 ;
-(void)upgradeAudioSessionProperties;
-(void)selectNewActiveClient;
-(void)cleanupMicSources;
-(void)resumeActiveClient;
-(void)didBeginQuietTime;
-(void)didEndQuietTime;
-(void)didPause;
-(void)didResume;
-(void)didInterruptionEnded;
-(void)resetOverrideRoute;
-(void)setBlockSizeOnSampleRateChange;
-(void)didAvailableSampleRateChange;
-(void)handleAudioInterruption:(opaqueCMSessionRef)arg1 interruptionInfo:(CFDictionaryRef)arg2 ;
-(void)setAudioSessionMode:(id)arg1 ;
-(void)selectMicrophone:(unsigned)arg1 ;
-(void)setClientPid:(int)arg1 ;
-(opaqueCMSessionRef)cmSession;
-(unsigned)audioSessionId;
@end

