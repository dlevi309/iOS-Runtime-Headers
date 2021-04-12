/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSData, NSDictionary, PKContact;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {

	NSString* _quoteIdentifier;
	NSData* _paymentData;
	NSDictionary* _certificates;
	NSString* _recipientPhoneOrEmail;
	PKContact* _contact;
	NSString* _routingNumber;
	NSString* _accountNumber;
	NSString* _pushToken;
	NSData* _signedEnrollmentDataSignature;

}

@property (nonatomic,copy) NSString * quoteIdentifier;                          //@synthesize quoteIdentifier=_quoteIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                                //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,copy) NSDictionary * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * recipientPhoneOrEmail;                    //@synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail - In the implementation block
@property (nonatomic,retain) PKContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSString * routingNumber;                          //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,retain) NSString * accountNumber;                          //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                                //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;              //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
+(id)requestWithAuthorizedPeerPaymentQuote:(id)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(PKContact *)contact;
-(void)setContact:(PKContact *)arg1 ;
-(NSString *)pushToken;
-(NSData *)signedEnrollmentDataSignature;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSString *)recipientPhoneOrEmail;
-(NSDictionary *)certificates;
-(NSString *)routingNumber;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(void)setRecipientPhoneOrEmail:(NSString *)arg1 ;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(void)setQuoteIdentifier:(NSString *)arg1 ;
-(NSString *)quoteIdentifier;
-(void)setCertificates:(NSDictionary *)arg1 ;
-(void)setPaymentData:(NSData *)arg1 ;
-(NSData *)paymentData;
@end

