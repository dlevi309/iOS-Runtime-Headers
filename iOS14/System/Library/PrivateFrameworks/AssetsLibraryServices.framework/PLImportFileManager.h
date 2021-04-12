/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;

}
+(BOOL)isImportDirectoryFolderName:(id)arg1 ;
+(BOOL)isCameraDirectoryFolderName:(id)arg1 ;
-(id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(long long*)arg1 ;
-(id)init;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)_dcimDirectory;
-(id)_DCIMFolderNameWithNumber:(long long)arg1 ;
@end

