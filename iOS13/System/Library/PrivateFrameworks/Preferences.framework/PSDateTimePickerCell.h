/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>

@class UIDatePicker;

@interface PSDateTimePickerCell : PSTableCell {

	UIDatePicker* _datePicker;

}
+(double)preferredHeight;
-(void)dealloc;
-(void)layoutSubviews;
-(id)datePicker;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)timeZoneChanged:(id)arg1 ;
@end

