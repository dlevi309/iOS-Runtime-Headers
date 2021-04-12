/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSMapTable, NSMutableArray, NSMutableSet, NSMutableDictionary, PLClientServerTransaction;

@interface PLDelayedSaveActions : NSObject {

	NSMapTable* _delayedMomentAssetDeletions;
	NSMutableArray* _delayedMomentAssetUpdates;
	NSMutableSet* _delayedHighlightAssetUpdates;
	NSMutableSet* _delayedHighlightMomentUpdates;
	NSMutableSet* _delayedCloudFeedDeletionEntries;
	NSMutableArray* _delayedCloudFeedAlbumUpdates;
	NSMutableArray* _delayedCloudFeedAssetInserts;
	NSMutableArray* _delayedCloudFeedAssetUpdates;
	NSMutableArray* _delayedCloudFeedCommentInserts;
	NSMutableArray* _delayedCloudFeedInvitationRecordUpdates;
	NSMutableArray* _delayedDupeAnalysisNormalInserts;
	NSMutableArray* _delayedDupeAnalysisCloudInserts;
	NSMutableSet* _delayedAssetsForFileSystemPersistency;
	NSMutableDictionary* _delayedSearchIndexUpdateUUIDs;
	NSMutableSet* _delayedAlbumCountsAndDateRangeUpdates;
	NSMutableDictionary* _delayedWorkerTypesToAnalyzeByAssetUUID;
	NSMutableSet* _delayedAssetsForDuetDelete;
	PLClientServerTransaction* _clientTransaction;

}

@property (nonatomic,readonly) PLClientServerTransaction * clientTransaction;              //@synthesize clientTransaction=_clientTransaction - In the implementation block
-(void)forceAlbumCountsAndDateRangeUpdate:(id)arg1 ;
-(void)recordAlbumForSearchIndexUpdate:(id)arg1 ;
-(void)recordAlbumCountsAndDateRangeUpdate:(id)arg1 ;
-(void)recordAssetForSearchIndexUpdate:(id)arg1 ;
-(void)recordAssetForDupeAnalysis:(id)arg1 ;
-(void)recordAssetForCloudFeedUpdate:(id)arg1 ;
-(void)recordAssetForMomentUpdate:(id)arg1 ;
-(void)recordAssetForDuetDelete:(id)arg1 ;
-(void)recordAssetForAlbumCountsAndDateRangeUpdate:(id)arg1 ;
-(id)initWithClientTransaction:(id)arg1 ;
-(id)popDelayedSaveActionsDetail;
-(void)recordDetectedFaceForSearchIndexUpdate:(id)arg1 ;
-(void)recordAssetForAnalysis:(id)arg1 workerFlags:(int)arg2 workerType:(short)arg3 ;
-(void)recordAlbumForCloudFeedUpdate:(id)arg1 ;
-(void)recordInvitationRecordForCloudFeedUpdate:(id)arg1 ;
-(void)recordCommentForCloudFeedUpdate:(id)arg1 ;
-(void)recordAdditionalAssetAttributesForSearchIndexUpdate:(id)arg1 ;
-(void)recordAdditionalAssetAttributesForMomentUpdate:(id)arg1 ;
-(void)recordAssetForFileSystemPersistencyUpdate:(id)arg1 ;
-(void)recordMemoryForSearchIndexUpdate:(id)arg1 ;
-(void)recordMomentForHighlightUpdate:(id)arg1 ;
-(void)persistDelayedActionsScope:(id)arg1 ;
-(void)_popCloudFeedChangesIntoDetail:(id)arg1 ;
-(void)_popMomentChangesIntoDetail:(id)arg1 ;
-(void)_popDupeAnalysisChangesIntoDetail:(id)arg1 ;
-(void)_popAssetsForFilesystemPersistencyChangesIntoDetail:(id)arg1 ;
-(void)_popSearchIndexChangesIntoDetail:(id)arg1 ;
-(void)_popAlbumCountChangesIntoDetail:(id)arg1 ;
-(void)_popAssetsForAnalysisChangesIntoDetail:(id)arg1 ;
-(void)_recordDelayedMomentAssetDeletionsDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)_recordDelayedMomentAssetUpdates:(id)arg1 ;
-(void)_recordDelayedHighlightAssetUpdates:(id)arg1 ;
-(void)_recordDelayedHighlightMomentUpdates:(id)arg1 ;
-(void)_popDelayedMomentInsertsAndUpdates:(id*)arg1 deletes:(id*)arg2 updatedAssetIDsForHighlights:(id*)arg3 updatedMomentIDsForHighlights:(id*)arg4 ;
-(void)_recordDelayedCloudFeedAlbumUpdate:(id)arg1 ;
-(void)_recordDelayedCloudFeedDeletionEntries:(id)arg1 ;
-(void)_recordDelayedCloudFeedAssetInsert:(id)arg1 ;
-(void)_recordDelayedCloudFeedAssetUpdate:(id)arg1 ;
-(void)_recordDelayedCloudFeedCommentInsert:(id)arg1 ;
-(void)_recordDelayedCloudFeedInvitationRecordUpdate:(id)arg1 ;
-(void)_popDelayedCloudFeedAlbumUpdates:(id*)arg1 assetInserts:(id*)arg2 assetUpdates:(id*)arg3 commentInserts:(id*)arg4 invitationRecordUpdates:(id*)arg5 deletionEntries:(id*)arg6 ;
-(void)_recordNormalAssetForDupeAnalysis:(id)arg1 ;
-(void)_recordStreamAssetForDupeAnalysis:(id)arg1 ;
-(void)_popDelayedDupeAnalysisNormalInserts:(id*)arg1 cloudInserts:(id*)arg2 ;
-(void)_popDelayedAssetsForFilesystemPersistencyUpdates:(id*)arg1 ;
-(void)_recordManagedObjectUUID:(id)arg1 forSearchIndexUpdateKey:(id)arg2 ;
-(void)_recordAssetUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordAlbumUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordMemoryUUIDForSearchIndexUpdate:(id)arg1 isInsert:(BOOL)arg2 ;
-(void)_recordPersonUUIDInsertForSearchIndexUpdate:(id)arg1 ;
-(void)_recordDetectedFaceUUIDInsertForSearchIndexUpdate:(id)arg1 ;
-(void)_recordAssetForSearchIndexUpdate:(id)arg1 ;
-(void)recordPersonForSearchIndexUpdate:(id)arg1 ;
-(void)recordAssetDescriptionForSearchIndexUpdate:(id)arg1 ;
-(void)_popDelayedSearchIndexUpdates:(id*)arg1 ;
-(void)_recordDelayedAlbumCountsAndDateRangeUpdate:(id)arg1 ;
-(void)_popDelayedAlbumCountsAndDateRangeUpdates:(id*)arg1 ;
-(void)_popDelayedAssetsForAnalysis:(id*)arg1 ;
-(void)_popDuetDeletedAssetsIntoDetail:(id)arg1 ;
-(PLClientServerTransaction *)clientTransaction;
@end

