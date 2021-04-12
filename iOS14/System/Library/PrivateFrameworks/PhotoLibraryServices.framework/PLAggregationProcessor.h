/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(unsigned long long)maximumNumberOfAssetsPerMoment;
+(void)setEnabled:(BOOL)arg1 ;
+(void)restoreDefaultEnablement;
+(unsigned long long)maximumNumberOfDaysPerAggregation;
+(unsigned long long)maximumNumberOfAssetsPerAggregation;
+(BOOL)isEnabled;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2 ;
-(BOOL)_shouldAggregateMoment:(id)arg1 ;
-(id)_aggregationMomentClustersForMomentClusters:(id)arg1 ;
-(id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)curatedAssetCountByMomentUUID;
-(void)setCuratedAssetCountByMomentUUID:(NSMutableDictionary *)arg1 ;
@end

