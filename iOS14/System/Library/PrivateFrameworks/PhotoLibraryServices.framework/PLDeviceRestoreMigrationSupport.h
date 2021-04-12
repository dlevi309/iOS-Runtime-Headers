/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLLibraryServicesManager;

@interface PLDeviceRestoreMigrationSupport : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;
	unsigned _userDataDisposition;
	os_unfair_lock_s _userDataDispositionLock;
	BOOL _didWaitForPrerequisites;
	os_unfair_lock_s _prerequisitesCompleteBlockLock;
	BOOL _dataMigratorPluginHasRequestedLibraryMigration;
	/*^block*/id _prerequisitesCompleteBlock;

}

@property (nonatomic,copy) id prerequisitesCompleteBlock;                                                                                            //@synthesize prerequisitesCompleteBlock=_prerequisitesCompleteBlock - In the implementation block
@property (assign,getter=hasDataMigratorPluginRequestedLibraryMigration,nonatomic) BOOL dataMigratorPluginHasRequestedLibraryMigration;              //@synthesize dataMigratorPluginHasRequestedLibraryMigration=_dataMigratorPluginHasRequestedLibraryMigration - In the implementation block
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(BOOL)isRestoreFromBackupSourceDeviceToDevice;
-(BOOL)isRestoreFromBackupSourceiTunes;
-(BOOL)isRestoreFromBackupSourceDifferentDevice;
-(id)_dataMigrationInfo;
-(BOOL)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1 ;
-(void)_prepareDatabaseForOTAAssetsPhase;
-(void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)_linkAsideAlbumMetadata;
-(id)prerequisitesCompleteBlock;
-(void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1 ;
-(void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2 ;
-(BOOL)_userDataDispositionMatchesDisposition:(unsigned)arg1 ;
-(void)setPrerequisitesCompleteBlock:(id)arg1 ;
-(void)waitForDataMigratorPrerequisitesForTrackingRestoreFromCloud;
-(BOOL)hasDataMigratorPluginRequestedLibraryMigration;
-(id)restoreTypeDescription;
-(BOOL)isRestoreFromBackup;
-(BOOL)isRestoreFromBackupSourceCloud;
-(void)setDataMigratorPluginHasRequestedLibraryMigration:(BOOL)arg1 ;
-(BOOL)isOTARestoreInProgress;
-(void)deletePhotoStreamDataForStreamID:(id)arg1 ;
-(BOOL)hasCompletedDataMigratorPrerequisitesForTrackingRestoreFromCloud;
@end

