/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {

	PSSSSubscriptionManager* _internal;

}
+(id)sharedManager;
-(id)init;
-(void)registerSubscriptionWithInfo:(id)arg1 expirationDate:(id)arg2 ;
-(void)unregisterSubscriptionWithInfo:(id)arg1 ;
-(void)unregisterAllSubscriptions;
@end

