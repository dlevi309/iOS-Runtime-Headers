/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentPreferenceCardCell.h>

@class UIImage, PKBankAccountInformation;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {

	UIImage* _bankIcon;
	PKBankAccountInformation* _bankAccount;

}

@property (nonatomic,retain) PKBankAccountInformation * bankAccount;              //@synthesize bankAccount=_bankAccount - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setBankAccount:(PKBankAccountInformation *)arg1 ;
-(PKBankAccountInformation *)bankAccount;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;
@end

