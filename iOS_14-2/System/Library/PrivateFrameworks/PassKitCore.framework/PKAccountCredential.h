/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKAccount *)account;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(PKAccountWebServicePassDetailsResponse *)passDetailsResponse;
-(id)longDescription;
-(unsigned long long)hash;
-(void)setPassDetailsResponse:(PKAccountWebServicePassDetailsResponse *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

