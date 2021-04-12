/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

#import <libobjc.A.dylib/FCFeedPersonalizing.h>
#import <libobjc.A.dylib/FCTagRanking.h>

@interface StocksCore.FeedPersonalizationService : NSObject <FCFeedPersonalizing, FCTagRanking>
-(unsigned long long)whitelistLevelForTagID:(id)arg1 ;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByMinimumItemQuality:(id)arg1 ;
-(id)sortItems:(id)arg1 options:(long long)arg2 ;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)sortItems:(id)arg1 ;
-(id)rankTagIDsDescending:(id)arg1 ;
-(id)scoresForTagIDs:(id)arg1 ;
-(id)init;
@end

