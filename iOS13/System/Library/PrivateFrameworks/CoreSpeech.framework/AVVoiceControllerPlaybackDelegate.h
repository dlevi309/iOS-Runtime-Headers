/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol AVVoiceControllerPlaybackDelegate <NSObject>
@optional
-(void)voiceControllerDidStartPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStopPlaying:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDecoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerBeginPlaybackInterruption:(id)arg1;
-(void)voiceControllerEndPlaybackInterruption:(id)arg1;
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;

@required
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;

@end

