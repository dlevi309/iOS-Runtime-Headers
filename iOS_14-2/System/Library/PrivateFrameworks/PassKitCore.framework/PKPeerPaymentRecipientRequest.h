/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest {

	NSString* _recipientAddress;
	NSString* _senderAddress;
	unsigned long long _recipientAddressSource;

}

@property (nonatomic,copy) NSString * recipientAddress;                              //@synthesize recipientAddress=_recipientAddress - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                                 //@synthesize senderAddress=_senderAddress - In the implementation block
@property (assign,nonatomic) unsigned long long recipientAddressSource;              //@synthesize recipientAddressSource=_recipientAddressSource - In the implementation block
-(void)setSenderAddress:(NSString *)arg1 ;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(NSString *)recipientAddress;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)setRecipientAddressSource:(unsigned long long)arg1 ;
-(unsigned long long)recipientAddressSource;
@end

