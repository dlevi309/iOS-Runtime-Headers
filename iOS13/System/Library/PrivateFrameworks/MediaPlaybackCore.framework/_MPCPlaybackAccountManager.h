/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSMutableDictionary, MPCPlaybackEngine, NSArray;

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
-(NSArray *)accounts;
-(id)accountForDSID:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(BOOL)hasLoadedInitialAccounts;
-(void)_subscriptionStatusChangedNotification:(id)arg1 ;
-(void)_userIdentityStoreChangedNotification:(id)arg1 ;
-(void)_updateAccounts;
-(id)accountForHashedDSID:(id)arg1 ;
-(void)_buildAccountFromLocalIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_buildAccountFromDelegatedIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enumerateIdentitiesWithCompletion:(/*^block*/id)arg1 ;
@end

