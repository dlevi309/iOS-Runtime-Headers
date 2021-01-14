/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class UIImage, PKBankAccountInformation;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {

	UIImage* _bankIcon;
	PKBankAccountInformation* _bankAccount;

}

@property (nonatomic,retain) PKBankAccountInformation * bankAccount;              //@synthesize bankAccount=_bankAccount - In the implementation block
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
-(PKBankAccountInformation *)bankAccount;
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

