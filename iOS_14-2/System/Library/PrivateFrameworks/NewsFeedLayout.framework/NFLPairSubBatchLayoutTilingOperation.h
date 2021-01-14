/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation {

	BOOL _preferImageOnSidePairs;

}

@property (assign,nonatomic) BOOL preferImageOnSidePairs;              //@synthesize preferImageOnSidePairs=_preferImageOnSidePairs - In the implementation block
+(unsigned long long)tileInfosUsedCount;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
-(id)rankedLayoutRequests;
-(BOOL)isReliable;
-(BOOL)preferImageOnSidePairs;
-(void)setPreferImageOnSidePairs:(BOOL)arg1 ;
@end

