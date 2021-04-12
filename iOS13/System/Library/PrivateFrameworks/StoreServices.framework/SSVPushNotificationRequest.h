/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVPushNotificationParameters, NSString;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {

	SSVPushNotificationParameters* _parameters;

}

@property (nonatomic,copy) SSVPushNotificationParameters * pushNotificationParameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithPushNotificationParameters:(id)arg1 ;
-(SSVPushNotificationParameters *)pushNotificationParameters;
-(void)setPushNotificationParameters:(SSVPushNotificationParameters *)arg1 ;
@end

