/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore
*/

#import <libobjc.A.dylib/FCTagRanking.h>
#import <libobjc.A.dylib/FCFeedPersonalizing.h>

@class FCPersonalizationWhitelist;

@interface StocksCore.FeedPersonalizationService : NSObject <FCTagRanking, FCFeedPersonalizing>

@property (readonly,nonatomic) FCPersonalizationWhitelist * whitelist; 
-(FCPersonalizationWhitelist *)whitelist;
-(id)rankTagIDsDescending:(id)arg1 ;
-(id)scoresForTagIDs:(id)arg1 ;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)decayedPublisherDiversificationPenalty;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 preselectedItems:(id)arg3 ;
-(id)diversifyItems:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)whitelistLevelForTagID:(id)arg1 ;
-(id)sortItems:(id)arg1 ;
-(id)sortItems:(id)arg1 options:(long long)arg2 ;
-(id)limitItemsByMinimumItemQuality:(id)arg1 ;
-(id)init;
@end

