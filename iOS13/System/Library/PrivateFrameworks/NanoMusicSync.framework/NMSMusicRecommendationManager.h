/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
#import <NanoMusicSync/NanoMusicSync-Structs.h>
@class NSArray, NSObject, NSSet;

@interface NMSMusicRecommendationManager : NSObject {

	NSArray* _recommendations;
	BOOL _loadingContents;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _recommendationExpirationTimer;
	NSObject*<OS_dispatch_source> _recommendationRetryTimer;
	double _recommendationRetryInterval;
	NSObject*<OS_dispatch_source> _artworkRetryTimer;
	double _artworkRetryInterval;
	NSSet* _artworkRetryPlaylists;
	NSObject*<OS_dispatch_group> _initialRecommendationsFetchGroup;
	BOOL _hasFetchedInitialRecommendations;
	BOOL _wantsContentsUpdate;

}

@property (assign,nonatomic) BOOL wantsContentsUpdate;              //@synthesize wantsContentsUpdate=_wantsContentsUpdate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(id)_recommendations;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1 ;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1 ;
-(void)fetchRecommendationsWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nms_fetchSelectedRecommendationTypesForModelObject:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasSelectedRecommendationWithIdentifier:(id)arg1 ;
-(void)nms_deselectRecommendationIfNecessaryForModelObject:(id)arg1 ;
-(void)_handleArtworksDidUpdateNotification:(id)arg1 ;
-(void)_handleRecommendationStoreContentsDidChangeNotification:(id)arg1 ;
-(void)_removeLegacyRecommendationsDefaultsIfNecessary;
-(void)_registerForPairingFinishedNotification;
-(void)_unregisterForPairingFinishedNotification;
-(void)_reloadRecommendationContentsIfNecessary;
-(void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)arg1 ;
-(void)_handlePairingFinishedNotification:(id)arg1 ;
-(void)_reloadRecommendationsFromDefaultsWithCompletion:(/*^block*/id)arg1 ;
-(void)_removePreviousRecommendationDefaults;
-(void)_notifyMusicRecommendationsDidUpdateNotification;
-(BOOL)_updateRecommendationsSelections;
-(void)_reloadLibraryRecommendations;
-(BOOL)_updateWithRecommendations:(id)arg1 ;
-(BOOL)_isRecommendationExpired;
-(void)_scheduleNextRecommendationReloadIfNecessary;
-(id)_sortedContainersBasedOnRecency;
-(id)_expirationDateForUpdateDate:(id)arg1 withOffsetDays:(long long)arg2 preferredTimeWindow:(NSRange)arg3 ;
-(id)_fetchAddedDateForContainer:(id)arg1 ;
-(void)_startRecommendationRetryTimer;
-(void)_finishLoadingContentsWithResponse:(id)arg1 ;
-(void)_persistUpdatedRecommendationsWithResponse:(id)arg1 ;
-(void)persistRecommendationsSelections:(id)arg1 ;
-(void)_invalidateRecommendationExpirationTimer;
-(void)_deleteCachedArtworksWithTokens:(id)arg1 ;
-(void)_importArtworkForPlaylists:(id)arg1 ;
-(void)_invalidateArtworkRetryTimer;
-(void)_setArtworkImageCache:(id)arg1 withToken:(id)arg2 ;
-(void)_startArtworkRetryTimer;
-(void)_retryFailedArtworkImportsIfNecessary;
-(void)setWantsContentsUpdate:(BOOL)arg1 ;
-(void)_handleActiveAccountDidChangeNotification:(id)arg1 ;
-(void)_reloadStoreRecommendations;
-(void)_invalidateRecommendationRetryTimer;
-(BOOL)wantsContentsUpdate;
-(void)nms_fetchRecommendationForModelObject:(id)arg1 forRecommendationTypes:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

