/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	UIImageView* _accessoryImageView;
	BOOL _hasDarkAppearance;
	long long _paymentCredentialType;

}

@property (assign,nonatomic) long long paymentCredentialType;              //@synthesize paymentCredentialType=_paymentCredentialType - In the implementation block
@property (assign,nonatomic) BOOL hasDarkAppearance;                       //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
-(id)init;
-(void)setPaymentSetupField:(id)arg1 ;
-(void)setPaymentCredentialType:(long long)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateNetworkImage;
-(id)_networkImage;
-(long long)paymentCredentialType;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(BOOL)hasDarkAppearance;
-(void)setHasDarkAppearance:(BOOL)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)isEnabled;
-(void)dealloc;
@end

