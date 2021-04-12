/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse {

	NSString* _conversationIdentifier;

}

@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
@end

