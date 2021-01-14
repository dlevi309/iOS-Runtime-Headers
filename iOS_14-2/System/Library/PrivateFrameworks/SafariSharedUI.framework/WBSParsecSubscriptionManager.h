/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)needsUpdate;
-(id)init;
-(id)_init;
-(void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(NSArray *)subscriptionDictionaries;
-(void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 ;
-(void)removeSubscriptionsAddedAfterDate:(id)arg1 ;
@end

