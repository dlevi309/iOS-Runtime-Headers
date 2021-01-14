/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSTableCell.h>

@class UIDatePicker;

@interface STUIDateTimePickerCell : PSTableCell {

	UIDatePicker* _datePicker;

}

@property (readonly) UIDatePicker * datePicker; 
+(double)preferredHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(UIDatePicker *)datePicker;
-(void)layoutSubviews;
-(void)timeZoneChanged:(id)arg1 ;
@end

