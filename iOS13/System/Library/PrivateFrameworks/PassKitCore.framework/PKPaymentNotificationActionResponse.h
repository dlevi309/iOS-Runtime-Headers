/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary, NSString;

@interface PKPaymentNotificationActionResponse : PKPaymentWebServiceResponse {

	NSDictionary* _aps;
	NSString* _action;
	NSString* _requestID;

}

@property (nonatomic,copy,readonly) NSDictionary * aps;                //@synthesize aps=_aps - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)action;
-(NSString *)requestID;
-(NSDictionary *)aps;
@end

