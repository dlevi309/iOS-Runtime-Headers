/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class PGGraph, PGSearchComputationCache;

@interface PGZeroKeywordComputer : NSObject {

	PGGraph* _graph;
	PGSearchComputationCache* _searchComputationCache;

}

@property (readonly) PGGraph * graph;                                                          //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) PGSearchComputationCache * searchComputationCache;              //@synthesize searchComputationCache=_searchComputationCache - In the implementation block
+(id)zeroKeywordLog;
-(PGGraph *)graph;
-(id)peopleZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSeasonZeroKeywordsWithOptions:(id)arg1 ;
-(id)tripZeroKeyword;
-(id)contextualPersonZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualLocationNodesWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)meaningNodeZeroKeywordForDisplayMeaningNode:(id)arg1 collectionUUIDsToAvoid:(id)arg2 ;
-(id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2 ;
-(id)contextualMeaningAndTripZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualSocialGroupZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)socialGroupKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_locationBasedContextualLocationNodeWithLocation:(id)arg1 date:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(PGSearchComputationCache *)searchComputationCache;
-(id)_timeBasedContextualLocationNodeWithDate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)eventZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualDateZeroKeywordsWithOptions:(id)arg1 ;
-(id)_zeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)sceneZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)contextualHolidayZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_tripZeroKeywordWithScore:(out double*)arg1 ;
-(id)locationZeroKeywordsWithOptions:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)tripRankedKeyword;
-(id)densestCloseLocationNodeForNode:(id)arg1 locationMask:(unsigned long long)arg2 ;
-(BOOL)_conflictBetweenLocationOrAreaNode:(id)arg1 andOtherLocationOrAreaNodes:(id)arg2 ;
-(id)_zeroKeywordDisplayMeaningNodeForMeaningNode:(id)arg1 ;
@end

