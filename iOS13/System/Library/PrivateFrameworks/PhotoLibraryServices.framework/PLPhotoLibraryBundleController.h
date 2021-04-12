/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSDate, PLBackgroundJobService;

@interface PLPhotoLibraryBundleController : NSObject {

	long long _bundleType;
	Class _libraryServicesDelegateClass;
	os_unfair_lock_s _bundlesByPathLock;
	NSMutableDictionary* _bundlesByPath;
	os_unfair_lock_s _bundleCreationPauseLock;
	NSDate* _bundleCreationPausedUntilDate;
	PLBackgroundJobService* _backgroundJobService;

}

@property (retain) PLBackgroundJobService * backgroundJobService;              //@synthesize backgroundJobService=_backgroundJobService - In the implementation block
+(id)sharedBundleController;
+(id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1 ;
+(id)_realPathForLibraryURL:(id)arg1 ;
-(id)init;
-(id)bundleForLibraryURL:(id)arg1 ;
-(id)lookupOrCreateBundleForLibraryURL:(id)arg1 ;
-(PLBackgroundJobService *)backgroundJobService;
-(id)libraryServicesStatusDescription;
-(id)openBundleAtLibraryURL:(id)arg1 ;
-(id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2 ;
-(id)libraryBundlePaths;
-(id)libraryBundles;
-(id)replaceBundleForRebuildAtLibraryURL:(id)arg1 ;
-(id)newPhotoLibraryBundleWithLibraryURL:(id)arg1 ;
-(void)handleUnknownMergeEvent;
-(void)_unregisterBundle:(id)arg1 pauseUntilDate:(id)arg2 ;
-(void)shutdownBundle:(id)arg1 reason:(id)arg2 ;
-(id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(BOOL)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id*)arg3 ;
-(void)setBackgroundJobService:(PLBackgroundJobService *)arg1 ;
@end

