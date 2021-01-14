/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@interface PLiPhotoMigrationSupport : NSObject {

	Ai _inFlightMigrationCount;

}

@property (nonatomic,readonly) BOOL migrationWasInterrupted; 
+(id)sharedInstance;
-(void)migrateEachPreMigratediPhotoLibrary:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_createParentDirectoryIfNecessaryWithPath:(id)arg1 ;
-(id)_displayableUuidWithUuid:(id)arg1 ;
-(id)_inFlightMigrationMarkerFilePath;
-(void)fireMigrationOfiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(id)_iPhotoToPhotosUuidMapTable;
-(id)_preMigratediPhotoDir;
-(id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)arg1 ;
-(BOOL)migrationWasInterrupted;
-(void)checkForUnmigratediPhotoContentWithCompletion:(/*^block*/id)arg1 ;
-(id)_firstFilePathWithAnyExtensionAtPath:(id)arg1 extension:(id*)arg2 ;
-(BOOL)_isMigrating;
-(BOOL)_validateUuid:(id)arg1 ;
-(void)_incrementInFlightMigrationCount;
-(void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)arg1 subDirectoryName:(id)arg2 description:(id)arg3 ;
-(void)_decrementInFlightMigrationCount;
-(void)_migrateiPhotoLibraryWithProgressHandler:(/*^block*/id)arg1 ;
-(void)_migrateiPhotoLibraryWorkerWithProgressHandler:(/*^block*/id)arg1 iPhotoLibraryDir:(id)arg2 ;
-(id)_migratediPhotoDir;
@end

