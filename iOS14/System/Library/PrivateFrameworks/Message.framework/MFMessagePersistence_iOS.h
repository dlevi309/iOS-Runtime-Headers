/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <EmailDaemon/EDMessagePersistence.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>

@protocol MFMessageSummaryLoaderProvider, EFScheduler, OS_dispatch_queue;
@class NSMutableDictionary, EFLazyCache, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, MFMessageTransformer, NSObject, NSString;

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable, EDMessageChangeHookResponder> {

	os_unfair_lock_s _summaryLock;
	NSMutableDictionary* _summaryLoaders;
	EFLazyCache* _obsoleteGlobalMessageIDToDatabaseIDMap;
	id<MFMessageSummaryLoaderProvider> _summaryLoaderProvider;
	MFMailMessageLibrary* _library;
	MFMailMessageLibraryQueryTransformer* _queryTransformer;
	MFMessageTransformer* _libraryMessageTransformer;
	id<EFScheduler> _networkContentLoadScheduler;
	id<EFScheduler> _offlineContentLoadScheduler;
	NSObject*<OS_dispatch_queue> _requestSummaryQueue;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MFMailMessageLibraryQueryTransformer * queryTransformer;               //@synthesize queryTransformer=_queryTransformer - In the implementation block
@property (nonatomic,retain) MFMessageTransformer * libraryMessageTransformer;                      //@synthesize libraryMessageTransformer=_libraryMessageTransformer - In the implementation block
@property (nonatomic,retain) id<EFScheduler> networkContentLoadScheduler;                           //@synthesize networkContentLoadScheduler=_networkContentLoadScheduler - In the implementation block
@property (nonatomic,retain) id<EFScheduler> offlineContentLoadScheduler;                           //@synthesize offlineContentLoadScheduler=_offlineContentLoadScheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestSummaryQueue;                      //@synthesize requestSummaryQueue=_requestSummaryQueue - In the implementation block
@property (nonatomic,retain) id<MFMessageSummaryLoaderProvider> summaryLoaderProvider;              //@synthesize summaryLoaderProvider=_summaryLoaderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(MFMailMessageLibrary *)library;
-(void)setSummaryLoaderProvider:(id<MFMessageSummaryLoaderProvider>)arg1 ;
-(void)setQueryTransformer:(MFMailMessageLibraryQueryTransformer *)arg1 ;
-(id)requestSummaryForMessageObjectID:(id)arg1 ;
-(unsigned long long)_countOfMessagesMatchingCriteria:(id)arg1 includingDuplicates:(BOOL)arg2 ;
-(id<EFScheduler>)networkContentLoadScheduler;
-(id)_requestSummaryForLibraryMessage:(id)arg1 ;
-(void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(id<MFMessageSummaryLoaderProvider>)summaryLoaderProvider;
-(void)setLibraryMessageTransformer:(MFMessageTransformer *)arg1 ;
-(void)setRequestSummaryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)countOfMessagesMatchingQuery:(id)arg1 ;
-(void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(long long)countOfMessagesWithGlobalMessageID:(long long)arg1 matchingQuery:(id)arg2 ;
-(void)_iterateMessagesMatchingQuery:(id)arg1 options:(unsigned)arg2 cancelationToken:(id)arg3 resultHandler:(id)arg4 monitor:(id)arg5 ;
-(MFMailMessageLibraryQueryTransformer *)queryTransformer;
-(id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 hookRegistry:(id)arg3 library:(id)arg4 ;
-(void)setNetworkContentLoadScheduler:(id<EFScheduler>)arg1 ;
-(id)enabledAccountMailboxesExpression;
-(void)setOfflineContentLoadScheduler:(id<EFScheduler>)arg1 ;
-(id)libraryMessageForMessageObjectID:(id)arg1 ;
-(MFMessageTransformer *)libraryMessageTransformer;
-(id<EFScheduler>)offlineContentLoadScheduler;
-(id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2 ;
-(id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(BOOL)arg2 temporarilyUnavailableDatabaseIDs:(id*)arg3 ;
-(long long)globalIDForMessageWithDatabaseID:(long long)arg1 mailboxScope:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)requestSummaryQueue;
-(id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(BOOL)arg2 ;
-(id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg1 ;
-(id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 ;
@end

