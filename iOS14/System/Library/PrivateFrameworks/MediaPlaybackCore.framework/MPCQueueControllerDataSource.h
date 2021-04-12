/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCQueueControllerDataSource <MPShuffleableSectionedIdentifierListDataSource>
@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@optional
-(BOOL)canSkipItem:(id)arg1;
-(void)itemDidBeginPlayback:(id)arg1;
-(BOOL)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
-(long long)prefetchThresholdForSection:(id)arg1;
-(BOOL)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
-(void)loadAdditionalItemsWithRequest:(id)arg1 forSection:(id)arg2 completion:(/*^block*/id)arg3;
-(id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
-(id)firstItemIntersectingIdentifierSet:(id)arg1;

@required
-(BOOL)containsTransportableContent;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2;
-(id)itemForItem:(id)arg1 inSection:(id)arg2;
-(BOOL)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
-(BOOL)containsLiveStream;

@end

