/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLCoreDataFileRecorder, NSMutableDictionary, NSDate, PLBackgroundJobService;

@interface PLPhotoLibraryBundleController : NSObject {

	long long _bundleType;
	Class _libraryServicesDelegateClass;
	PLCoreDataFileRecorder* _statementRecorder;
	os_unfair_lock_s _bundlesByPathLock;
	NSMutableDictionary* _bundlesByPath;
	os_unfair_lock_s _bundleCreationPauseLock;
	NSDate* _bundleCreationPausedUntilDate;
	PLBackgroundJobService* _backgroundJobService;

}

@property (retain) PLBackgroundJobService * backgroundJobService;              //@synthesize backgroundJobService=_backgroundJobService - In the implementation block
+(id)_realPathForLibraryURL:(id)arg1 ;
+(id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1 ;
+(id)sharedBundleController;
-(PLBackgroundJobService *)backgroundJobService;
-(void)_unregisterBundle:(id)arg1 pauseUntilDate:(id)arg2 ;
-(id)openBundleAtLibraryURL:(id)arg1 ;
-(id)replaceBundleForRebuildAtLibraryURL:(id)arg1 ;
-(id)init;
-(id)lookupOrCreateBundleForLibraryURL:(id)arg1 ;
-(void)handleUnknownMergeEvent;
-(void)shutdownAllBundlesWithReason:(id)arg1 ;
-(void)setBackgroundJobService:(PLBackgroundJobService *)arg1 ;
-(id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(BOOL)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id*)arg3 ;
-(id)libraryBundlePaths;
-(void)shutdownBundle:(id)arg1 reason:(id)arg2 ;
-(id)bundleForLibraryURL:(id)arg1 ;
-(id)libraryServicesStatusDescription;
-(id)libraryBundles;
-(id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2 ;
-(id)newPhotoLibraryBundleWithLibraryURL:(id)arg1 ;
@end

