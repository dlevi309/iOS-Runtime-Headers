/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPAVQueueControllerDelegate <NSObject>
@required
-(void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)queueControllerDidChangeContents:(id)arg1;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;

@end

