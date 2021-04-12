/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKAccount, PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString;

@interface PKAccountCredential : PKPaymentCredential {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKAccountWebServicePassDetailsResponse* _passDetailsResponse;

}

@property (nonatomic,readonly) PKAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccountWebServicePassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PKAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(id)longDescription;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPassDetailsResponse:(PKAccountWebServicePassDetailsResponse *)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(PKAccountWebServicePassDetailsResponse *)passDetailsResponse;
@end

