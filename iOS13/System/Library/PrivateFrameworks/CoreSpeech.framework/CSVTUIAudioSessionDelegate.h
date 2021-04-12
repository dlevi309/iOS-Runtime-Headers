/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol CSVTUIAudioSessionDelegate <NSObject>
@required
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
-(void)audioSessionDidStopRecording:(long long)arg1;
-(void)audioSessionRecordBufferAvailable:(id)arg1;
-(void)audioSessionErrorDidOccur:(id)arg1;
-(void)audioSessionUnsupportedAudioRoute;

@end

