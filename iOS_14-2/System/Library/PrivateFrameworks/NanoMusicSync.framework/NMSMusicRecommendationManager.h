/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
#import <NanoMusicSync/NanoMusicSync-Structs.h>
@class NSArray, NSObject, NSSet;

@interface NMSMusicRecommendationManager : NSObject {

	NSArray* _recommendations;
	BOOL _loadingContents;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _libraryRecommendationExpirationTimer;
	NSObject*<OS_dispatch_source> _storeRecommendationExpirationTimer;
	NSObject*<OS_dispatch_source> _storeRecommendationRetryTimer;
	unsigned long long _storeRecommendationRetryAttempt;
	NSObject*<OS_dispatch_source> _artworkRetryTimer;
	unsigned long long _artworkRetryAttempt;
	NSSet* _artworkRetryPlaylists;
	NSObject*<OS_dispatch_group> _initialRecommendationsFetchGroup;
	BOOL _hasFetchedInitialRecommendations;
	BOOL _wantsContentsUpdate;

}

@property (assign,nonatomic) BOOL wantsContentsUpdate;              //@synthesize wantsContentsUpdate=_wantsContentsUpdate - In the implementation block
+(id)sharedManager;
-(void)_retryFailedArtworkImportsIfNecessary;
-(void)_handleRecommendationStoreContentsDidChangeNotification:(id)arg1 ;
-(void)_scheduleNextLibraryRecommendationReloadIfNecessary;
-(void)nms_deselectRecommendationIfNecessaryForModelObject:(id)arg1 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1 ;
-(void)_startStoreRecommendationRetryTimer;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1 ;
-(id)init;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handleActiveAccountDidChangeNotification:(id)arg1 ;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)fetchRecommendationsWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateStoreRecommendationExpirationTimer;
-(void)_importArtworkForPlaylists:(id)arg1 ;
-(id)_fetchAddedDateForContainer:(id)arg1 ;
-(BOOL)_updateWithRecommendations:(id)arg1 ;
-(BOOL)hasSelectedRecommendationWithIdentifier:(id)arg1 ;
-(void)_handlePairingFinishedNotification:(id)arg1 ;
-(void)_invalidateRecommendationRetryTimer;
-(void)setWantsContentsUpdate:(BOOL)arg1 ;
-(void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)arg1 ;
-(void)_invalidateArtworkRetryTimer;
-(id)_recommendations;
-(void)_finishLoadingContentsWithResponse:(id)arg1 ;
-(void)_notifyMusicRecommendationsDidUpdateNotification;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_deleteCachedArtworksWithTokens:(id)arg1 ;
-(void)_handleArtworksDidUpdateNotification:(id)arg1 ;
-(void)_reloadRecommendationsFromDefaultsWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadRecommendationContentsIfNecessary;
-(BOOL)_isLibraryRecommendationExpired;
-(void)_removePreviousRecommendationDefaults;
-(void)_setArtworkImageCache:(id)arg1 withToken:(id)arg2 ;
-(void)_removeLegacyRecommendationsDefaultsIfNecessary;
-(void)_persistUpdatedRecommendationsWithResponse:(id)arg1 ;
-(BOOL)wantsContentsUpdate;
-(void)_registerForPairingFinishedNotification;
-(id)_sortedContainersBasedOnRecency;
-(void)persistRecommendationsSelections:(id)arg1 ;
-(void)_reloadStoreRecommendations;
-(void)nms_fetchRecentMusicRecommendationWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStoreRecommendationExpired;
-(void)_startArtworkRetryTimer;
-(void)_reloadLibraryRecommendations;
-(void)_scheduleNextStoreRecommendationReloadIfNecessary;
-(void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_expirationDateForUpdateDate:(id)arg1 withOffsetDays:(long long)arg2 preferredTimeWindow:(NSRange)arg3 ;
-(void)_invalidateLibraryRecommendationExpirationTimer;
-(void)dealloc;
-(BOOL)_updateRecommendationsSelections;
-(void)_unregisterForPairingFinishedNotification;
@end

