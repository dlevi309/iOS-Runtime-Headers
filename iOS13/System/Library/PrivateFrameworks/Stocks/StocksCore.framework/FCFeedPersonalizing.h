/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/


@protocol FCFeedPersonalizing <FCTagRanking>
@optional
-(void)prepareFavorites:(/*^block*/id)arg1;
-(id)bestOfGroupFromItems:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
-(double)personalizedScoreForFeatureWithIdentifier:(id)arg1 items:(id)arg2;
-(double)personalizedScoreForFeatureWithIdentifier:(id)arg1 items:(id)arg2 scores:(id)arg3;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(unsigned long long)whitelistLevelForTagID:(id)arg1;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(id)sortItems:(id)arg1 options:(long long)arg2;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
-(id)sortItems:(id)arg1;

@end

