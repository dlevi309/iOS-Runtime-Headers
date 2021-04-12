/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLMomentGenerationDataManagement;
@class NSArray, PLFrequentLocationManager, NSDateInterval, PLLocalCreationDateCreator, PLDateRangeTitleGenerator;

@interface PLPhotosHighlightClusterGenerator : NSObject {

	NSArray* _allMomentsSorted;
	id<PLMomentGenerationDataManagement> _dataManager;
	PLFrequentLocationManager* _frequentLocationManager;
	NSDateInterval* _recentHighlightsDateInterval;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	PLDateRangeTitleGenerator* _dateRangeTitleGenerator;

}

@property (nonatomic,__weak,readonly) id<PLMomentGenerationDataManagement> dataManager;              //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,readonly) NSArray * allMomentsSorted;                                           //@synthesize allMomentsSorted=_allMomentsSorted - In the implementation block
@property (nonatomic,readonly) PLFrequentLocationManager * frequentLocationManager;                  //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (nonatomic,readonly) NSDateInterval * recentHighlightsDateInterval;                        //@synthesize recentHighlightsDateInterval=_recentHighlightsDateInterval - In the implementation block
@property (nonatomic,readonly) PLLocalCreationDateCreator * localCreationDateCreator;                //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,readonly) PLDateRangeTitleGenerator * dateRangeTitleGenerator;                  //@synthesize dateRangeTitleGenerator=_dateRangeTitleGenerator - In the implementation block
-(PLDateRangeTitleGenerator *)dateRangeTitleGenerator;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(id)_remainingHighlightClustersWithClusters:(id)arg1 intersectingMoments:(id)arg2 ;
-(id)_remainingMomentClustersWithMomentsSortedByDate:(id)arg1 ;
-(NSDateInterval *)recentHighlightsDateInterval;
-(id)_aggregationsInMoments:(id)arg1 unavailableMoments:(id)arg2 intersectingMoments:(id)arg3 ;
-(id)_recentMoments;
-(id)_recentHighlightClusterWithRecentMoments:(id)arg1 intersectingMoments:(id)arg2 ;
-(id)highlightClustersIntersectingMoments:(id)arg1 includeAllTripHighlightClusters:(BOOL)arg2 ;
-(id)_dayMomentClustersWithMomentsSortedByDate:(id)arg1 localCreationDateCreator:(id)arg2 ;
-(id)_tripHighlightClustersForMoments:(id)arg1 tripType:(unsigned long long)arg2 ;
-(id<PLMomentGenerationDataManagement>)dataManager;
-(id)_tripsInMoments:(id)arg1 ;
-(PLFrequentLocationManager *)frequentLocationManager;
-(id)recentMomentsInMomentClusters:(id)arg1 ;
-(id)_recentHighlightClusterWithRecentMoments:(id)arg1 ;
-(BOOL)_isRecent:(id)arg1 ;
-(NSArray *)allMomentsSorted;
-(id)_aggregationHighlightClustersForMoments:(id)arg1 ;
-(id)_remainingHighlightClusterWithMoments:(id)arg1 ;
-(id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 recentHighlightDateInterval:(id)arg3 localCreationDateCreator:(id)arg4 dateRangeTitleGenerator:(id)arg5 ;
@end

