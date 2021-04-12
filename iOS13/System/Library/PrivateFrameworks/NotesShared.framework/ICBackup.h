/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICBackup : NSObject
+(id)unarchiverAllowedClasses;
+(id)backupsParentDirectoryURL;
+(BOOL)createDirectoryAtURL:(id)arg1 ;
+(id)backupNameForDate:(id)arg1 ;
+(id)allObjectsToSaveInContext:(id)arg1 ;
+(id)dictionaryFromCloudObject:(id)arg1 savingAssetsToDirectory:(id)arg2 obfuscator:(id)arg3 ;
+(void)sanitizeAndCopyAssetsForSavingFromRecord:(id)arg1 toAssetsDirectoryURL:(id)arg2 ;
+(void)loadBackupWithObjectDictionaries:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(id)recordFromObjectDictionary:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(id)sanitizeAssetsForLoadingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 ;
+(void)sanitizeAssetsForSavingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 prefix:(id)arg3 ;
+(BOOL)hardLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(id)saveBackupToParentDirectoryURL:(id)arg1 asName:(id)arg2 atomically:(BOOL)arg3 obfuscate:(BOOL)arg4 ;
+(id)createArchive:(id*)arg1 toParentDirectory:(id)arg2 asName:(id)arg3 obfuscate:(BOOL)arg4 ;
+(void)purgeOldBackups;
+(BOOL)loadBackupFromURL:(id)arg1 ;
+(BOOL)isValidBackupURL:(id)arg1 ;
+(id)nameFromBackupAtURL:(id)arg1 ;
+(id)createArchive:(id*)arg1 obfuscate:(BOOL)arg2 ;
+(BOOL)loadArchive:(id)arg1 error:(id*)arg2 ;
@end

