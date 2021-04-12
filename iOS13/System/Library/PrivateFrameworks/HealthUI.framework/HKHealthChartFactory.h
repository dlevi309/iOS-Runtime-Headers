/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController, HKDisplayCategoryController, HKChartDataCacheController, HKSampleTypeUpdateController, HKDateCache, HKSelectedTimeScopeController, _HKWheelchairUseCharacteristicCache, HKSampleTypeDateRangeController, NSDictionary;

@interface HKHealthChartFactory : NSObject {

	HKHealthStore* _healthStore;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitPreferenceController;
	HKDisplayCategoryController* _displayCategoryController;
	HKChartDataCacheController* _chartDataCacheController;
	HKSampleTypeUpdateController* _sampleTypeUpdateController;
	HKDateCache* _dateCache;
	HKSelectedTimeScopeController* _selectedTimeScopeController;
	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	HKSampleTypeDateRangeController* _sampleTypeDateRangeController;
	NSDictionary* _identifierToDisplayTypeMapping;

}

@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                                     //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;                               //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (nonatomic,readonly) HKDisplayCategoryController * displayCategoryController;                             //@synthesize displayCategoryController=_displayCategoryController - In the implementation block
@property (nonatomic,readonly) HKChartDataCacheController * chartDataCacheController;                               //@synthesize chartDataCacheController=_chartDataCacheController - In the implementation block
@property (nonatomic,readonly) HKSampleTypeUpdateController * sampleTypeUpdateController;                           //@synthesize sampleTypeUpdateController=_sampleTypeUpdateController - In the implementation block
@property (nonatomic,readonly) HKDateCache * dateCache;                                                             //@synthesize dateCache=_dateCache - In the implementation block
@property (nonatomic,readonly) HKSelectedTimeScopeController * selectedTimeScopeController;                         //@synthesize selectedTimeScopeController=_selectedTimeScopeController - In the implementation block
@property (nonatomic,readonly) _HKWheelchairUseCharacteristicCache * wheelchairUseCharacteristicCache;              //@synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache - In the implementation block
@property (nonatomic,readonly) HKSampleTypeDateRangeController * sampleTypeDateRangeController;                     //@synthesize sampleTypeDateRangeController=_sampleTypeDateRangeController - In the implementation block
@property (nonatomic,retain) NSDictionary * identifierToDisplayTypeMapping;                                         //@synthesize identifierToDisplayTypeMapping=_identifierToDisplayTypeMapping - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                                                         //@synthesize healthStore=_healthStore - In the implementation block
+(id)_standardIdentifierMappings;
-(id)init;
-(HKHealthStore *)healthStore;
-(HKDateCache *)dateCache;
-(id)initWithHealthStore:(id)arg1 ;
-(HKChartDataCacheController *)chartDataCacheController;
-(HKDisplayCategoryController *)displayCategoryController;
-(id)CHRRoomApplicationItems;
-(HKDisplayTypeController *)displayTypeController;
-(HKSampleTypeDateRangeController *)sampleTypeDateRangeController;
-(HKSelectedTimeScopeController *)selectedTimeScopeController;
-(_HKWheelchairUseCharacteristicCache *)wheelchairUseCharacteristicCache;
-(id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(CGSize)arg3 disableXAxis:(BOOL)arg4 ;
-(id)interactiveChartForTypeIdentifier:(id)arg1 secondaryTypeIdentifier:(id)arg2 displayDateInterval:(id)arg3 ;
-(id)activityChartForDisplayDate:(id)arg1 ;
-(HKUnitPreferenceController *)unitPreferenceController;
-(HKSampleTypeUpdateController *)sampleTypeUpdateController;
-(id)_mapTypeIdentifierToDisplayType:(id)arg1 ;
-(long long)_resolvedTimeScopeForTypeIdentifier:(id)arg1 displayDateInterval:(id)arg2 ;
-(id)_customTypeIdentifierController:(id)arg1 displayDate:(id)arg2 secondaryIdentifier:(id)arg3 ;
-(id)_displayTypeForTypeIdentifier:(id)arg1 ;
-(id)chartForTypeIdentifier:(id)arg1 dateRange:(id)arg2 minimumSize:(CGSize)arg3 ;
-(NSDictionary *)identifierToDisplayTypeMapping;
-(void)setIdentifierToDisplayTypeMapping:(NSDictionary *)arg1 ;
@end

