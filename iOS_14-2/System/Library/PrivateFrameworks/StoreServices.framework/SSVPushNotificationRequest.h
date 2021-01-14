/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPushNotificationParameters:(SSVPushNotificationParameters *)arg1 ;
-(id)initWithPushNotificationParameters:(id)arg1 ;
-(SSVPushNotificationParameters *)pushNotificationParameters;
@end

