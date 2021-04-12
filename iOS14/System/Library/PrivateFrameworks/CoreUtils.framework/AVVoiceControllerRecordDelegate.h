/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol AVVoiceControllerRecordDelegate <NSObject>
@optional
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 withSettings:(id)arg2 error:(id)arg3;
-(void)voiceControllerEndRecordInterruption:(id)arg1;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerBeginRecordInterruption:(id)arg1;
-(void)voiceControllerMediaServicesWereLost:(id)arg1;
-(void)voiceControllerMediaServicesWereReset:(id)arg1;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(BOOL)arg2;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(BOOL)arg2;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerWirelessSplitterRouteAvailable:(BOOL)arg1 devices:(id)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4;
-(void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;
-(void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
-(void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;

@end

