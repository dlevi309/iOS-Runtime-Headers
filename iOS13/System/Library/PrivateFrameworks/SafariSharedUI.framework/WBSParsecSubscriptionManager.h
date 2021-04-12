/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class PSSSSubscriptionManagerInternal, NSMutableDictionary, NSArray;

@interface WBSParsecSubscriptionManager : NSObject {

	PSSSSubscriptionManagerInternal* _thirdPartySubscriptionManager;
	NSMutableDictionary* _subscriptionsByProvider;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) NSArray * subscriptionDictionaries; 
@property (nonatomic,readonly) BOOL needsUpdate;                                //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(BOOL)needsUpdate;
-(void)removeSubscriptionsAddedAfterDate:(id)arg1 ;
-(void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(NSArray *)subscriptionDictionaries;
-(void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 ;
@end

