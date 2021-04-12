/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@protocol IMAudioControllerDelegate <NSObject>
@optional
-(void)audioControllerDidPause:(id)arg1;
-(void)audioControllerPlayingDidChange:(id)arg1;
-(void)audioControllerDidStop:(id)arg1;
-(void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)audioController:(id)arg1 didFinishPlayingContentAtURL:(id)arg2;
-(void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(BOOL)arg3;

@end

