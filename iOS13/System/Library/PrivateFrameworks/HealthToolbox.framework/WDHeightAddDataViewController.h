/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDDisplayTypeAddDataViewController.h>

@class WDAddDataManualEntryItem;

@interface WDHeightAddDataViewController : WDDisplayTypeAddDataViewController {

	WDAddDataManualEntryItem* _heightPickerManualEntryItem;

}
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 ;
-(id)_feetUnitString;
-(id)_inchUnitString;
-(BOOL)_inputUnitIsFeetWithDisplayType:(id)arg1 unitController:(id)arg2 ;
-(id)createValueFieldManualEntryItem;
@end

