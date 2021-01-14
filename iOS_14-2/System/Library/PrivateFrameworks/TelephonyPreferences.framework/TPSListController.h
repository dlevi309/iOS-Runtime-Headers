/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubscriptions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)subscriptions;
-(void)setSpecifier:(id)arg1 ;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
@end

