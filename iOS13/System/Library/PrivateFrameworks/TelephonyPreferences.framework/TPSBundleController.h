/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <Preferences/PSBundleController.h>

@class TPSTelephonyController, CTXPCServiceSubscriptionContext, NSArray, PSListController, NSOrderedSet;

@interface TPSBundleController : PSBundleController {

	BOOL _supportsDisabledSubscriptions;
	TPSTelephonyController* _telephonyController;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	NSArray* _specifiers;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;                      //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                                         //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,__weak,readonly) PSListController * parentListController; 
@property (nonatomic,readonly) TPSTelephonyController * telephonyController;                             //@synthesize telephonyController=_telephonyController - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * subscriptions; 
@property (nonatomic,copy,readonly) NSOrderedSet * supportedSubscriptions; 
@property (nonatomic,readonly) BOOL supportsDisabledSubscriptions;                                       //@synthesize supportsDisabledSubscriptions=_supportsDisabledSubscriptions - In the implementation block
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isSubscriptionListHidden,nonatomic,readonly) BOOL subscriptionListHidden; 
-(BOOL)isHidden;
-(NSOrderedSet *)subscriptions;
-(NSArray *)specifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(id)subscriptionContextForSpecifier:(id)arg1 ;
-(NSOrderedSet *)supportedSubscriptions;
-(BOOL)supportsDisabledSubscriptions;
-(TPSTelephonyController *)telephonyController;
-(BOOL)isSubscriptionListHidden;
-(PSListController *)parentListController;
-(void)telephonyController:(id)arg1 didChangeActiveSubscriptions:(id)arg2 ;
-(void)telephonyController:(id)arg1 didChangeSubscriptions:(id)arg2 ;
@end

