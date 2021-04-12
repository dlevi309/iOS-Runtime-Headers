/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <Preferences/PSListController.h>

@class CTXPCServiceSubscriptionContext, NSOrderedSet;

@interface TPSListController : PSListController {

	CTXPCServiceSubscriptionContext* _subscriptionContext;
	NSOrderedSet* _subscriptions;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;              //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,copy) NSOrderedSet * subscriptions;                                         //@synthesize subscriptions=_subscriptions - In the implementation block
-(NSOrderedSet *)subscriptions;
-(void)setSubscriptions:(NSOrderedSet *)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
@end

