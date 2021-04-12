/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell {

	UIButton* _button;

}
+(long long)tableViewCellStyle;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)editableTextField;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(void)_updateDisplay:(BOOL)arg1 ;
-(void)_updateDisplayForFieldTypeLabel:(id)arg1 ;
-(void)_buttonTapped;
-(double)minimumTextFieldOffset;
@end

