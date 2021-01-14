/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLPipelayerDelegate.h>
#import <libobjc.A.dylib/NFLRankedLayoutSourceDelegate.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol NFLFeedLayoutSearchConfiguration;
@class NFLFeedSettings, NFLRankedLayoutSource, NSOperationQueue, NSString;

@interface NFLHeadlineCardDealer : NSObject <NFLPipelayerDelegate, NFLRankedLayoutSourceDelegate, CALayerDelegate> {

	id<NFLFeedLayoutSearchConfiguration> _feedLayoutSearchConfiguration;
	NFLFeedSettings* _feedSettings;
	NFLRankedLayoutSource* _rankedLayoutSource;
	NSOperationQueue* _tilingOperationQueue;
	long long _qualityOfService;
	double _tileProminenceScoreBalanceValue;

}

@property (nonatomic,copy) NFLFeedSettings * feedSettings;                                                  //@synthesize feedSettings=_feedSettings - In the implementation block
@property (nonatomic,copy) id<NFLFeedLayoutSearchConfiguration> feedLayoutSearchConfiguration;              //@synthesize feedLayoutSearchConfiguration=_feedLayoutSearchConfiguration - In the implementation block
@property (nonatomic,retain) NFLRankedLayoutSource * rankedLayoutSource;                                    //@synthesize rankedLayoutSource=_rankedLayoutSource - In the implementation block
@property (nonatomic,retain) NSOperationQueue * tilingOperationQueue;                                       //@synthesize tilingOperationQueue=_tilingOperationQueue - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                                    //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) double tileProminenceScoreBalanceValue;                                        //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tileProminenceScoreBalanceValue;
-(void)setQualityOfService:(long long)arg1 ;
-(NFLRankedLayoutSource *)rankedLayoutSource;
-(NFLFeedSettings *)feedSettings;
-(void)setTilingOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(NSOperationQueue *)tilingOperationQueue;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(id)init;
-(double)pipelayer:(id)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3 ;
-(void)setRankedLayoutSource:(NFLRankedLayoutSource *)arg1 ;
-(id)batchesFromPipeSegments:(id)arg1 tileInfos:(id)arg2 ;
-(void)pipelayer:(id)arg1 segmentForUnits:(id)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)batchesForTileInfos:(id)arg1 previousBatchContext:(id)arg2 nextBatchContext:(id)arg3 ;
-(void)_validateFeedLayout;
-(double)pipelayer:(id)arg1 secondaryScoreOfPath:(id)arg2 units:(id)arg3 ;
-(id)pipelayer:(id)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2 ;
-(BOOL)pipelayer:(id)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(id)arg3 ;
-(id<NFLFeedLayoutSearchConfiguration>)feedLayoutSearchConfiguration;
-(id)pipelayer:(id)arg1 descriptionForSegmentType:(unsigned long long)arg2 ;
-(long long)qualityOfService;
-(unsigned long long)pipelayer:(id)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2 ;
-(void)setFeedLayoutSearchConfiguration:(id<NFLFeedLayoutSearchConfiguration>)arg1 ;
-(/*^block*/id)_segmentTypeDescriptionProvider;
-(id)initWithFeedSettings:(id)arg1 feedLayoutSearchConfiguration:(id)arg2 tileProminenceScoreBalanceValue:(double)arg3 qualityOfService:(long long)arg4 ;
-(Class)rankedLayoutSource:(id)arg1 rankedLayoutGenerationOperationClassForRequest:(id)arg2 ;
@end

