/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <Message/MFMailMessageStore.h>

@class MFMailMessageLibrary, NSDate, MFMessageCriterion;

@interface MFLibraryStore : MFMailMessageStore {

	MFMailMessageLibrary* _library;
	NSDate* _earliestReceivedDate;
	MFMessageCriterion* _criterion;
	unsigned long long _fetchWindow;

}

@property (nonatomic,retain) NSDate * earliestReceivedDate;              //@synthesize earliestReceivedDate=_earliestReceivedDate - In the implementation block
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(unsigned)defaultLoadOptions;
+(id)storeWithMailbox:(id)arg1 ;
+(BOOL)createEmptyStoreForPath:(id)arg1 ;
+(BOOL)storeAtPathIsWritable:(id)arg1 ;
-(unsigned long long)unreadCount;
-(id)URLString;
-(id)library;
-(unsigned long long)totalCount;
-(id)initWithMailbox:(id)arg1 ;
-(id)mailbox;
-(BOOL)shouldCancel;
-(void)setLibrary:(id)arg1 ;
-(void)updateMetadata;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)criterion;
-(id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)_queueMessagesAdded:(id)arg1 ;
-(void)_queueMessageFlagsChanged:(id)arg1 ;
-(void)invalidateFetchWindow;
-(void)_queueMessagesWillBeCompacted:(id)arg1 ;
-(void)_queueMessagesWereCompacted:(id)arg1 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned long long*)arg3 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 ;
-(void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2 ;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(void)setEarliestReceivedDate:(NSDate *)arg1 ;
-(unsigned long long)_fetchWindowMultiple;
-(unsigned long long)_fetchWindowMinimum;
-(unsigned long long)allNonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned long long)fetchWindowCap;
-(BOOL)shouldGrowFetchWindow;
-(unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg1 ;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(id)filterMessagesByMembership:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(void)compactMessages:(id)arg1 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(BOOL*)arg4 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(BOOL)canCompact;
-(void)doCompact;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)purgeMessages:(id)arg1 ;
-(BOOL)hasMessageForAccount:(id)arg1 ;
-(void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(unsigned long long)growFetchWindow;
-(void)_addInvocationToQueue:(id)arg1 ;
-(void)handleMessageFlagsChanged:(id)arg1 ;
-(void)handleMessagesWillBeCompacted:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(void)openSynchronously;
-(unsigned long long)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(id)copyOfMessageInfos;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned)arg2 ;
-(id)mutableCopyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(id)serverSearchResults;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessage;
-(void)willFetchMessages;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)writeUpdatedMessageDataToDisk;
-(void)_setNeedsAutosave;
-(id)newObjectCache;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(NSDate *)earliestReceivedDate;
-(void)dealloc;
-(unsigned long long)fetchWindow;
@end

