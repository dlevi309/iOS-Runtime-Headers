/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)aps;
-(NSString *)action;
-(id)initWithData:(id)arg1 ;
-(NSString *)requestID;
@end

