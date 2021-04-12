/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
-(id)init;
-(void)setAccountNumber:(id)arg1 ;
-(void)setRoutingNumber:(id)arg1 ;
-(void)setBankName:(id)arg1 ;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllLocalBankInformation;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
@end

