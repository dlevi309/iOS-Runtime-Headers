/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSTableCell.h>

@class UIKeyboardInputMode;

@interface TIInputModeTableCell : PSTableCell {

	UIKeyboardInputMode* _inputMode;

}

@property (nonatomic,copy) UIKeyboardInputMode * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
+(long long)cellStyle;
-(void)dealloc;
-(id)title;
-(id)subtitle;
-(void)setInputMode:(UIKeyboardInputMode *)arg1 ;
-(UIKeyboardInputMode *)inputMode;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)updateLabels;
@end

