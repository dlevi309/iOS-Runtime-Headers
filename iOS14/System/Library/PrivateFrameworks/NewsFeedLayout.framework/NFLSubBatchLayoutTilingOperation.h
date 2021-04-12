/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsCore/FCOperation.h>

@class NFLFeedSettings, NSArray, NFLRankedLayoutSource, NFLSubBatchLayout;

@interface NFLSubBatchLayoutTilingOperation : FCOperation {

	BOOL _showingAccessoryText;
	/*^block*/id _tilingCompletionBlock;
	NFLFeedSettings* _feedSettings;
	NSArray* _tileInfos;
	NFLRankedLayoutSource* _rankedLayoutSource;
	double _tileProminenceScoreBalanceValue;
	NFLSubBatchLayout* _result;
	SCD_Struct_NF7 _layoutSeed;

}

@property (copy) NFLFeedSettings * feedSettings;                                                   //@synthesize feedSettings=_feedSettings - In the implementation block
@property (copy) NSArray * tileInfos;                                                              //@synthesize tileInfos=_tileInfos - In the implementation block
@property (retain) NFLRankedLayoutSource * rankedLayoutSource;                                     //@synthesize rankedLayoutSource=_rankedLayoutSource - In the implementation block
@property (assign) double tileProminenceScoreBalanceValue;                                         //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (nonatomic,copy) NFLSubBatchLayout * result;                                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) SCD_Struct_NF7 layoutSeed;                                            //@synthesize layoutSeed=_layoutSeed - In the implementation block
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showingAccessoryText;              //@synthesize showingAccessoryText=_showingAccessoryText - In the implementation block
@property (copy) id tilingCompletionBlock;                                                         //@synthesize tilingCompletionBlock=_tilingCompletionBlock - In the implementation block
+(unsigned long long)tileInfosUsedCount;
+(BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(SCD_Struct_NF7)arg2 ;
+(BOOL)validTileInfoType:(id)arg1 ;
+(BOOL)tileInfosHaveValidType:(id)arg1 ;
-(double)tileProminenceScoreBalanceValue;
-(void)setResult:(NFLSubBatchLayout *)arg1 ;
-(NFLRankedLayoutSource *)rankedLayoutSource;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NFLFeedSettings *)feedSettings;
-(void)setShowingAccessoryText:(BOOL)arg1 ;
-(void)performOperation;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
-(BOOL)isShowingAccessoryText;
-(id)rankedLayoutRequests;
-(void)setRankedLayoutSource:(NFLRankedLayoutSource *)arg1 ;
-(BOOL)isReliable;
-(NFLSubBatchLayout *)result;
-(NSArray *)tileInfos;
-(SCD_Struct_NF7)layoutSeed;
-(id)initWithTileInfos:(id)arg1 feedSettings:(id)arg2 rankedLayoutSource:(id)arg3 tileProminenceScoreBalanceValue:(double)arg4 layoutSeed:(SCD_Struct_NF7)arg5 showingAccessoryText:(BOOL)arg6 ;
-(void)setTilingCompletionBlock:(id)arg1 ;
-(id)tilingCompletionBlock;
-(void)setTileInfos:(NSArray *)arg1 ;
-(void)setLayoutSeed:(SCD_Struct_NF7)arg1 ;
@end

