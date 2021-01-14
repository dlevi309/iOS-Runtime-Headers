/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {

	WDAddDataManualEntryItem* _heightPickerManualEntryItem;

}
-(id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5 ;
-(id)_feetUnitString;
-(id)_inchUnitString;
-(BOOL)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)createValueFieldManualEntryItem;
@end

