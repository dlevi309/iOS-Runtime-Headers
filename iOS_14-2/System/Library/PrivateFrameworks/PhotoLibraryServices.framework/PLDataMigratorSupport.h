/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject {

	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
-(PLPhotoLibraryPathManager *)pathManager;
-(void)removeInternalMemoriesRelatedSnapshotDirectory;
-(void)removeModelInterestDatabase;
-(void)recordDataMigrationInfo:(id)arg1 ;
-(void)removeAsidePhotosDatabase;
-(id)initWithPathManager:(id)arg1 ;
-(void)removeLegacyMetadataFiles;
@end

