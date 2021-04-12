/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMailboxPredictionQueryAdapter.h>
#import <libobjc.A.dylib/EDMessageObjectIDToDatabaseIDConverter.h>

@protocol OS_dispatch_queue;
@class EDMailboxPersistence, NSObject, NSNumber, EDPersistenceDatabase, NSString;

@interface EDMessagePersistence : NSObject <EFLoggable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter> {

	int _cachedMetadataUpdatesSinceLastCheck;
	EDMailboxPersistence* _mailboxPersistence;
	NSObject*<OS_dispatch_queue> _cachedMetadataIsolation;
	NSNumber* _cachedMetadataEstimatedRowCount;
	EDPersistenceDatabase* _database;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cachedMetadataIsolation;              //@synthesize cachedMetadataIsolation=_cachedMetadataIsolation - In the implementation block
@property (nonatomic,retain) NSNumber * cachedMetadataEstimatedRowCount;                          //@synthesize cachedMetadataEstimatedRowCount=_cachedMetadataEstimatedRowCount - In the implementation block
@property (assign,nonatomic) int cachedMetadataUpdatesSinceLastCheck;                             //@synthesize cachedMetadataUpdatesSinceLastCheck=_cachedMetadataUpdatesSinceLastCheck - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabase * database;                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,__weak,readonly) EDMailboxPersistence * mailboxPersistence;                  //@synthesize mailboxPersistence=_mailboxPersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)messagesTableName;
+(id)_messageReferencesTableSchema;
+(id)recipientsTableSchemaAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)attachmentsTableSchemaAndForeignKeysToResolve:(id*)arg1 ;
+(id)partialMessagesTableSchemaAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2 ;
+(id)bitExpressionForConversationFlag:(unsigned long long)arg1 ;
+(id)bitExpressionForAttachments;
+(id)_cachedMetadataTableSchema;
+(id)attachmentsTableName;
+(id)addressesTableSchema;
+(id)subjectsTableSchema;
+(id)summariesTableSchema;
+(id)protectedMessageDataTableSchema;
+(id)addressesTableName;
+(id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2 ;
+(id)protectedTablesAndForeignKeysToResolve:(id*)arg1 ;
-(BOOL)isMessageKnownToHaveNoMailDropAttachment:(id)arg1 ;
-(void)setIsMailDropAttachmentPresent:(BOOL)arg1 forMessage:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(void)reconcileJournalWithCompletionBlock:(/*^block*/id)arg1 ;
-(EDMailboxPersistence *)mailboxPersistence;
-(id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 ;
-(id)enabledAccountMailboxesExpression;
-(id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg1 ;
-(id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 ;
-(void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3 ;
-(void)performDatabaseWorkInBlockWithHighPriority:(/*^block*/id)arg1 ;
-(id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 ;
-(id)queryWithExpandedMailboxesFromQuery:(id)arg1 ;
-(id)persistedMessagesForMessageObjectIDs:(id)arg1 requireProtectedData:(BOOL)arg2 temporarilyUnavailableMessageObjectIDs:(id*)arg3 ;
-(long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2 ;
-(long long)countOfMessagesMatchingQuery:(id)arg1 ;
-(void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2 ;
-(id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(BOOL)arg2 temporarilyUnavailableDatabaseIDs:(id*)arg3 ;
-(id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(BOOL)arg2 ;
-(id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestSummaryForMessageObjectID:(id)arg1 ;
-(id)cachedDatabaseIDsDictionaryForMessageIDHashes:(id)arg1 ;
-(id)validMailboxesForPrediction;
-(void)performDatabaseReadBlock:(/*^block*/id)arg1 ;
-(id)databaseIDsDictionaryForMessageObjectIDs:(id)arg1 ;
-(id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 ;
-(id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 ;
-(id)_groupMessageObjectIDsByMailboxScope:(id)arg1 ;
-(id)_databaseIDsDictionaryForMessageIDHashes:(id)arg1 mailboxScope:(id)arg2 ;
-(id)_threadQueryForThreadObjectID:(id)arg1 ;
-(id)persistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 ;
-(id)_cachedMetadataJSONForKey:(id)arg1 messageIDHash:(id)arg2 ;
-(void)_setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageIDHash:(id)arg3 ;
-(void)_checkCachedMetadataRowLimitWithConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedMetadataIsolation;
-(int)cachedMetadataUpdatesSinceLastCheck;
-(void)setCachedMetadataUpdatesSinceLastCheck:(int)arg1 ;
-(NSNumber *)cachedMetadataEstimatedRowCount;
-(void)setCachedMetadataEstimatedRowCount:(NSNumber *)arg1 ;
-(id)messagesMatchingQuery:(id)arg1 ;
-(id)persistedMessagesForObjectIDs:(id)arg1 requireProtectedData:(BOOL)arg2 ;
-(id)messagesForMessageObjectIDs:(id)arg1 missedMessageObjectIDs:(id*)arg2 ;
@end

