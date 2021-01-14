/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient, NSProgress;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {

	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	NSProgress* _progressForCurrentAsset;

}
+(id)workerWithLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)_predicateToFetchDeferredAdjustmentNeededAssets;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)managedObjectIDsNeedingProcessing;
-(BOOL)hasPendingJobs;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
-(void)dealloc;
@end

