/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PLDeferredPhotoFinalizer;

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker {

	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;

}
+(id)workerWithLibrary:(id)arg1 ;
-(id)deferredPhotoFinalizer;
-(BOOL)isInterruptible;
-(id)_predicateToFetchDeferredAssets;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)managedObjectIDsNeedingProcessing;
-(BOOL)hasPendingJobs;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
@end

