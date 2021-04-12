/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@interface IMDAttachmentStore : NSObject
+(id)sharedInstance;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 ;
-(BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2 chatGUID:(id)arg3 storeAtExternalLocation:(BOOL)arg4 ;
-(BOOL)deleteAttachmentWithGUID:(id)arg1 ;
-(id)attachmentWithGUID:(id)arg1 ;
-(void)markAllAttachmentsAsNotPurgeable;
-(BOOL)updateLegacyTransferGUIDIfNeeded:(id)arg1 ;
-(void)markAllAttachmentsAsNeedingCloudKitSync;
-(BOOL)updateAttachment:(id)arg1 ;
-(BOOL)isSafeToDeleteAttachmentAtPath:(id)arg1 ;
-(BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 ;
-(void)markAttachmentPurgeable:(id)arg1 ;
-(void)markAttachmentUnpurgeable:(id)arg1 ;
-(BOOL)_transferCanBeMarkedPurgable:(id)arg1 ;
-(BOOL)updateAttachment:(id)arg1 chatGUID:(id)arg2 storeAtExternalPath:(BOOL)arg3 ;
-(id)fileTransferWithAttachmentRecordRef:(IMDAttachmentRecordStructRef)arg1 ;
-(BOOL)_fileEligibleForCacheDelete:(id)arg1 ;
-(BOOL)_cloudkitSyncingEnabled;
-(void)markAttachment:(id)arg1 purgeable:(BOOL)arg2 ;
-(void)markFile:(id)arg1 asPurgeable:(BOOL)arg2 ;
-(id)getAuxVideoPath:(id)arg1 ;
-(BOOL)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2 ;
-(BOOL)_shouldEarlyReturnForWrongItemType:(id)arg1 ;
-(IMDAttachmentRecordStructRef)_loadAttachmentRecordForGUID:(id)arg1 ;
-(id)_newFileTransferFromIMDAttachmentRecordRef:(IMDAttachmentRecordStructRef)arg1 ;
-(id)_IMTransferGUIDForMessageGUID:(id)arg1 andIndex:(unsigned long long)arg2 ;
-(BOOL)_updateAttachmentGUID:(id)arg1 withGUID:(id)arg2 ;
-(id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3 ;
-(void)_reindexMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2 ;
-(BOOL)deleteAttachmentsWithGUIDs:(id)arg1 ;
-(BOOL)deleteAttachmentDataForTransfer:(id)arg1 ;
@end

