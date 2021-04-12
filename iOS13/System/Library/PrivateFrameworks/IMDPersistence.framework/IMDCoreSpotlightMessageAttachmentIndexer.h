/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <IMDPersistence/IMDPersistence-Structs.h>
#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightIndexer.h>

@class NSString;

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4 ;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(BOOL)arg4 ;
+(id)copyAttachmentsForMessageID:(long long)arg1 ;
+(id)attachmentRecordsFromAttachments:(id)arg1 ;
+(id)copyPathFromAttachment:(IMDAttachmentRecordStructRef)arg1 ;
+(id)attachmentIndexTypeForPath:(id)arg1 filename:(id)arg2 attachmentRecord:(IMDAttachmentRecordStructRef)arg3 ;
+(id)copyGUIDFromAttachment:(IMDAttachmentRecordStructRef)arg1 ;
+(BOOL)_attachmentIsSticker:(IMDAttachmentRecordStructRef)arg1 ;
@end

