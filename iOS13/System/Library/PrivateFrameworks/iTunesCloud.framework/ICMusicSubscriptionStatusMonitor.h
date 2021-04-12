/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class ICUserIdentityContext, NSMutableDictionary, ICMusicSubscriptionStatus, ICUserIdentity;

@interface ICMusicSubscriptionStatusMonitor : NSObject {

	ICUserIdentityContext* _identityContext;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;
	ICMusicSubscriptionStatus* _subscriptionStatus;

}

@property (nonatomic,readonly) ICUserIdentity * identity; 
@property (nonatomic,readonly) ICMusicSubscriptionStatus * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
+(id)sharedMonitorForIdentity:(id)arg1 ;
+(id)sharedMonitorForIdentity:(id)arg1 identityStore:(id)arg2 ;
+(id)_sharedInstanceManager;
-(void)dealloc;
-(id)description;
-(ICUserIdentity *)identity;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)refreshSubscriptionStatus;
-(void)endObservingSubscriptionStatusWithToken:(id)arg1 ;
-(id)beginObservingSubscriptionStatusWithHandler:(/*^block*/id)arg1 ;
-(void)_endObservingSubscriptionStatus;
-(void)_beginObservingSubscriptionStatus;
-(void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_effectiveIdentityForRequestingSubscriptionStatus;
-(id)_initWithIdentityContext:(id)arg1 ;
-(void)_handleSubscriptionStatusDidChange:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
@end

