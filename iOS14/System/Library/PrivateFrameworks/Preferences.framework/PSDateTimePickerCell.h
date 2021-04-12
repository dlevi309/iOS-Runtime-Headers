/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSTableCell.h>

@class UIDatePicker, UILabel;

@interface PSDateTimePickerCell : PSTableCell {

	UIDatePicker* _datePicker;
	UILabel* _titleLabel;

}
+(double)preferredHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setTitle:(id)arg1 ;
-(id)datePicker;
-(void)timeZoneChanged:(id)arg1 ;
-(void)dealloc;
@end

