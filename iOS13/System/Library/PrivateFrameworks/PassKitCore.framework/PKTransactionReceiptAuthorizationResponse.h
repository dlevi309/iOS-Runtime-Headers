/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSData;

@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse {

	NSString* _authorizationToken;
	NSData* _signature;
	NSString* _conversationIdentifier;

}

@property (nonatomic,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)conversationIdentifier;
-(NSData *)signature;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)authorizationToken;
@end

