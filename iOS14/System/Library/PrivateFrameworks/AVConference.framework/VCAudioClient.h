/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioSessionDelegate.h>

@class VCAudioIO, AVAudioDevice, NSString;

@interface VCAudioClient : NSObject <VCAudioSessionDelegate> {

	int _processId;
	VCAudioIO* _audioIO;
	BOOL _muted;
	unsigned _state;
	opaque_pthread_mutex_t _stateMutex;
	double _lastAudioSessionStart;
	BOOL _isOnHold;
	VCAudioClientSettings _selectedSettings;
	VCAudioClientSettings _requestedSettings;

}

@property (nonatomic,retain) AVAudioDevice * inputDevice; 
@property (nonatomic,retain) AVAudioDevice * outputDevice; 
@property (nonatomic,readonly) int processId;                           //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) BOOL isMuted;                            //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) VCAudioIO * audioIO;                       //@synthesize audioIO=_audioIO - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unlock;
-(AVAudioDevice *)outputDevice;
-(int)processId;
-(void)lock;
-(BOOL)stopWithError:(id*)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(VCAudioIO *)audioIO;
-(BOOL)isMuted;
-(void)setOutputDevice:(AVAudioDevice *)arg1 ;
-(void)dealloc;
-(void)setAudioSessionProperties:(id)arg1 ;
-(void)setInputDevice:(AVAudioDevice *)arg1 ;
-(void)setAudioIO:(VCAudioIO *)arg1 ;
-(void)didSuspendAudioIO:(id)arg1 ;
-(void)didResumeAudioIO:(id)arg1 ;
-(void)startAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startAudioSessionWithError:(id*)arg1 ;
-(void)stopAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)stopAudioSessionWithError:(id*)arg1 ;
-(id)initWithProcessId:(int)arg1 ;
-(BOOL)muteWithError:(id*)arg1 ;
-(BOOL)unmuteWithError:(id*)arg1 ;
-(BOOL)resetAudioSessionOutputPortOverride:(id*)arg1 ;
-(id)getCurrentAudioDeviceWithType:(BOOL)arg1 ;
-(BOOL)setCurrentAudioDevice:(id)arg1 type:(BOOL)arg2 ;
-(AVAudioDevice *)inputDevice;
@end

