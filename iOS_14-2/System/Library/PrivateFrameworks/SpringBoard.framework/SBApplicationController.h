/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBApplicationRestrictionDataSource.h>
#import <libobjc.A.dylib/BKSTerminationAssertionObserver.h>
#import <libobjc.A.dylib/XBApplicationProviding.h>
#import <libobjc.A.dylib/SBApplicationLifecycleObserver.h>

@class NSMutableDictionary, NSSet, SBApplicationRestrictionController, SBApplicationLibraryObserver, FBSApplicationLibrary, SBApplicationInfo, SBSplashBoardController, SBReverseCountedSemaphore, NSString;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, BKSTerminationAssertionObserver, XBApplicationProviding, SBApplicationLifecycleObserver> {

	NSMutableDictionary* _applicationsByBundleIdentifer;
	os_unfair_lock_s _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
	NSSet* _cachedSystemAppsWithVisibilityOverrideHidden;
	SBApplicationRestrictionController* _restrictionController;
	SBApplicationLibraryObserver* _appLibraryObserver;
	FBSApplicationLibrary* _appLibrary;
	SBApplicationInfo* _systemAppInfo;
	SBSplashBoardController* _splashBoardController;
	SBReverseCountedSemaphore* _uninstallationReverseSemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)arg1 ;
+(void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)arg1 ;
-(id)allBundleIdentifiers;
-(id)_appInfosToBundleIDs:(id)arg1 ;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
-(id)init;
-(void)_loadApplications:(id)arg1 remove:(id)arg2 ;
-(void)waitForUninstallsToComplete;
-(void)_memoryWarningReceived;
-(id)mapsApplication;
-(id)cameraApplication;
-(id)_appLibrary;
-(id)allApplications;
-(id)spotlightApplication;
-(id)mobilePhone;
-(id)_lock_applicationWithBundleIdentifier:(id)arg1 ;
-(id)loginApplication;
-(void)requestUninstallApplication:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_preLoadApplications;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
-(id)allSplashBoardApplications;
-(void)_updateVisibilityOverridesInBackground;
-(void)applicationVisibilityMayHaveChanged;
-(id)iPodOutApplication;
-(id)dataActivationApplication;
-(id)_appLibraryObserver;
-(void)requestUninstallApplicationWithBundleIdentifier:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)testFlightApplication;
-(id)alwaysAvailableApplicationBundleIdentifiers;
-(id)bundleIdentifiersWithVisibilityOverrideHidden;
-(void)applicationsUpdated:(id)arg1 ;
-(void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(BOOL)arg2 withReason:(id)arg3 ;
-(void)applicationsRemoved:(id)arg1 ;
-(id)notesApplication;
-(id)restrictionController;
-(id)allInstalledApplications;
-(id)runningApplications;
-(id)musicApplication;
-(void)uninstallApplication:(id)arg1 ;
-(id)faceTimeApp;
-(id)setupApplication;
-(id)applicationWithPid:(int)arg1 ;
-(void)applicationsDemoted:(id)arg1 ;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg1 ;
-(void)_updateVisibilityOverrides;
-(id)webApplication;
-(void)applicationsAdded:(id)arg1 ;
-(Class)_appClassForInfo:(id)arg1 ;
-(id)splashBoardSystemApplications;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(id)inCallServiceApp;
-(void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 replaced:(id)arg3 updated:(id)arg4 ;
-(void)applicationRestrictionsMayHaveChanged;
-(void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)_loadApplicationFromApplicationInfo:(id)arg1 ;
-(void)applicationsReplaced:(id)arg1 ;
-(id)clockApplication;
-(id)_splashBoardController;
@end

