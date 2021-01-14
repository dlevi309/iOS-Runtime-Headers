/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFAudioRecorderDelegate <NSObject>
@optional
-(void)didUpdateAveragePower:(float)arg1;
-(void)audioRecorderDidStartRecording:(id)arg1;
-(void)audioRecorderFailedToStartRecording:(id)arg1;
-(void)audioRecorderFailedToFinishRecording:(id)arg1;
-(void)audioRecorderFinishedRecording:(id)arg1 audioFile:(id)arg2;

@end

