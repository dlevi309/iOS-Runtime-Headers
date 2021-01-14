/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {

	PSSSSubscriptionManager* _internal;

}
+(id)sharedManager;
-(id)init;
-(void)unregisterAllSubscriptions;
-(void)unregisterSubscriptionWithInfo:(id)arg1 ;
-(void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2 ;
@end

