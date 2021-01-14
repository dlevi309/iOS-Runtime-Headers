/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/


@protocol CSVTUIAudioSessionDelegate <NSObject>
@required
-(void)audioSessionDidStopRecording:(long long)arg1;
-(void)audioSessionRecordBufferAvailable:(id)arg1;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2;
-(void)audioSessionErrorDidOccur:(id)arg1;
-(void)audioSessionUnsupportedAudioRoute;

@end

