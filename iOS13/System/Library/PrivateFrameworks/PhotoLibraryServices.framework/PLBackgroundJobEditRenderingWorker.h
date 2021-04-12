/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker {

	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;

}
+(id)workerWithLibrary:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateToFetchDeferredAdjustmentNeededAssets;
@end

