/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {

	NSProgress* _progressForCurrentAsset;
	PAImageConversionServiceClient* _imageConversionClient;
	PAVideoConversionServiceClient* _videoConversionClient;

}
+(id)workerWithLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)imageConversionClient;
-(id)videoConversionClient;
-(BOOL)hasPendingJobs;
-(id)managedObjectIDsNeedingProcessing;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_predicateToFetchDeferredAssets;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
@end

