/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)senderAddress;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)recipientAddress;
-(void)setRecipientAddress:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)setRecipientAddressSource:(unsigned long long)arg1 ;
-(unsigned long long)recipientAddressSource;
@end

