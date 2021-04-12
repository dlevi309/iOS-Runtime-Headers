/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCQueueControllerDataSource <MPShuffleableSectionedIdentifierListDataSource>
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@optional
-(void)itemDidBeginPlayback:(id)arg1;
-(BOOL)canSkipItem:(id)arg1;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
-(void)loadAdditionalItemsForSection:(id)arg1 completion:(/*^block*/id)arg2;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
-(id)firstItemIntersectingIdentifierSet:(id)arg1;

@required
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2;
-(id)itemForItem:(id)arg1 inSection:(id)arg2;
-(BOOL)containsLiveStream;
-(BOOL)containsTransportableContent;

@end

