/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUPickerCellDelegate <NSObject>
@optional
-(BOOL)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
-(id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;

@required
-(void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
-(long long)numberOfValuesForPickerViewCell:(id)arg1;

@end

