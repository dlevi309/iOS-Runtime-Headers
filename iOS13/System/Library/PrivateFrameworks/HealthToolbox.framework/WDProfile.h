/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <UIKit/UIStateRestoring.h>

@class WDNotificationManager, HKDateCache, HKDisplayCategoryController, HKDisplayTypeController, HKHealthStore, HKHealthRecordsStore, HKManualEntryValidationController, HKSampleTypeDateRangeController, HKUnitPreferenceController, HKUCUMUnitDisplayConverter, HKChartDataCacheController, WDFavoriteDisplayTypesController, HKSelectedTimeScopeController, HKSampleTypeUpdateController, WDSourceOrderController, WDUserActivityManager, WDUserDefaults, _HKWheelchairUseCharacteristicCache, NSString;

@interface WDProfile : NSObject <UIStateRestoring> {

	WDNotificationManager* _notificationManager;
	HKDateCache* _dateCache;
	HKDisplayCategoryController* _displayCategoryController;
	HKDisplayTypeController* _displayTypeController;
	HKHealthStore* _healthStore;
	HKHealthRecordsStore* _healthRecordsStore;
	HKManualEntryValidationController* _manualEntryValidationController;
	HKSampleTypeDateRangeController* _sampleTypeDateRangeController;
	HKUnitPreferenceController* _unitController;
	HKUCUMUnitDisplayConverter* _ucumDisplayConverter;
	HKChartDataCacheController* _dataCacheController;
	WDFavoriteDisplayTypesController* _favoriteDisplayTypesController;
	HKSelectedTimeScopeController* _selectedTimeScopeController;
	HKSampleTypeUpdateController* _updateController;
	WDSourceOrderController* _sourceOrderController;
	WDUserActivityManager* _userActivityManager;
	WDUserDefaults* _userDefaults;
	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;

}

@property (nonatomic,readonly) HKDateCache * dateCache;                                                             //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKDisplayCategoryController * displayCategoryController;                             //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                                     //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                         //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKHealthRecordsStore * healthRecordsStore;                                           //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,readonly) HKManualEntryValidationController * manualEntryValidationController;                 //@synthesize manualEntryValidationController=_manualEntryValidationController - In the implementation block
@property (nonatomic,readonly) HKSampleTypeDateRangeController * sampleTypeDateRangeController;                     //@synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;                                         //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,readonly) HKUCUMUnitDisplayConverter * ucumDisplayConverter;                                   //@synthesize ucumDisplayConverter=_ucumDisplayConverter - In the implementation block
@property (nonatomic,readonly) HKChartDataCacheController * dataCacheController;                                    //@synthesize dataCacheController=_dataCacheController - In the implementation block
@property (nonatomic,readonly) WDFavoriteDisplayTypesController * favoriteDisplayTypesController;                   //@synthesize favoriteDisplayTypesController=_favoriteDisplayTypesController - In the implementation block
@property (nonatomic,readonly) WDNotificationManager * notificationManager;                                         //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) HKSelectedTimeScopeController * selectedTimeScopeController;                         //@synthesize selectedTimeScopeController=_selectedTimeScopeController - In the implementation block
@property (nonatomic,readonly) HKSampleTypeUpdateController * updateController;                                     //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,readonly) WDSourceOrderController * sourceOrderController;                                     //@synthesize sourceOrderController=_sourceOrderController - In the implementation block
@property (nonatomic,readonly) WDUserActivityManager * userActivityManager;                                         //@synthesize userActivityManager=_userActivityManager - In the implementation block
@property (nonatomic,readonly) WDUserDefaults * userDefaults;                                                       //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) _HKWheelchairUseCharacteristicCache * wheelchairUseCharacteristicCache;              //@synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache - In the implementation block
@property (nonatomic,readonly) NSString * presentationContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
-(id)init;
-(WDUserDefaults *)userDefaults;
-(HKHealthStore *)healthStore;
-(HKDateCache *)dateCache;
-(NSString *)presentationContext;
-(WDNotificationManager *)notificationManager;
-(id)initWithHealthStore:(id)arg1 ;
-(WDUserActivityManager *)userActivityManager;
-(HKHealthRecordsStore *)healthRecordsStore;
-(HKUnitPreferenceController *)unitController;
-(HKDisplayCategoryController *)displayCategoryController;
-(HKUCUMUnitDisplayConverter *)ucumDisplayConverter;
-(HKSampleTypeUpdateController *)updateController;
-(HKDisplayTypeController *)displayTypeController;
-(WDSourceOrderController *)sourceOrderController;
-(id)_createHealthStore;
-(HKManualEntryValidationController *)manualEntryValidationController;
-(HKSampleTypeDateRangeController *)sampleTypeDateRangeController;
-(HKChartDataCacheController *)dataCacheController;
-(WDFavoriteDisplayTypesController *)favoriteDisplayTypesController;
-(HKSelectedTimeScopeController *)selectedTimeScopeController;
-(_HKWheelchairUseCharacteristicCache *)wheelchairUseCharacteristicCache;
@end

