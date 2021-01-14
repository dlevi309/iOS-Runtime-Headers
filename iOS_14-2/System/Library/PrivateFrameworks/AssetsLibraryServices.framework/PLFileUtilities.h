/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@interface PLFileUtilities : NSObject
+(id)fileManager;
+(BOOL)setPhotoLibraryBasePath:(id)arg1 ;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(id)defaultSystemPhotoDataMiscDirectory;
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(long long)directoryEntryCountAtURL:(id)arg1 error:(id*)arg2 ;
+(id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2 ;
+(id)defaultSystemLibraryURL;
+(id)proxyLockFilePathForDatabasePath:(id)arg1 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)URLIsInTrash:(id)arg1 ;
+(BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)isFileExistsError:(id)arg1 ;
+(BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)arg1 ;
+(id)defaultSystemPhotoDCIMDirectory;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id*)arg4 ;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(id)systemLibraryURL;
+(BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id*)arg6 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)fileURL:(id)arg1 isEqualToFileURL:(id)arg2 ;
+(id)redactedDescriptionForFileURL:(id)arg1 ;
+(id)_mobileOwnerAttributes;
+(id)defaultSystemPhotoDataDirectory;
+(id)defaultSystemPhotoDataCPLDirectory;
+(long long)fileLengthForFilePath:(id)arg1 ;
+(id)redactedDescriptionForPath:(id)arg1 ;
+(id)_defaultSystemLibraryPath;
+(BOOL)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id*)arg3 progress:(/*^block*/id)arg4 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)filePath:(id)arg1 isEqualToFilePath:(id)arg2 ;
@end

