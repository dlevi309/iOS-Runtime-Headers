/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEProvider.h>

@class NSDictionary;

@interface NEAppPushProvider : NEProvider {

	NSDictionary* _providerConfiguration;

}

@property (readonly) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
-(id)init;
-(void)reportIncomingCallWithUserInfo:(id)arg1 ;
-(void)handleTimerEvent;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)providerConfiguration;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)stopWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

