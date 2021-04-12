/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@interface DEUtils : NSObject
+(void)removeFile:(id)arg1 ;
+(id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3 ;
+(id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(BOOL)arg3 ;
+(id)findAllfiles:(id)arg1 ;
+(id)enumeratorForAllItems:(id)arg1 ;
+(void)excludeFromBackup:(id)arg1 ;
+(id)lsDir:(id)arg1 ;
+(unsigned long long)getDirectorySize:(id)arg1 ;
+(id)createUserOwnedDirectoryAtUrl:(id)arg1 ;
+(BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 ;
+(id)copyAndReturn:(id)arg1 toDir:(id)arg2 ;
+(id)userLibraryDirectoryForApp:(id)arg1 ;
+(BOOL)isValidDirectory:(id)arg1 ;
+(id)tarGzForDirectoryUrl:(id)arg1 ;
+(id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(BOOL)arg3 ;
+(id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(BOOL)arg2 ;
+(BOOL)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(BOOL)arg3 ;
+(id)findAllItems:(id)arg1 includeDirs:(BOOL)arg2 ;
+(id)lsDir:(id)arg1 sorted:(BOOL)arg2 ;
+(id)userFileAttributes;
+(unsigned long long)getFileSystemItemSize:(id)arg1 ;
+(id)dirForTarGz:(id)arg1 ;
+(BOOL)copyFile:(id)arg1 toDir:(id)arg2 ;
+(id)copyAndReturn:(id)arg1 toDir:(id)arg2 withNewFileName:(id)arg3 ;
+(id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3 ;
+(id)uniqueDateString;
+(id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3 ;
+(id)processErrorResponse:(id)arg1 ;
@end

