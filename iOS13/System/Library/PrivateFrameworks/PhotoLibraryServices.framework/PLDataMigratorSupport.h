/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject {

	os_unfair_lock_s _lock;
	PLPhotoLibraryPathManager* _pathManager;

}

@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager;              //@synthesize pathManager=_pathManager - In the implementation block
-(PLPhotoLibraryPathManager *)pathManager;
-(id)initWithPathManager:(id)arg1 ;
-(void)setCapturedOTARestoreStatus;
-(BOOL)hasCapturedOTARestoreStatus;
-(void)writeModelMigratorPostProcessingToken;
-(void)recordDataMigrationInfo:(id)arg1 ;
-(void)_removeModelInterestDatabase;
-(void)_removeInternalMemoriesRelatedSnapshotDirectory;
-(void)_removeAsidePhotosDatabase;
-(void)_removeLegacyMetadataFiles;
@end

