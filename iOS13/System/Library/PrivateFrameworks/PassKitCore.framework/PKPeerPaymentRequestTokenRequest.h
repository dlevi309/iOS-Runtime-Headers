/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(NSString *)recipientIdentifier;
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSString *)recipientPhoneOrEmail;
-(void)setRecipientPhoneOrEmail:(NSString *)arg1 ;
@end

