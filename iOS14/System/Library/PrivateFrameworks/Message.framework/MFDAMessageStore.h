/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <Message/MFLibraryStore.h>

@class DAFolder;

@interface MFDAMessageStore : MFLibraryStore {

	DAFolder* _DAFolder;
	BOOL _backedByVirtualAllSearchMailbox;

}

@property (assign,nonatomic) BOOL backedByVirtualAllSearchMailbox;              //@synthesize backedByVirtualAllSearchMailbox=_backedByVirtualAllSearchMailbox - In the implementation block
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(BOOL)hasMoreFetchableMessages;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned)arg3 offset:(id)arg4 error:(id*)arg5 ;
-(id)messageForRemoteID:(id)arg1 ;
-(id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(BOOL)backedByVirtualAllSearchMailbox;
-(id)folderIDForFetching;
-(void)_remoteIDsMatchingSearchText:(id)arg1 predicate:(id)arg2 limit:(unsigned)arg3 offset:(id)arg4 filterByDate:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(id)_fetchBodyDataForSearchResult:(id)arg1 folderID:(id)arg2 format:(int)arg3 streamConsumer:(id)arg4 ;
-(id)_fetchBodyDataForNormalMessage:(id)arg1 format:(int)arg2 part:(id)arg3 streamConsumer:(id)arg4 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg1 ;
-(id)_downloadHeadersForMessages:(id)arg1 ;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(void)setBackedByVirtualAllSearchMailbox:(BOOL)arg1 ;
-(BOOL)replayFlagChange:(id)arg1 forRemoteIDs:(id)arg2 error:(id*)arg3 completed:(BOOL*)arg4 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)shouldGrowFetchWindow;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(unsigned long long)growFetchWindow;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(long long)arg1 limit:(unsigned)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(BOOL)allowsAppend;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(unsigned long long)fetchWindow;
@end

