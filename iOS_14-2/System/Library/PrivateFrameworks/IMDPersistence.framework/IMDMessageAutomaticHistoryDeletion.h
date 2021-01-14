/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@interface IMDMessageAutomaticHistoryDeletion : NSObject
+(id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id*)arg2 ;
+(void)deleteDirectoryAtPath:(id)arg1 ;
+(id)_getFilePathNotDSStore:(id)arg1 ;
+(BOOL)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(BOOL)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2 ;
+(id)_getiChatFileMetadataForPath:(id)arg1 ;
+(BOOL)isOlderThanDays:(long long)arg1 fromDate:(id)arg2 ;
+(id)_getPathAttributesForPath:(id)arg1 ;
+(void)cleanUpOrphanAttachments;
+(void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1 ;
+(void)cleanDatabase;
+(void)deleteSpolightArchivedFiles;
+(BOOL)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2 ;
@end

