/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol AVVoiceControllerRecordDelegate <NSObject>
@optional
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 withSettings:(id)arg2 error:(id)arg3;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerBeginRecordInterruption:(id)arg1;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
-(void)voiceControllerEndRecordInterruption:(id)arg1;
-(void)voiceControllerMediaServicesWereLost:(id)arg1;
-(void)voiceControllerMediaServicesWereReset:(id)arg1;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(BOOL)arg2;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(BOOL)arg2;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerWirelessSplitterRouteAvailable:(BOOL)arg1 devices:(id)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(BOOL)arg3 error:(id)arg4;
-(void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
-(void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;
-(void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;

@end

