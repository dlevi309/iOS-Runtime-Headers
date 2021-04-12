/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/


@class FBSDisplayConfiguration;

@interface XBApplicationController : NSObject {

	FBSDisplayConfiguration* _mainDisplayConfiguration;
	long long _statusBarOrientation;

}

@property (setter=_setStatusBarOrientation:,getter=_statusBarOrientation) long long statusBarOrientation;              //@synthesize statusBarOrientation=_statusBarOrientation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_setStatusBarOrientation:(long long)arg1 ;
-(void)_deleteLegacyCachesSnapshotPathsIfNeeded;
-(void)_migrateDataIfNeeded;
-(void)_updateStatusBarOrientation;
-(void)removeAllGeneratedLaunchImages;
-(void)removeAllGeneratedLaunchImagesAndSnapshots;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2 ;
-(id)allSplashBoardApplications;
-(void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(BOOL)arg3 ;
-(id)_allApplications;
-(void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(BOOL)arg2 ;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 ;
-(long long)_statusBarOrientation;
-(id)allSplashBoardSystemApplications;
-(void)resetEverything;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 ;
@end

