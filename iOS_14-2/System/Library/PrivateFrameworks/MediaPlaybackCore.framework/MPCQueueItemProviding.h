/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPAVItem;


@protocol MPCQueueItemProviding
@property (nonatomic,retain) MPAVItem * currentItem; 
@required
-(BOOL)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2;
-(id)itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2;
-(void)playerItemDidResignCurrent:(id)arg1;
-(MPAVItem *)currentItem;
-(void)playerItemDidBecomeCurrent:(id)arg1;
-(void)setCurrentItem:(id)arg1;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(BOOL)arg4;

@end

