/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSTableCell.h>

@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell {

	UIKeyboardInputMode* _inputMode;

}

@property (nonatomic,copy) UIKeyboardInputMode * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
+(long long)cellStyle;
-(void)setInputMode:(UIKeyboardInputMode *)arg1 ;
-(UIKeyboardInputMode *)inputMode;
-(id)subtitle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)updateLabels;
-(id)title;
-(void)dealloc;
@end

