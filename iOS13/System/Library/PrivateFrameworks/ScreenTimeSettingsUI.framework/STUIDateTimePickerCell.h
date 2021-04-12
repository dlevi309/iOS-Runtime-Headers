/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@class UIDatePicker;

@interface STUIDateTimePickerCell : PSTableCell {

	UIDatePicker* _datePicker;

}

@property (readonly) UIDatePicker * datePicker; 
+(double)preferredHeight;
-(void)layoutSubviews;
-(UIDatePicker *)datePicker;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)timeZoneChanged:(id)arg1 ;
@end

