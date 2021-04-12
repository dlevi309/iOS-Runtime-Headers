/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_predicateToFetchDeferredAssets;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)managedObjectIDsNeedingProcessing;
-(BOOL)hasPendingJobs;
-(void)stopWorkingOnManagedObjectID:(id)arg1 ;
@end

