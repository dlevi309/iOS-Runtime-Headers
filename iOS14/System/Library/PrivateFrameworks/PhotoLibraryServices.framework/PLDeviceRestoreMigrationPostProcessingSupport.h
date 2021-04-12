/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {

	BOOL _tokenIsKnownToBeMissing;
	PLModelMigrator* _modelMigrator;
	PLPhotoLibraryPathManager* _pathManager;
	os_unfair_lock_s _tokenLock;

}
+(BOOL)_writeTokenToPath:(id)arg1 withInfo:(id)arg2 allowOverwrite:(BOOL)arg3 error:(id*)arg4 ;
+(id)_readTokenAtPath:(id)arg1 allowNotExists:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)arg1 error:(id*)arg2 ;
-(BOOL)isModelMigrationRestorePostProcessingComplete;
-(BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
-(BOOL)writeBackgroundRestorePostProcessingInProgressToken;
-(BOOL)writeModelMigrationRestorePostProcessingCompleteToken;
-(BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
-(BOOL)needsToPrepareForBackgroundRestore;
-(id)initWithModelMigrator:(id)arg1 ;
-(BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
@end

