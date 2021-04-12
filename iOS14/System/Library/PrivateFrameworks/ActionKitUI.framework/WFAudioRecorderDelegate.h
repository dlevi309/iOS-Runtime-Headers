/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@protocol WFAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
-(void)audioRecorder:(id)arg1 didStartRecording:(BOOL)arg2 error:(id)arg3;

@required
-(void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;

@end

