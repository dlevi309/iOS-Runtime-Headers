/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@interface IMDMessageAutomaticHistoryDeletion : NSObject
+(id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(BOOL)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(void)deleteDirectoryAtPath:(id)arg1 ;
+(id)_getFilePathNotDSStore:(id)arg1 ;
+(BOOL)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(id)_getiChatFileMetadataForPath:(id)arg1 ;
+(BOOL)isOlderThanDays:(long long)arg1 fromDate:(id)arg2 ;
+(id)_getPathAttributesForPath:(id)arg1 ;
+(void)cleanUpOrphanAttachments;
+(void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1 ;
+(void)cleanDatabase;
+(void)deleteSpolightArchivedFilesAfterDays:(long long)arg1 ;
@end

