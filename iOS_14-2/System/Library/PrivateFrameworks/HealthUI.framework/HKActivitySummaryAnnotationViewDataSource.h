/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@class HKActivitySummary, HKDisplayTypeController, HKUnitPreferenceController, _HKWheelchairUseCharacteristicCache, NSString;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	BOOL _currentValueViewContext;
	HKActivitySummary* _activitySummary;
	long long _timeScope;
	HKDisplayTypeController* _displayTypeController;
	HKUnitPreferenceController* _unitController;
	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;

}

@property (nonatomic,retain) HKDisplayTypeController * displayTypeController;                                     //@synthesize displayTypeController=_displayTypeController - In the implementation block
@property (nonatomic,retain) HKUnitPreferenceController * unitController;                                         //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) _HKWheelchairUseCharacteristicCache * wheelchairUseCharacteristicCache;              //@synthesize wheelchairUseCharacteristicCache=_wheelchairUseCharacteristicCache - In the implementation block
@property (assign,nonatomic) BOOL currentValueViewContext;                                                        //@synthesize currentValueViewContext=_currentValueViewContext - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;                                                 //@synthesize activitySummary=_activitySummary - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                                 //@synthesize timeScope=_timeScope - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnitPreferenceController *)unitController;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(HKActivitySummary *)activitySummary;
-(BOOL)showSeparators;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(HKDisplayTypeController *)displayTypeController;
-(id)_bodyColor;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(_HKWheelchairUseCharacteristicCache *)wheelchairUseCharacteristicCache;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(void)setDisplayTypeController:(HKDisplayTypeController *)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(_HKWheelchairUseCharacteristicCache *)arg1 ;
-(id)_dateColumnWithDateComponents:(id)arg1 calendar:(id)arg2 orientation:(long long)arg3 ;
-(BOOL)_hasRingView;
-(id)_ringColumn;
-(id)_moveColumn;
-(id)_exerciseColumn;
-(id)_standColumn;
-(BOOL)currentValueViewContext;
-(id)_valueUnitAttributedStringWithValueString:(id)arg1 unitString:(id)arg2 ;
-(id)_standColumnValueString;
-(id)activityStandTitle;
-(id)_columnViewWithTitle:(id)arg1 titleColor:(id)arg2 body:(id)arg3 bodyColor:(id)arg4 alignment:(long long)arg5 ;
-(id)_exerciseColumnValueString;
-(id)activityExerciseTitle;
-(id)_energyColumnValueString;
-(id)activityMoveTitle;
-(id)_moveTimeColumnValueString;
-(id)_moveTimeColumn;
-(id)_energyColumn;
-(id)_moveTimeColumnAsNumber;
-(id)_energyColumnAsNumber;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(id)_moveColumnValueString;
-(id)_moveColumnAsNumber;
-(id)_valueWithTitle:(id)arg1 attributedValue:(id)arg2 valueAsNumber:(id)arg3 ;
-(id)_exerciseColumnAsNumber;
-(id)_standColumnAsNumber;
-(id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(BOOL)arg4 ;
-(id)_percentStringWithQuantity:(id)arg1 goalQuantity:(id)arg2 ;
-(id)descriptionsForActivitySummary;
-(void)setCurrentValueViewContext:(BOOL)arg1 ;
@end

