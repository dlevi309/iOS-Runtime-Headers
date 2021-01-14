/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HFAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayer:(id)arg1 didPausePlaybackWithReason:(id)arg2;
-(void)audioPlayerDidStopPlayback:(id)arg1;
-(void)audioPlayerDidResumePlayback:(id)arg1;
-(void)audioPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2;
-(void)audioPlayer:(id)arg1 didUpdateAveragePower:(double)arg2;
-(void)audioPlayerDidFinishPlayback:(id)arg1 withError:(id)arg2;

@end

