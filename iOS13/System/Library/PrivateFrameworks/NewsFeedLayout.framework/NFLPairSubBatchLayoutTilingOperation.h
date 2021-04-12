/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLPairSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation {

	BOOL _preferImageOnSidePairs;

}

@property (assign,nonatomic) BOOL preferImageOnSidePairs;              //@synthesize preferImageOnSidePairs=_preferImageOnSidePairs - In the implementation block
+(unsigned long long)tileInfosUsedCount;
-(BOOL)isReliable;
-(id)rankedLayoutRequests;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
-(BOOL)preferImageOnSidePairs;
-(void)setPreferImageOnSidePairs:(BOOL)arg1 ;
@end

