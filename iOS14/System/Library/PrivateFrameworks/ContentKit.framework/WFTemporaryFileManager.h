/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@interface WFTemporaryFileManager : NSObject
+(id)appGroupIdentifier;
+(id)temporaryDirectoryURL;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg1 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg1 ;
+(id)createTemporaryFileWithFilename:(id)arg1 ;
+(void)clearTemporaryFiles;
+(id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)sharedAppGroupDirectoryURL;
+(id)sharedTemporaryDirectoryURL;
+(void)createSharedDirectoryIfNecessary;
+(void)configureTemporaryDirectoryProtectionIfNecessary;
+(void)configureBackupFlagIfNecessary;
+(void)configureFileProtectionAtPath:(id)arg1 ;
+(void)configureBackupFlagAtURL:(id)arg1 ;
+(id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(BOOL)arg3 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(BOOL)arg3 ;
+(id)proposedTemporaryFileURLForFilename:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedSharedTemporaryFileURLForFilename:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createTemporaryDirectoryWithFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createSharedTemporaryDirectoryWithFilename:(id)arg1 ;
+(id)createTemporaryFileWithFilename:(id)arg1 inDirectory:(id)arg2 ;
+(id)createSharedTemporaryFileWithFilename:(id)arg1 ;
@end

