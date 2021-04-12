/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDateRangeDataSourceDelegate.h>
#import <libobjc.A.dylib/HKActivitySummaryDataProviderObserver.h>

@protocol HKDateRangeDataUpdateDelegate;
@class HKActivitySummaryDataProvider, HKDisplayTypeController, HKUnitPreferenceController, NSCalendar, NSString;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate, HKActivitySummaryDataProviderObserver> {

	HKActivitySummaryDataProvider* _dataProvider;
	long long _activityValue;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitPreferenceController;
	id<HKDateRangeDataUpdateDelegate> _updateDelegate;
	NSCalendar* _currentCalendar;

}

@property (nonatomic,readonly) HKActivitySummaryDataProvider * dataProvider;                       //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) long long activityValue;                                            //@synthesize activityValue=_activityValue - In the implementation block
@property (nonatomic,readonly) HKDisplayTypeController * displayTypeController;                    //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitPreferenceController;              //@synthesize unitPreferenceController=_unitPreferenceController - In the implementation block
@property (assign,nonatomic,__weak) id<HKDateRangeDataUpdateDelegate> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * currentCalendar;                                       //@synthesize currentCalendar=_currentCalendar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSCalendar *)currentCalendar;
-(HKActivitySummaryDataProvider *)dataProvider;
-(HKDisplayTypeController *)displayTypeController;
-(id<HKDateRangeDataUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id<HKDateRangeDataUpdateDelegate>)arg1 ;
-(HKUnitPreferenceController *)unitPreferenceController;
-(long long)activityValue;
-(id)dataForDateRange:(id)arg1 timeScope:(long long)arg2 ;
-(void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1 ;
-(id)initWithDataProvider:(id)arg1 activityValue:(long long)arg2 displayTypeController:(id)arg3 unitPreferenceController:(id)arg4 ;
-(id)_chartPointForActivityValue:(long long)arg1 summary:(id)arg2 timeScope:(long long)arg3 ;
-(id)_quantityForActivityValue:(long long)arg1 summary:(id)arg2 ;
-(double)_centerOffsetForTimeScope:(long long)arg1 startDate:(id)arg2 calendar:(id)arg3 ;
-(id)_healthChartPointForQuantity:(id)arg1 quantityType:(id)arg2 activityValue:(long long)arg3 referenceDisplayType:(id)arg4 activitySummaryData:(id)arg5 preferredUnit:(id)arg6 date:(id)arg7 createBarValue:(BOOL)arg8 ;
@end

