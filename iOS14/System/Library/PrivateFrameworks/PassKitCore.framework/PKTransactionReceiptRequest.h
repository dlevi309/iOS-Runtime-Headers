/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSURL, NSString, NSData;

@interface PKTransactionReceiptRequest : PKPaymentWebServiceRequest {

	NSURL* _receiptProviderURL;
	NSString* _authorizationToken;
	NSData* _signature;
	NSString* _receiptIdentifier;
	NSString* _conversationIdentifier;

}

@property (nonatomic,readonly) NSURL * receiptProviderURL;                 //@synthesize receiptProviderURL=_receiptProviderURL - In the implementation block
@property (nonatomic,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * receiptIdentifier;               //@synthesize receiptIdentifier=_receiptIdentifier - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
-(NSData *)signature;
-(id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4 ;
-(NSURL *)receiptProviderURL;
-(NSString *)authorizationToken;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
-(NSString *)receiptIdentifier;
-(id)_urlRequest;
@end

