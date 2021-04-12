/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


#import <IMDaemonCore/IMDaemonCore-Structs.h>
@class NSString, NSNumber, NSTimer;

@interface IMDMessageStore : NSObject {

	NSString* _modificationStamp;
	NSNumber* _cachedUnreadMessageCount;
	NSNumber* _cachedLastFailedMessageDate;
	BOOL _suppressedUpdates;
	BOOL _pendingDBUpdatePost;
	NSTimer* _suppressedUpdatesTimer;

}

@property (retain) NSString * modificationStamp;              //@synthesize modificationStamp=_modificationStamp - In the implementation block
+(id)sharedInstance;
+(void)databaseFull;
+(void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 updateLastMessage:(BOOL)arg4 calculateUnreadCount:(BOOL)arg5 ;
+(void)_displayDatabaseFullAlert;
+(void)databaseNoLongerFull;
-(id)init;
-(void)dealloc;
-(id)messageWithGUID:(id)arg1 ;
-(void)databaseChatSpamUpdated:(id)arg1 ;
-(void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(long long)lastFailedMessageDate;
-(id)itemWithGUID:(id)arg1 ;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 ;
-(id)storeItem:(id)arg1 forceReplace:(BOOL)arg2 ;
-(id)messagesWithReplyToGUID:(id)arg1 ;
-(void)setModificationStamp:(NSString *)arg1 ;
-(void)performInitialHousekeeping;
-(id)_itemsWithGUIDs:(id)arg1 ;
-(void)updateStamp;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(BOOL)arg6 calculateUnreadCount:(BOOL)arg7 ;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(BOOL)arg6 calculateUnreadCount:(BOOL)arg7 reindexMessage:(BOOL)arg8 ;
-(void)_storeAttachmentsForMessage:(id)arg1 ;
-(id)_fileTransferCenter;
-(id)messagesWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(BOOL)arg2 ;
-(id)_itemsWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(BOOL)arg2 ;
-(void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2 ;
-(BOOL)_hasMessagesWithGUIDs:(id)arg1 ;
-(id)messageWithGUID:(id)arg1 registerAttachments:(BOOL)arg2 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(BOOL)arg5 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(BOOL)arg5 ;
-(id)_messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 ;
-(id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)chatForMessageGUID:(id)arg1 ;
-(id)chatForMessageGUID:(id)arg1 enableVerboseLogging:(BOOL)arg2 ;
-(id)_chatsForMessageGUID:(id)arg1 enableVerboseLogging:(BOOL)arg2 ;
-(id)chatsForMessageGUID:(id)arg1 ;
-(id)_chatsForMessageIdentifier:(long long)arg1 ;
-(BOOL)_isValidPhoneNumber:(id)arg1 forCountryCode:(id)arg2 ;
-(IMDHandleRecordStructRef)_copyHandle:(id)arg1 onService:(id)arg2 ;
-(id)_cleanUnformattedPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(id)deleteMessageGUIDs:(id)arg1 ;
-(void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(void)_suppressDBUpdateTimerFired;
-(void)__postDBUpdate;
-(NSString *)modificationStamp;
-(void)postCountChanges;
-(void)_updateModificationDate;
-(void)_postDBUpdate;
-(long long)unreadMessagesCount;
-(BOOL)_shouldUseBadgeUtilities;
-(BOOL)_isUsingStingRay;
-(BOOL)_itemClassShouldUpdateTransferForItem:(id)arg1 ;
-(id)_messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 attemptCount:(unsigned long long)arg2 ;
-(id)_chatRegistrySharedInstance;
-(void)updateFileTransfer:(id)arg1 ;
-(id)messagesWithAssociatedGUID:(id)arg1 ;
-(id)messagesWithGUIDs:(id)arg1 ;
-(BOOL)canStoreItem:(id)arg1 onService:(id)arg2 ;
-(BOOL)canStoreMessage:(id)arg1 onService:(id)arg2 ;
-(id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5 ;
-(void)markMessageAsDeduplicated:(id)arg1 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 ;
-(id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2 ;
-(id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2 ;
-(id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(id)messageActionItemsForOriginalMessageGUID:(id)arg1 ;
-(id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)chatForMessage:(id)arg1 ;
-(id)chatsForMessage:(id)arg1 ;
-(id)chatForMessageIdentifier:(long long)arg1 ;
-(void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 ;
-(id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(void)cleanseAttachments;
-(BOOL)isSuppressDatabaseUpdates;
-(void)setSuppressDatabaseUpdates:(BOOL)arg1 ;
-(void)retractPostedNotificationsForMessageGUIDs:(id)arg1 ;
-(void)rebuildLastFailedMessageDate;
-(void)rebuildUnreadMessageCount;
-(id)replaceMessageAcknowledgmentsWithNewMessageAcknowledgment:(id)arg1 associatedMessageGUID:(id)arg2 sender:(id)arg3 ;
-(void)loadConsumedSessionPayloadsForItems:(id)arg1 ;
-(id)messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 ;
-(void)markAllMessagesAsNeedingCloudKitSync;
-(id)copyMessagesThatNeedToBeDeletedInCloudKitWithLimit:(unsigned long long)arg1 ;
-(void)deleteMessagesFromTombStoneTableWithRecordIDs:(id)arg1 ;
-(void)clearMessagesTombStoneTable;
-(void)markMessageAsCleanWithROWID:(long long)arg1 ;
-(void)markMessageAsIgnoreButNeedingSyncWithROWID:(long long)arg1 ;
-(long long)lastSyncedMessageRowID;
@end

