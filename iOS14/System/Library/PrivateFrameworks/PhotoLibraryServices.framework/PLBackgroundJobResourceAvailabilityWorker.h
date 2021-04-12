/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker {

	NSProgress* _progressForCurrentAsset;
	PAImageConversionServiceClient* _imageConversionClient;
	PAVideoConversionServiceClient* _videoConversionClient;

}
+(id)workerWithLibrary:(id)arg1 ;
-(id)_predicateToFetchResourcesAwaitingProcessing;
-(id)imageConversionClient;
-(id)videoConversionClient;
-(void)performWorkOnManagedObjectID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)managedObjectIDsNeedingProcessing;
-(BOOL)hasPendingJobs;
@end

