/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class NSString, MFAttachmentLibraryDataProvider;

@interface MFMessageLibrary : NSObject {

	NSString* _path;
	MFAttachmentLibraryDataProvider* _attachmentDataProvider;

}
-(void)commit;
-(BOOL)isBusy;
-(long long)libraryIDForAccount:(id)arg1 ;
-(long long)createLibraryIDForAccount:(id)arg1 ;
-(unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2 ;
-(long long)statusCountDeltaForMailbox:(id)arg1 ;
-(unsigned long long)mostRecentStatusCountForMailbox:(id)arg1 ;
-(void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(long long)mailboxIDForURLString:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)closeDatabaseConnections;
-(id)storedIntegerPropertyWithName:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2 ;
-(void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3 ;
-(void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)remoteStoreForMessage:(id)arg1 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 ;
-(void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL*)arg2 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 newMessagesByOldMessage:(id)arg3 remoteIDs:(id)arg4 setFlags:(unsigned long long)arg5 addPOPUIDs:(BOOL)arg6 dataSectionsByMessage:(id)arg7 generationWindow:(id)arg8 ;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned)arg3 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(long long)arg1 limit:(unsigned)arg2 success:(BOOL*)arg3 ;
-(unsigned)attachmentCountForMailboxes:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(unsigned long long)unseenCountForMailbox:(id)arg1 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(void)setLastSyncAndMostRecentStatusCount:(long long)arg1 forMailbox:(id)arg2 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(BOOL)canProvideMinimumRemoteID;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(long long)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(id)messageWithLibraryID:(long long)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 temporarilyUnavailable:(BOOL*)arg4 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(id)allUIDsInMailbox:(id)arg1 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 success:(BOOL*)arg4 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 success:(BOOL*)arg3 ;
-(void)deletePOPUID:(id)arg1 inMailbox:(id)arg2 ;
-(id)UIDsToDeleteInMailbox:(id)arg1 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg1 ;
-(BOOL)shouldCancel;
-(id)dataProvider;
-(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 createNewCacheFiles:(BOOL)arg5 ;
-(BOOL)libraryExists;
-(void)lockDBForWriting;
-(void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(BOOL)arg7 ;
-(void)deleteAccount:(id)arg1 ;
-(id)sequenceIdentifierForMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2 ;
-(id)urlForMailboxID:(long long)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(void)setMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(BOOL)areMessageContentsLocallyAvailable:(id)arg1 fullContentsAvailble:(BOOL*)arg2 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(void)setSummary:(id)arg1 forMessage:(id)arg2 ;
-(id)dataPathForMessage:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)accountForMessage:(id)arg1 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 ;
-(id)messageWithLibraryID:(long long)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)fileAttributesForMessage:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(unsigned)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(long long)arg2 limit:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inRemoteMailbox:(id)arg3 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg1 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(void)compactMessages:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 ;
-(void)compactMailbox:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(void)invalidateAccount:(id)arg1 ;
-(void)deleteMailboxes:(id)arg1 account:(id)arg2 ;
-(BOOL)renameMailboxes:(id)arg1 to:(id)arg2 ;
@end

