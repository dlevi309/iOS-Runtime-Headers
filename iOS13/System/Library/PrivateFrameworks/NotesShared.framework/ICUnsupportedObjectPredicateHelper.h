/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICUnsupportedObjectPredicateHelper : NSObject
+(id)predicateForSupportedNotes;
+(id)predicateForSupportedFolders;
+(id)predicateForSupportedAttachments;
+(id)unsupportedFolderIdentifiersWithContext:(id)arg1 ;
+(id)unsupportedAttachmentIdentifiersWithContext:(id)arg1 ;
+(void)recursivelyAddFolder:(id)arg1 toMutableSet:(id)arg2 ;
+(void)recursivelyAddAttachment:(id)arg1 toMutableSet:(id)arg2 ;
+(id)unitTest_unsupportedAttachmentIdentifiersWithContext:(id)arg1 ;
+(id)unitTest_unsupportedFolderIdentifiersWithContext:(id)arg1 ;
@end

