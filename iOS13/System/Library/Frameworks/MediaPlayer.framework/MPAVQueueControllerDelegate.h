/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPAVQueueControllerDelegate <NSObject>
@required
-(void)queueControllerDidChangeContents:(id)arg1;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;

@end

