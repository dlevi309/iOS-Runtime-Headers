/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLLibraryServicesManager;

@interface PLOTARestoreMigrationSupport : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}
-(void)deletePhotoStreamDataForStreamID:(id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)isOTARestoreInProgress;
-(BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1 ;
-(id)_assetTypesExcludedFromOTARestore;
-(void)_prepareDatabaseForOTAAssetsPhase;
-(void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1 ;
-(void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2 ;
-(void)_linkAsideAlbumMetadata;
-(id)_dataMigrationInfo;
@end

