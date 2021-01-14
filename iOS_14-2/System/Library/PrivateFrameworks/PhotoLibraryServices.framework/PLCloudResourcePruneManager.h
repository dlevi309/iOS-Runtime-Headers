/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSObject;

@interface PLCloudResourcePruneManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	BOOL _stopped;
	NSObject*<OS_dispatch_queue> _workQueue;

}
-(id)init;
-(void)stop;
-(long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(long long)diskSpaceToPrune;
-(long long)_totalPurgeableAmountForUrgency:(long long)arg1 ;
-(long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2 ;
-(CFDictionaryRef)_handleCacheDeletePurge:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(CFDictionaryRef)_handleCacheDeletePurgeable:(int)arg1 info:(CFDictionaryRef)arg2 ;
-(void)_handleCacheDeleteRegistration;
-(id)pruneStatusForDebug:(BOOL)arg1 ;
-(void)startAutomaticPruneWithBudget:(long long)arg1 urgency:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_fetchResourcesForPruningWithBudget:(long long)arg1 urgency:(long long)arg2 batchHandler:(/*^block*/id)arg3 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)_localResourcesSize;
-(void)_updateLocalStateForPrunedResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)_predicateForPruneWithUrgency:(long long)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)dealloc;
@end

