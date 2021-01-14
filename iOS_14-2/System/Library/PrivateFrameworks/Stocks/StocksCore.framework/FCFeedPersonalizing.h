/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

@class FCPersonalizationWhitelist;


@protocol FCFeedPersonalizing <FCTagRanking>
@property (readonly,nonatomic) FCPersonalizationWhitelist * whitelist; 
@optional
-(void)prepareFavorites:(/*^block*/id)arg1;
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2;
-(id)bestOfGroupFromHeadlines:(id)arg1 configurationSet:(long long)arg2;
-(id)bestOfGroupFromHeadlines:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
-(id)bestOfGroupFromFeedItems:(id)arg1 scoreProfiles:(id)arg2 configurationSet:(long long)arg3;
-(id)bestOfGroupFromFeedItems:(id)arg1 scoreProfiles:(id)arg2 configurationSet:(long long)arg3;
-(double)scoreForGroupWithItems:(id)arg1 scoreProfiles:(id)arg2;
-(double)scoreForGroupWithItems:(id)arg1 scoreProfiles:(id)arg2;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recordOccurrenceOfFeatures:(id)arg1 articleID:(id)arg2 individually:(BOOL)arg3 action:(unsigned long long)arg4;
-(void)recordOccurrenceOfFeatures:(id)arg1 articleID:(id)arg2 individually:(BOOL)arg3 action:(unsigned long long)arg4;

@required
-(FCPersonalizationWhitelist *)whitelist;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2;
-(unsigned long long)whitelistLevelForTagID:(id)arg1;
-(unsigned long long)whitelistLevelForTagID:(id)arg1;
-(id)sortItems:(id)arg1;
-(id)sortItems:(id)arg1 options:(long long)arg2;
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(id)limitItemsByMinimumItemQuality:(id)arg1;

@end

