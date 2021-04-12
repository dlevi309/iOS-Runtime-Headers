/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKBankAccountInformation.h>

@interface PKPeerPaymentBankAccountInformation : PKBankAccountInformation
-(id)init;
-(void)setRoutingNumber:(id)arg1 ;
-(void)setBankName:(id)arg1 ;
-(void)updateToLatestKeychainData;
-(void)deleteAllBankInformation;
-(id)_wrapperWithType:(unsigned long long)arg1 ;
-(void)deleteAllLocalBankInformation;
-(id)_bankAccountInformationInKeychain;
-(void)_writeBankAccountInformationToKeychain;
-(void)setAccountNumber:(id)arg1 ;
@end

