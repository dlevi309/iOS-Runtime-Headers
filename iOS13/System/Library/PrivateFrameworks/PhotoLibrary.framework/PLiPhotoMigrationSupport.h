/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@interface PLiPhotoMigrationSupport : NSObject {

	Ai _inFlightMigrationCount;

}

@property (nonatomic,readonly) BOOL migrationWasInterrupted; 
+(id)sharedInstance;
-(void)checkForUnmigratediPhotoContentWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateEachPreMigratediPhotoLibrary:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)migrationWasInterrupted;
-(void)_incrementInFlightMigrationCount;
-(void)_decrementInFlightMigrationCount;
-(BOOL)_isMigrating;
-(id)_inFlightMigrationMarkerFilePath;
-(BOOL)_validateUuid:(id)arg1 ;
-(id)_displayableUuidWithUuid:(id)arg1 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2 ;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1 ;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3 ;
-(id)_preMigratediPhotoDir;
-(id)_migratediPhotoDir;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1 ;
-(id)_iPhotoToPhotosUuidMapTable;
-(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(/*^block*/id)arg1 iPhotoLibraryDir:(id)arg2 ;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(void)_migrateiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
@end

