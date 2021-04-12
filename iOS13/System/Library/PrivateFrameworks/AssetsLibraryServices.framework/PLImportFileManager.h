/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;

}
+(BOOL)isImportDirectoryFolderName:(id)arg1 ;
+(BOOL)isCameraDirectoryFolderName:(id)arg1 ;
-(id)init;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1 ;
-(id)_dcimDirectory;
-(id)_DCIMFolderNameWithNumber:(long long)arg1 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1 ;
-(id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2 ;
@end

