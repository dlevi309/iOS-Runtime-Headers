/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


@protocol OS_dispatch_queue;
@class AVAudioEngine, AVAudioPlayerNode, AVAudioPCMBuffer, NSObject;

@interface BKUIPearlAudioSession : NSObject {

	AVAudioEngine* _audioEngine;
	AVAudioPlayerNode* _audioNode;
	AVAudioPCMBuffer* _lockSoundBuffer;
	AVAudioPCMBuffer* _scanSoundBuffer;
	AVAudioPCMBuffer* _completeSoundBuffer;
	AVAudioPCMBuffer* _endSoundBuffer;
	AVAudioPCMBuffer* _failSoundBuffer;
	NSObject*<OS_dispatch_queue> _avPlayerNodeOperationQueue;

}

@property (nonatomic,readonly) AVAudioEngine * audioEngine;                         //@synthesize audioEngine=_audioEngine - In the implementation block
@property (nonatomic,readonly) AVAudioPCMBuffer * lockSoundBuffer;                  //@synthesize lockSoundBuffer=_lockSoundBuffer - In the implementation block
@property (nonatomic,readonly) AVAudioPCMBuffer * scanSoundBuffer;                  //@synthesize scanSoundBuffer=_scanSoundBuffer - In the implementation block
@property (nonatomic,readonly) AVAudioPCMBuffer * completeSoundBuffer;              //@synthesize completeSoundBuffer=_completeSoundBuffer - In the implementation block
@property (nonatomic,readonly) AVAudioPCMBuffer * endSoundBuffer;                   //@synthesize endSoundBuffer=_endSoundBuffer - In the implementation block
@property (nonatomic,readonly) AVAudioPCMBuffer * failSoundBuffer;                  //@synthesize failSoundBuffer=_failSoundBuffer - In the implementation block
+(id)_loadSound:(id)arg1 ;
-(id)init;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)play;
-(void)stop;
-(AVAudioEngine *)audioEngine;
-(AVAudioPCMBuffer *)lockSoundBuffer;
-(AVAudioPCMBuffer *)scanSoundBuffer;
-(AVAudioPCMBuffer *)endSoundBuffer;
-(AVAudioPCMBuffer *)completeSoundBuffer;
-(AVAudioPCMBuffer *)failSoundBuffer;
@end

