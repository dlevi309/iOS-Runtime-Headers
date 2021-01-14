/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)databaseNoLongerFull;
+(void)databaseFull;
+(void)_displayDatabaseFullAlert;
+(BOOL)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 updateLastMessage:(BOOL)arg4 calculateUnreadCount:(BOOL)arg5 ;
+(id)_missingMessageReadReceiptCache;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 threadIdentifier:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)performInitialHousekeeping;
-(void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2 ;
-(id)_chatRegistrySharedInstance;
-(id)messagesWithReplyToGUID:(id)arg1 ;
-(id)init;
-(void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3 ;
-(BOOL)popReadReceiptForMissingGUID:(id)arg1 ;
-(id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(id)_chatsForMessageGUID:(id)arg1 enableVerboseLogging:(BOOL)arg2 ;
-(id)storeItem:(id)arg1 forceReplace:(BOOL)arg2 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)replaceMessageAcknowledgmentsWithNewMessageAcknowledgment:(id)arg1 associatedMessageGUID:(id)arg2 sender:(id)arg3 ;
-(id)messagesWithGUIDs:(id)arg1 ;
-(NSString *)modificationStamp;
-(id)chatsForMessageGUID:(id)arg1 ;
-(id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2 ;
-(BOOL)_isValidPhoneNumber:(id)arg1 forCountryCode:(id)arg2 ;
-(id)chatForMessageIdentifier:(long long)arg1 ;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 ;
-(id)messageWithGUID:(id)arg1 registerAttachments:(BOOL)arg2 ;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(BOOL)arg6 calculateUnreadCount:(BOOL)arg7 ;
-(id)messageWithGUID:(id)arg1 ;
-(void)updateFileTransfer:(id)arg1 ;
-(void)cleanseAttachments;
-(id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(void)_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)chatForMessage:(id)arg1 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 ;
-(BOOL)_isUsingStingRay;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(BOOL)arg6 calculateUnreadCount:(BOOL)arg7 reindexMessage:(BOOL)arg8 ;
-(void)clearMessagesTombStoneTable;
-(id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 threadIdentifier:(id)arg4 limit:(unsigned long long)arg5 onlyMessages:(BOOL)arg6 ;
-(id)messageActionItemsForOriginalMessageGUID:(id)arg1 ;
-(void)_suppressDBUpdateTimerFired;
-(long long)lastFailedMessageDate;
-(id)_messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 attemptCount:(unsigned long long)arg2 ;
-(id)chatForMessageGUID:(id)arg1 enableVerboseLogging:(BOOL)arg2 ;
-(id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(void)markMessageAsCleanWithROWID:(long long)arg1 ;
-(id)markMessagesAsReadWithChatGUIDs:(id)arg1 upToGUID:(id)arg2 readDate:(id)arg3 fromMe:(BOOL)arg4 ;
-(void)postCountChanges;
-(IMDHandleRecordStructRef)_copyHandle:(id)arg1 onService:(id)arg2 ;
-(id)_fileTransferCenter;
-(BOOL)_shouldUseBadgeUtilities;
-(id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(void)rebuildUnreadMessageCount;
-(id)_itemsWithGUIDs:(id)arg1 ;
-(id)copyMessagesThatNeedToBeDeletedInCloudKitWithLimit:(unsigned long long)arg1 ;
-(id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(BOOL)isSuppressDatabaseUpdates;
-(id)chatsForMessage:(id)arg1 ;
-(id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(void)updateStamp;
-(void)setSuppressDatabaseUpdates:(BOOL)arg1 ;
-(void)setModificationStamp:(NSString *)arg1 ;
-(id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2 ;
-(id)messagesWithAssociatedGUID:(id)arg1 ;
-(id)deleteMessageGUIDs:(id)arg1 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 threadIdentifier:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)databaseChatSpamUpdated:(id)arg1 ;
-(void)markAllMessagesAsNeedingCloudKitSync;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 threadIdentifier:(id)arg6 hasMessagesBefore:(BOOL*)arg7 hasMessagesAfter:(BOOL*)arg8 ;
-(void)retractPostedNotificationsForMessageGUIDs:(id)arg1 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(long long)lastSyncedMessageRowID;
-(id)messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 ;
-(id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(long long)unreadMessagesCount;
-(void)rebuildLastFailedMessageDate;
-(id)_cleanUnformattedPhoneNumber:(id)arg1 countryCode:(id)arg2 ;
-(void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)chatForMessageGUID:(id)arg1 ;
-(BOOL)canStoreMessage:(id)arg1 onService:(id)arg2 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)itemWithGUID:(id)arg1 ;
-(void)loadConsumedSessionPayloadsForItems:(id)arg1 ;
-(id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5 ;
-(void)markMessageAsIgnoreButNeedingSyncWithROWID:(long long)arg1 ;
-(void)markMessageGUIDUnread:(id)arg1 ;
-(void)__postDBUpdate;
-(id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(BOOL)_hasMessagesWithGUIDs:(id)arg1 ;
-(void)_updateModificationDate;
-(void)addMissingMessageReadReceipt:(id)arg1 ;
-(BOOL)_itemClassShouldUpdateTransferForItem:(id)arg1 ;
-(id)_chatsForMessageIdentifier:(long long)arg1 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(id)_messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 threadIdentifier:(id)arg6 hasMessagesBefore:(BOOL*)arg7 hasMessagesAfter:(BOOL*)arg8 ;
-(void)_postDBUpdate;
-(id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 threadIdentifier:(id)arg4 limit:(unsigned long long)arg5 onlyMessages:(BOOL)arg6 ;
-(id)markMessagesAsReadWithIdentifiers:(id)arg1 onServices:(id)arg2 chatStyle:(unsigned char)arg3 upToGUID:(id)arg4 readDate:(id)arg5 fromMe:(BOOL)arg6 ;
-(BOOL)canStoreItem:(id)arg1 onService:(id)arg2 ;
-(id)_itemsWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(BOOL)arg2 ;
-(id)notificationContext;
-(void)_storeAttachmentsForMessage:(id)arg1 ;
-(void)markMessageAsDeduplicated:(id)arg1 ;
-(void)dealloc;
-(id)messagesWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(BOOL)arg2 ;
-(id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(void)deleteMessagesFromTombStoneTableWithRecordIDs:(id)arg1 ;
@end

