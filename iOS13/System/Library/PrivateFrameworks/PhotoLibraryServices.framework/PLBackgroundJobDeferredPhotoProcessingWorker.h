/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PLDeferredPhotoFinalizer;

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker {

	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;

}
+(id)workerWithLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateToFetchDeferredAssets;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
-(id)deferredPhotoFinalizer;
@end

