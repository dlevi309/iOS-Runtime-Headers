/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLLibraryServicesManager, NSObject;

@interface PLDelayedSaveActionsProcessor : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	NSObject*<OS_dispatch_queue> _coreDuetCallback;

}
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3 ;
-(void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1 ;
-(void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7 ;
-(void)_processDelayedMomentChangesWithTransaction:(id)arg1 ;
-(void)_processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2 ;
-(void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedAssetsForFileSystemPersistency:(id)arg1 library:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedAssetsForAnalysis:(id)arg1 photoLibrary:(id)arg2 transaction:(id)arg3 ;
-(void)_processDelayedAssetsForDuetDelete:(id)arg1 transaction:(id)arg2 ;
@end

