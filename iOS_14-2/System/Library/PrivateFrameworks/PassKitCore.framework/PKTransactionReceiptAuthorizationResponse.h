/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)signature;
-(NSString *)authorizationToken;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)conversationIdentifier;
@end

