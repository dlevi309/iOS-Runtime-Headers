/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stop;
-(void)play;
-(void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)scheduleBuffer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(AVAudioEngine *)audioEngine;
-(AVAudioPCMBuffer *)lockSoundBuffer;
-(AVAudioPCMBuffer *)scanSoundBuffer;
-(AVAudioPCMBuffer *)endSoundBuffer;
-(AVAudioPCMBuffer *)completeSoundBuffer;
-(AVAudioPCMBuffer *)failSoundBuffer;
@end

