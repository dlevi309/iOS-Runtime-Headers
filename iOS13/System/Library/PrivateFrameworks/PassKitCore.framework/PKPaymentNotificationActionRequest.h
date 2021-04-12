/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentNotificationActionRequest : PKPaymentWebServiceRequest {

	NSString* _requestID;
	NSString* _action;

}

@property (nonatomic,copy) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSString * action;                 //@synthesize action=_action - In the implementation block
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

