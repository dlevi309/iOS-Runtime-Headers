/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _curatedAssetCountByMomentUUID;

}

@property (nonatomic,retain) NSCalendar * calendar;                                            //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * curatedAssetCountByMomentUUID;              //@synthesize curatedAssetCountByMomentUUID=_curatedAssetCountByMomentUUID - In the implementation block
+(void)initialize;
+(void)setEnabled:(BOOL)arg1 ;
+(BOOL)isEnabled;
+(void)restoreDefaultEnablement;
+(unsigned long long)maximumNumberOfAssetsPerMoment;
+(unsigned long long)maximumNumberOfDaysPerAggregation;
+(unsigned long long)maximumNumberOfAssetsPerAggregation;
-(id)init;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2 ;
-(BOOL)_shouldAggregateMoment:(id)arg1 ;
-(id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_aggregationMomentClustersForMomentClusters:(id)arg1 ;
-(NSMutableDictionary *)curatedAssetCountByMomentUUID;
-(void)setCuratedAssetCountByMomentUUID:(NSMutableDictionary *)arg1 ;
@end

