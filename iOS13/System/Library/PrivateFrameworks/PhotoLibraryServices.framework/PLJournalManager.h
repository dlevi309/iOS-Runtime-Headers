/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalManagerCore.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class PLPhotoLibrary, NSObject, NSPersistentHistoryToken;

@interface PLJournalManager : PLJournalManagerCore {

	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _transientPhotoLibrary;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _startupWaitGroup;
	unsigned short _state;
	NSPersistentHistoryToken* _currentHistoryToken;

}
+(BOOL)assetJournalExists:(id)arg1 ;
+(BOOL)existingJournalsCompatibleForRebuild:(id)arg1 error:(id*)arg2 ;
+(id)payloadClasses;
+(id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id*)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4 ;
+(Class)payloadClassForAdditionalEntityName:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)_start;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2 ;
-(void)recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3 ;
-(void)notifyDidImportFileSystemAssets;
-(void)notifyWillImportFileSystemAssets;
-(unsigned)_registerToChangeHubNotification;
-(void)_unregisterToChangeHubNotification;
-(id)_transientPhotoLibrary;
-(void)_startAfterRebuild;
-(void)_handleChangeHubNotification;
-(BOOL)forceFullSnapshot:(id*)arg1 ;
-(void)_loadHistoryToken;
-(BOOL)_needSnapshot;
-(BOOL)_needFullSnapshot;
-(BOOL)_needPartialSnapshot:(id)arg1 ;
-(BOOL)_createSnapshotsForceFull:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 ;
-(BOOL)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2 ;
-(BOOL)_replayFromCurrentHistoryToken;
-(BOOL)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1 ;
-(void)recreateAllObjectsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 ;
-(void)_recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3 ;
-(void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2 ;
-(id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2 ;
-(id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2 ;
-(void)_removeLegacyPersistedMetadataIfNecessary;
@end

