/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class HKHealthStore, HKSelectedTimeScopeController, HKDateCache, HKUnitPreferenceController, HKChartDataCacheController, HKSampleTypeUpdateController, HKSampleTypeDateRangeController, HKDisplayTypeController, HKDisplayCategoryController;

@interface HKOverlayRoomApplicationItems : NSObject {

	HKHealthStore* _healthStore;
	HKSelectedTimeScopeController* _timeScopeController;
	HKDateCache* _dateCache;
	HKUnitPreferenceController* _unitController;
	HKChartDataCacheController* _chartDataCacheController;
	HKSampleTypeUpdateController* _sampleTypeUpdateController;
	HKSampleTypeDateRangeController* _sampleDateRangeController;
	HKDisplayTypeController* _displayTypeController;
	HKDisplayCategoryController* _categoryController;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                              //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSelectedTimeScopeController * timeScopeController;                      //@synthesize timeScopeController=_timeScopeController - In the implementation block
@property (nonatomic,retain) HKDateCache * dateCache;                                                  //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                              //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) HKChartDataCacheController * chartDataCacheController;                    //@synthesize chartDataCacheController=_chartDataCacheController - In the implementation block
@property (nonatomic,retain) HKSampleTypeUpdateController * sampleTypeUpdateController;                //@synthesize sampleTypeUpdateController=_sampleTypeUpdateController - In the implementation block
@property (nonatomic,retain) HKSampleTypeDateRangeController * sampleDateRangeController;              //@synthesize sampleDateRangeController=_sampleDateRangeController - In the implementation block
@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;                          //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKDisplayCategoryController * categoryController;                         //@synthesize categoryController=_categoryController - In the implementation block
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(HKDateCache *)dateCache;
-(HKDisplayCategoryController *)categoryController;
-(void)setDateCache:(HKDateCache *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(HKChartDataCacheController *)chartDataCacheController;
-(HKSelectedTimeScopeController *)timeScopeController;
-(HKDisplayTypeController *)displayTypeController;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(HKSampleTypeDateRangeController *)sampleDateRangeController;
-(HKSampleTypeUpdateController *)sampleTypeUpdateController;
-(void)setTimeScopeController:(HKSelectedTimeScopeController *)arg1 ;
-(void)setChartDataCacheController:(HKChartDataCacheController *)arg1 ;
-(void)setSampleTypeUpdateController:(HKSampleTypeUpdateController *)arg1 ;
-(void)setSampleDateRangeController:(HKSampleTypeDateRangeController *)arg1 ;
-(void)setCategoryController:(HKDisplayCategoryController *)arg1 ;
@end

