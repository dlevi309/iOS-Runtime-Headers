/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSDecimalNumber;

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest {

	NSString* _recipientIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSString* _senderAddress;
	NSString* _recipientPhoneOrEmail;

}

@property (nonatomic,copy) NSString * recipientIdentifier;                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currency;                           //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                      //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) NSString * recipientPhoneOrEmail;              //@synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail - In the implementation block
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSString *)recipientPhoneOrEmail;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setRecipientPhoneOrEmail:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)recipientIdentifier;
-(NSDecimalNumber *)amount;
-(void)setCurrency:(NSString *)arg1 ;
@end

