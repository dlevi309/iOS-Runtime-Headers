/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDInteractionRecording.h>
#import <libobjc.A.dylib/_CDInteractionQuerying.h>
#import <libobjc.A.dylib/_CDInteractionDeleting.h>

@protocol OS_dispatch_queue, _DKLocationHistorian;
@class _DKCoreDataStorage, NSObject, _CDInteractionStoreNotifier, _CDInteraction;

@interface _CDInteractionStore : NSObject <_CDInteractionRecording, _CDInteractionQuerying, _CDInteractionDeleting> {

	_DKCoreDataStorage* _storage;
	NSObject*<OS_dispatch_queue> _workQueue;
	_CDInteractionStoreNotifier* _notifier;
	NSObject*<OS_dispatch_queue> _pendingShareInteractionQueue;
	BOOL _inMaintenanceMode;
	BOOL _readConcurrently;
	_CDInteraction* _pendingShareSheetInteraction;
	id<_DKLocationHistorian> _locationHistorian;

}

@property (nonatomic,retain) _CDInteraction * pendingShareSheetInteraction;              //@synthesize pendingShareSheetInteraction=_pendingShareSheetInteraction - In the implementation block
@property (retain) id<_DKLocationHistorian> locationHistorian;                           //@synthesize locationHistorian=_locationHistorian - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * storage;                             //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) BOOL readConcurrently;                                      //@synthesize readConcurrently=_readConcurrently - In the implementation block
+(id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)defaultDatabaseDirectory;
-(void)recordInteractions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)recordInteractions:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2 ;
-(id)init;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 ;
-(void)updateCachedStatsForContactRecord:(id)arg1 isSender:(BOOL)arg2 withInteraction:(id)arg3 ;
-(long long)queryVersionNumber;
-(id)batchFetchExistingAttachmentRecords:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)setPendingShareSheetInteraction:(_CDInteraction *)arg1 ;
-(void)anonymizeContactsWithSalt:(id)arg1 ;
-(id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_DKCoreDataStorage *)storage;
-(void)exitMaintenanceMode;
-(id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(void)anonymizeInteractionsWithSalt:(id)arg1 ;
-(BOOL)recordVersionNumber:(long long)arg1 ;
-(BOOL)recordInteractionsBatch:(id)arg1 error:(id*)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)createInteractionFromRecord:(id)arg1 ;
-(id)getContactForRecord:(id)arg1 ;
-(id)errorForException:(id)arg1 ;
-(unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2 ;
-(id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 attachmentCache:(id)arg4 contactCache:(id)arg5 error:(id*)arg6 ;
-(void)anonymizeWithSalt:(id)arg1 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4 ;
-(id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4 ;
-(_CDInteraction *)pendingShareSheetInteraction;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2 ;
-(id)dateFromTimeIntervalSinceRef:(double)arg1 ;
-(id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)setReadConcurrently:(BOOL)arg1 ;
-(id)recipientArrayWithMostRecentSenderFirstFromIncomingInteraction:(id)arg1 outgoingInteraction:(id)arg2 ;
-(id)createAttachmentFromRecord:(id)arg1 ;
-(void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)readConcurrently;
-(id)interactionCountPerMechanism;
-(id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(void)enterMaintenanceMode;
-(unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1 ;
-(unsigned long long)deleteUnreferencedContacts;
-(void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3 ;
-(void)anonymizeKeywordsWithSalt:(id)arg1 ;
-(void)countContactsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)recordInteractions:(id)arg1 ;
-(id)createKeywordFromRecord:(id)arg1 ;
-(id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<_DKLocationHistorian>)locationHistorian;
-(id)queryInteractionsUsingPredicate:(id)arg1 matchingNameTokens:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)openAndCheckIfReadable;
-(unsigned long long)deleteUnreferencedKeywords;
-(id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
-(id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 ;
-(id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)setLocationHistorian:(id<_DKLocationHistorian>)arg1 ;
-(id)createInteractionRecord:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)numberOfContactsMatchingPredicate:(id)arg1 ;
-(unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2 ;
-(void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeStorage;
-(BOOL)recordInteraction:(id)arg1 ;
-(id)fetchOrCreateAttachmentRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4 ;
-(id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteStorage;
@end

