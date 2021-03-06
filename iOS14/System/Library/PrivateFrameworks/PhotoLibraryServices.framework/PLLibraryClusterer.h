/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLLibraryClustererDelegate;
@class NSCalendar, PLLocalCreationDateCreator, PLFrequentLocationManager;

@interface PLLibraryClusterer : NSObject {

	id<PLLibraryClustererDelegate> _delegate;
	NSCalendar* _calendar;
	PLLocalCreationDateCreator* _localCreationDateCreator;
	PLFrequentLocationManager* _frequentLocationManager;

}

@property (nonatomic,readonly) NSCalendar * calendar;                                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) PLLocalCreationDateCreator * localCreationDateCreator;              //@synthesize localCreationDateCreator=_localCreationDateCreator - In the implementation block
@property (nonatomic,readonly) PLFrequentLocationManager * frequentLocationManager;                //@synthesize frequentLocationManager=_frequentLocationManager - In the implementation block
@property (assign,nonatomic,__weak) id<PLLibraryClustererDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(BOOL)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2 ;
-(void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2 ;
-(id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1 ;
-(PLLocalCreationDateCreator *)localCreationDateCreator;
-(id<PLLibraryClustererDelegate>)delegate;
-(NSCalendar *)calendar;
-(void)processMomentsWithAssets:(id)arg1 ;
-(void)processMonthsAndYearsForMomentClusters:(id)arg1 ;
-(id)_startDateComponentsForMomentCluster:(id)arg1 ;
-(void)setDelegate:(id<PLLibraryClustererDelegate>)arg1 ;
-(id)_momentsWithLocationClusteredByPossibleSource:(id)arg1 ;
-(id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg1 ;
-(id)momentClustersForMomentsSortedByDate:(id)arg1 ;
-(void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2 ;
-(PLFrequentLocationManager *)frequentLocationManager;
-(id)_momentsSplitWithinDayWithMoments:(id)arg1 ;
-(id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1 ;
-(id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2 ;
@end

