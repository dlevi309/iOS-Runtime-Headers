/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@interface PLFileUtilities : NSObject
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)fileManager;
+(id)proxyLockFilePathForDatabasePath:(id)arg1 ;
+(id)systemLibraryURL;
+(BOOL)fileURL:(id)arg1 isEqualToFileURL:(id)arg2 ;
+(id)relocateLibraryIndicatorFilePath;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6 ;
+(id)redactedDescriptionForFileURL:(id)arg1 ;
+(long long)fileLengthForFilePath:(id)arg1 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(BOOL)URLIsInTrash:(id)arg1 ;
+(BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(id)defaultSystemPhotoDataDirectory;
+(id)defaultSystemPhotoDataCPLDirectory;
+(id)defaultSystemPhotoDataMiscDirectory;
+(id)defaultSystemPhotoDCIMDirectory;
+(id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2 ;
+(id)defaultSystemLibraryURL;
+(id)_relocateLibraryPath;
+(BOOL)setPhotoLibraryBasePath:(id)arg1 ;
+(BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(/*^block*/id)arg4 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(BOOL)_isFileExistsError:(id)arg1 ;
+(id)_mobileOwnerAttributes;
+(BOOL)filePath:(id)arg1 isEqualToFilePath:(id)arg2 ;
+(id)redactedDescriptionForPath:(id)arg1 ;
@end

