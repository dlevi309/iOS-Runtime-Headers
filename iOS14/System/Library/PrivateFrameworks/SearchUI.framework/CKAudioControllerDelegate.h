/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol CKAudioControllerDelegate <NSObject>
@optional
-(void)audioControllerDidPause:(id)arg1;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
-(void)audioControllerPlayingDidChange:(id)arg1;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
-(void)audioControllerDidStop:(id)arg1;
-(void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(BOOL)arg3;

@end

