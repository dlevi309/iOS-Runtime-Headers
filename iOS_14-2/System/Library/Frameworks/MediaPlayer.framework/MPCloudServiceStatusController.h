/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue, NSCopying;
@class NSObject, ICMusicSubscriptionStatusMonitor, ICUserIdentity, ICMusicSubscriptionFairPlayKeyStatus, SSVSubscriptionStatus, SSVFairPlaySubscriptionStatus, ICMusicSubscriptionStatus, NSString;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _cloudLibraryStatusAccessQueue;
	long long _cloudLibraryStatus;
	unsigned long long _cloudLibraryObservationCount;
	BOOL _hasLoadedMatchStatus;
	BOOL _hasLoadedSubscriptionAvailability;
	ICMusicSubscriptionStatusMonitor* _subscriptionStatusMonitor;
	id<NSCopying> _subscriptionStatusObservationToken;
	unsigned long long _matchStatusObservationCount;
	unsigned long long _matchStatus;
	BOOL _observingNetworkReachability;
	BOOL _hasSubscriptionLease;
	BOOL _shouldPlaybackRequireSubscriptionLease;
	BOOL _subscriptionAvailable;
	ICUserIdentity* _userIdentity;
	ICMusicSubscriptionFairPlayKeyStatus* _lastKnownSubscriptionFairPlayKeyStatus;
	SSVSubscriptionStatus* _subscriptionStatus;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                   //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                                              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) SSVFairPlaySubscriptionStatus * lastKnownFairPlaySubscriptionStatus; 
@property (nonatomic,readonly) ICMusicSubscriptionFairPlayKeyStatus * lastKnownSubscriptionFairPlayKeyStatus;              //@synthesize lastKnownSubscriptionFairPlayKeyStatus=_lastKnownSubscriptionFairPlayKeyStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long matchStatus; 
@property (nonatomic,readonly) BOOL hasLoadedSubscriptionAvailability; 
@property (getter=isSubscriptionAvailable,nonatomic,readonly) BOOL subscriptionAvailable; 
@property (nonatomic,copy,readonly) SSVSubscriptionStatus * subscriptionStatus;                                            //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy,readonly) ICMusicSubscriptionStatus * musicSubscriptionStatus; 
@property (nonatomic,readonly) BOOL shouldPlaybackRequireSubscriptionLease; 
@property (getter=isCloudLibraryEnabled,nonatomic,readonly) BOOL cloudLibraryEnabled; 
@property (getter=isPurchaseHistoryEnabled,nonatomic,readonly) BOOL purchaseHistoryEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudServiceStatusControllerWithUserIdentity:(id)arg1 ;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3 ;
+(id)globalSerialQueue;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 ;
+(id)controllers;
+(id)_cloudServiceStatusControllerWithUserIdentity:(id)arg1 createIfRequired:(BOOL)arg2 ;
+(id)sharedController;
-(BOOL)isCloudLibraryEnabled;
-(BOOL)hasLoadedSubscriptionAvailability;
-(ICUserIdentity *)userIdentity;
-(ICMusicSubscriptionStatus *)musicSubscriptionStatus;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)init;
-(void)_beginObservingMatchStatus;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)isSubscriptionAvailable;
-(BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL*)arg1 ;
-(void)_updateSubscriptionAvailability;
-(void)beginObservingCloudLibraryEnabled;
-(void)_updateMatchStatus;
-(void)_cloudClientAuthenticationDidChange;
-(ICMusicSubscriptionFairPlayKeyStatus *)lastKnownSubscriptionFairPlayKeyStatus;
-(void)_copyObservationStateFrom:(id)arg1 ;
-(void)_updateSubscriptionAvailabilityWithValue:(BOOL)arg1 ;
-(BOOL)shouldPlaybackRequireSubscriptionLease;
-(void)_endObservingMatchStatus;
-(void)beginObservingSubscriptionAvailability;
-(NSString *)description;
-(BOOL)_handlesSameAccountAs:(id)arg1 ;
-(void)_performBlockOnControllerHandlingTheSameAccount:(/*^block*/id)arg1 ;
-(void)_endObservingCloudLibraryEnabled;
-(void)_allowsMusicSubscriptionDidChange:(id)arg1 ;
-(void)refreshMusicSubscriptionStatus;
-(unsigned long long)matchStatus;
-(void)_beginObservingCloudLibraryEnabled;
-(void)beginObservingPurchaseHistoryEnabled;
-(BOOL)_currentPurchaseHistoryEnabled;
-(void)_enableICMLErrorReasonChange:(id)arg1 ;
-(void)endObservingCloudLibraryEnabled;
-(BOOL)isPurchaseHistoryEnabled;
-(id)_initWithUserIdentity:(id)arg1 ;
-(BOOL)_currentCloudLibraryEnabled;
-(void)endObservingMatchStatus;
-(void)beginObservingMatchStatus;
-(SSVFairPlaySubscriptionStatus *)lastKnownFairPlaySubscriptionStatus;
-(void)_userIdentityStoreDidChange:(id)arg1 ;
-(void)endObservingPurchaseHistoryEnabled;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(void)endObservingFairPlaySubscriptionStatus;
-(void)endObservingSubscriptionAvailability;
-(void)dealloc;
-(void)beginObservingFairPlaySubscriptionStatus;
@end

