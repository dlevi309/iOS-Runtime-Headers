/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)conversationIdentifier;
-(NSData *)signature;
-(id)_urlRequest;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)authorizationToken;
-(NSString *)receiptIdentifier;
-(id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4 ;
-(NSURL *)receiptProviderURL;
@end

