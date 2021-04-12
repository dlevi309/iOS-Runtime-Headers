/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKCurrencyAmount, PKBankAccountInformation;

@interface PKBankAccountDataItem : PKPaymentDataItem {

	PKCurrencyAmount* _peerPaymentBalance;
	PKBankAccountInformation* _PKBankAccountInformation;

}

@property (nonatomic,retain) PKBankAccountInformation * PKBankAccountInformation;              //@synthesize PKBankAccountInformation=_PKBankAccountInformation - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * peerPaymentBalance;                            //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (nonatomic,readonly) PKBankAccountInformation * bankAccountInformation; 
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKBankAccountInformation *)PKBankAccountInformation;
-(void)setPKBankAccountInformation:(PKBankAccountInformation *)arg1 ;
@end

