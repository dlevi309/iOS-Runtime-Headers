/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, MPCPlaybackEngine, NSArray, MPCPlaybackAccount;

@interface _MPCPlaybackAccountManager : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _accounts;
	BOOL _needsRefreshDueToTimeout;
	BOOL _hasLoadedInitialAccounts;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,readonly) BOOL hasLoadedInitialAccounts;                          //@synthesize hasLoadedInitialAccounts=_hasLoadedInitialAccounts - In the implementation block
@property (nonatomic,readonly) MPCPlaybackAccount * activeAccount; 
-(NSArray *)accounts;
-(id)accountForDSID:(id)arg1 ;
-(MPCPlaybackAccount *)activeAccount;
-(BOOL)hasLoadedInitialAccounts;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_userIdentityStoreChangedNotification:(id)arg1 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAccounts;
-(void)_enumerateIdentitiesWithCompletion:(/*^block*/id)arg1 ;
-(id)accountForUserIdentity:(id)arg1 ;
-(id)accountForHashedDSID:(id)arg1 ;
-(void)_subscriptionStatusChangedNotification:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(void)_buildAccountFromLocalIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

