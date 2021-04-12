/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedMonitorForIdentity:(id)arg1 identityStore:(id)arg2 ;
+(id)_sharedInstanceManager;
+(id)sharedMonitorForIdentity:(id)arg1 ;
-(id)_initWithIdentityContext:(id)arg1 ;
-(ICUserIdentity *)identity;
-(void)_beginObservingSubscriptionStatus;
-(void)refreshSubscriptionStatus;
-(id)_effectiveIdentityForRequestingSubscriptionStatus;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(id)description;
-(void)endObservingSubscriptionStatusWithToken:(id)arg1 ;
-(id)beginObservingSubscriptionStatusWithHandler:(/*^block*/id)arg1 ;
-(void)_updateWithSubscriptionStatus:(id)arg1 ;
-(void)_handleSubscriptionStatusDidChange:(id)arg1 ;
-(void)_requestSubscriptionStatusWithCachingPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)dealloc;
-(void)_endObservingSubscriptionStatus;
@end

