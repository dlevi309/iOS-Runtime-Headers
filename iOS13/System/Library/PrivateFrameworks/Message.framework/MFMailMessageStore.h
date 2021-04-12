/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <MIME/MFMessageStore.h>

@class MFMailboxUid, MailAccount, MFActivityMonitor;

@interface MFMailMessageStore : MFMessageStore {

	unsigned long long _state;
	struct {
		unsigned isReadOnly : 1;
		unsigned hasUnsavedChangesToMessageData : 1;
		unsigned haveOpenLockFile : 1;
		unsigned compacting : 1;
		unsigned cancelInvalidation : 1;
		unsigned forceInvalidation : 1;
		unsigned isWritingChangesToDisk : 1;
		unsigned isTryingToClose : 1;
		unsigned compactOnClose : 1;
		unsigned reserved : 23;
	}  _flags;
	MFMailboxUid* _mailboxUid;
	MailAccount* _account;
	unsigned long long _deletedMessagesSize;
	unsigned long long _deletedMessageCount;
	unsigned long long _unreadMessageCount;
	unsigned long long _generationNumber;
	unsigned long long _lastFetchCount;
	MFActivityMonitor* _openMonitor;

}
+(BOOL)createEmptyStoreForPath:(id)arg1 ;
+(BOOL)storeAtPathIsWritable:(id)arg1 ;
+(Class)classForMimePart;
+(BOOL)createEmptyStoreIfNeededForPath:(id)arg1 ;
+(Class)headersClass;
-(id)description;
-(void)close;
-(id)status;
-(id)displayName;
-(id)account;
-(unsigned long long)totalCount;
-(BOOL)isReadOnly;
-(void)setLibrary:(id)arg1 ;
-(id)mailboxUid;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)invalidateFetchWindow;
-(void)didOpen;
-(void)messagesWereAdded:(id)arg1 ;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(unsigned long long)allNonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned long long)fetchWindowCap;
-(unsigned long long)fetchWindow;
-(BOOL)shouldGrowFetchWindow;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)allMessageFlagsDidChange:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg1 ;
-(void)messagesWillBeCompacted:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(BOOL)canCompact;
-(BOOL)isOpened;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCount;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(BOOL)hasMessageForAccount:(id)arg1 ;
-(void)openSynchronously;
-(unsigned long long)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned)arg2 ;
-(id)mutableCopyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(unsigned long long)growFetchWindow;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(BOOL)allowsAppend;
-(void)doCompact;
-(void)writeUpdatedMessageDataToDisk;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(BOOL)supportsArchiving;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(BOOL)canFetchMessageIDs;
-(long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(unsigned long long)serverMessageCount;
-(BOOL)hasMoreFetchableMessages;
-(id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned)arg2 offset:(id)arg3 error:(id*)arg4 ;
-(BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_flushAllMessageData;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1 ;
-(BOOL)_shouldChangeComponentMessageFlags;
-(void)openAsynchronously;
-(void)cancelOpen;
-(id)storePathRelativeToAccount;
-(BOOL)isDrafts;
-(void)structureDidChange;
-(void)deletedCount:(unsigned long long*)arg1 andSize:(unsigned long long*)arg2 ;
-(unsigned long long)serverUnreadCount;
-(unsigned long long)serverNonDeletedCount;
-(id)copyOfMessagesInRange:(NSRange)arg1 ;
-(id)copyMessagesMatchingText:(id)arg1 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned)arg3 offset:(id)arg4 error:(id*)arg5 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg1 ;
-(long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(void)messagesWereDeleted:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2 ;
-(id)uniqueRemoteIDsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)hasCachedDataForMimePart:(id)arg1 ;
-(void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 ;
-(void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg1 ;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 ;
-(BOOL)setPreferredEncoding:(unsigned)arg1 forMessage:(id)arg2 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(BOOL)shouldDeleteInPlace;
-(BOOL)shouldArchive;
-(int)archiveDestination;
-(void)_rebuildTableOfContentsSynchronously;
-(id)messageIdRollCall:(id)arg1 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 ;
@end

