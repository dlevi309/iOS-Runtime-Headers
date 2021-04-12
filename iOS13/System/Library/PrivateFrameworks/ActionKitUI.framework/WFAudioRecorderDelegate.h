/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/


@protocol WFAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorder:(id)arg1 didProgressToTime:(double)arg2;
-(void)audioRecorder:(id)arg1 didStartRecording:(BOOL)arg2 error:(id)arg3;

@required
-(void)audioRecorder:(id)arg1 didFinishWithDestinationURL:(id)arg2 error:(id)arg3;

@end

