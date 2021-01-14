/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateDisplay:(BOOL)arg1 ;
-(void)_updateDisplayForFieldTypeLabel:(id)arg1 ;
-(void)_buttonTapped;
-(double)minimumTextFieldOffset;
-(void)setMinimumTextLabelWidth:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)editableTextField;
@end

