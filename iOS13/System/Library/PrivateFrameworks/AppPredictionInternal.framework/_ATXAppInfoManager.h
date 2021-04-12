/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore, NSMutableArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification;

@interface _ATXAppInfoManager : NSObject {

	_ATXDataStore* _dataStore;
	NSMutableArray* _installDeltaLog;
	_ATXInternalInstallNotification* _installNotificationListener;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	opaque_pthread_rwlock_t _rwlock;

}
+(id)sharedInstance;
+(id)sortArrayAndComputeMedian:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithDataStore:(id)arg1 ;
-(long long)launchedAppCount;
-(id)allApps;
-(void)train;
-(id)initWithInMemoryStore;
-(void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(id)allAppsWithInstallDate;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)removeInfoForAppAction:(id)arg1 ;
-(void)removeAppLaunchesForBundleId:(id)arg1 ;
-(void)clearAppLaunchInfo;
-(void)clearAppInstallInfo;
-(id)totalSlotsInDatastore;
-(void)removeActionDataForBundleId:(id)arg1 ;
-(id)_appInfoNoLockForBundleId:(id)arg1 ;
-(id)lastLaunchDateForBundleId:(id)arg1 ;
-(id)averageSecondsBetweenLaunchesForBundleId:(id)arg1 ;
-(id)medianSecondsBetweenLaunchesForBundleId:(id)arg1 ;
-(id)genreIdForBundleId:(id)arg1 ;
-(id)subGenreIdsForBundleId:(id)arg1 ;
-(id)genreIdsForBundleId:(id)arg1 ;
-(id)app2VecClusterForBundleId:(id)arg1 ;
-(id)lastAppLaunch;
-(id)secondMostRecentAppLaunch;
-(id)lastAppLaunchDate;
-(id)allActionKeys;
-(id)lastAppActionLaunch;
-(id)lastAppActionLaunchDate;
-(id)lastAppActionLaunchDateForActionKey:(id)arg1 ;
-(id)averageSecondsBetweenAppActionsForActionKey:(id)arg1 ;
-(id)medianSecondsBetweenAppActionsForActionKey:(id)arg1 ;
-(id)lastUnlockDate;
-(void)updateGenreIdsForBundleId:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 ;
-(void)updateApp2VecClusterForBundleId:(id)arg1 app2VecCluster:(id)arg2 ;
-(void)addInstallForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addInstallForBundleInfoMap:(id)arg1 ;
-(void)addLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addLaunchForAppAction:(id)arg1 date:(id)arg2 ;
-(void)addSpotlightLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addAverageSecondsBetweenLaunchesForBundleId:(id)arg1 average:(id)arg2 ;
-(void)addMedianSecondsBetweenLaunchesForBundleId:(id)arg1 median:(id)arg2 ;
-(void)addAverageSecondsBetweenAppActionsForActionKey:(id)arg1 average:(id)arg2 ;
-(void)addMedianSecondsBetweenAppActionsForActionKey:(id)arg1 median:(id)arg2 ;
-(void)addScreenLockAtDate:(id)arg1 ;
-(void)removeAppInfoForBundleIds:(id)arg1 ;
-(void)removeInfoForAppActions:(id)arg1 ;
-(void)startInstallDeltaRecording;
-(id)stopInstallDeltaRecording;
-(void)computeAverageAndMedianSecondsBetweenAppLaunches;
-(void)computeAverageAndMedianSecondsBetweenAppActions;
-(void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)arg1 ;
-(void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)arg1 ;
-(void)updateGenreIdsForAllApps;
-(void)updateApp2VecClustersForAllApps;
@end

