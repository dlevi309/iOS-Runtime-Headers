/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSManagedObjectContext, NSPersistentContainer;

@interface TransparencyManagedDataStore : NSObject {

	NSManagedObjectContext* _context;
	NSPersistentContainer* _persistentContainer;
	Aq _sequenceId;

}

@property (retain) NSPersistentContainer * persistentContainer;               //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
@property (assign) Aq sequenceId;                                             //@synthesize sequenceId=_sequenceId - In the implementation block
+(id)serializeLoggableDatas:(id)arg1 ;
+(id)deserializeLoggableDatas:(id)arg1 error:(id*)arg2 ;
+(void)reportCoreDataEventForEntity:(id)arg1 write:(BOOL)arg2 code:(long long)arg3 underlyingError:(id)arg4 ;
-(id)init;
-(id)bundleURL;
-(void)performBlock:(/*^block*/id)arg1 ;
-(NSManagedObjectContext *)context;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)deleteObject:(id)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(BOOL)persistWithError:(id*)arg1 ;
-(BOOL)clearStateForApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)logSTHMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(id)createSignedTreeHeadFailure;
-(id)fetchTreeHeadsWithoutHash:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6 ;
-(id)fetchRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 youngerThan:(id)arg5 error:(id*)arg6 ;
-(BOOL)clearState:(id*)arg1 ;
-(id)createSignedMutationTimestamp:(id)arg1 mutationMs:(unsigned long long)arg2 receiptTime:(double)arg3 ;
-(BOOL)deleteSTHs:(id)arg1 logBeginMsLessThan:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)deleteDownloadRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetRequestsToPending:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSMTs:(id)arg1 mutationTimeLessThan:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)persistAndRefaultObjects:(id)arg1 error:(id*)arg2 ;
-(void)performForPendingSMTs:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)persistAndRefaultObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)performAndWaitForRequestId:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)refaultObject:(id)arg1 ;
-(id)createRequestFailure;
-(void)performForRequestsWithPendingResponses:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)performForRequestsWithPendingSMTs:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)performForSMTsWithUnverifiedSignature:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(void)garbageCollectSTHs:(id)arg1 logBeginMs:(unsigned long long)arg2 olderThan:(id)arg3 error:(id*)arg4 ;
-(void)garbageCollectRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 ;
-(id)latestVerifiedTreeHeadRevision:(id)arg1 logBeginMs:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)unverifiedRevisions:(id)arg1 logBeginMs:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)createDownloadRecord:(id)arg1 ;
-(void)performForPendingSTHs:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)performForSTHsWithUnverifiedSignature:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)fetchDownloadRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)logMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(Aq)sequenceId;
-(long long)currentSequenceId:(id*)arg1 ;
-(BOOL)populateMissingLogHeadHashes:(id*)arg1 ;
-(id)createRequest;
-(void)setSequenceId:(Aq)arg1 ;
-(void)performOnRequestsForPredicate:(id)arg1 enforceMax:(BOOL)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)performOnBatchesOfEntity:(id)arg1 predicate:(id)arg2 enforceMax:(BOOL)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)haveTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6 ;
-(id)createTreeHead;
-(void)gargabeCollectEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3 ;
-(id)fetchDownloadRecordById:(id)arg1 error:(id*)arg2 ;
-(id)signedTreeHeadFailures:(id*)arg1 ;
-(void)deleteObjectSet:(id)arg1 ;
-(id)signedMutationTimestampsFailures:(id*)arg1 ;
-(id)requestFailures:(id*)arg1 ;
-(id)treeHeads:(id*)arg1 ;
-(id)signedMutationTimestamps:(id*)arg1 ;
-(id)requests:(id*)arg1 ;
-(id)downloadRecords:(id*)arg1 ;
-(unsigned long long)countOutstandingRequestsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalRequestsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOutstandingSMTsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalSMTsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOutstandingSTHsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countTotalSTHsForApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)logRequestMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(BOOL)logSMTMetricsForApplication:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)requestCount:(id*)arg1 ;
-(unsigned long long)requestFailureCount:(id*)arg1 ;
-(unsigned long long)signedMutationTimestampCount:(id*)arg1 ;
-(unsigned long long)signedMutationTimestampsFailureCount:(id*)arg1 ;
-(unsigned long long)treeHeadCount:(id*)arg1 ;
-(unsigned long long)signedTreeHeadFailureCount:(id*)arg1 ;
-(id)fetchRequestForUUID:(id)arg1 error:(id*)arg2 ;
-(id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(unsigned long long)arg8 error:(id*)arg9 ;
-(id)treeHeadsForApplication:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestsForURI:(id)arg1 error:(id*)arg2 ;
-(id)fetchCompletedRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 ;
-(id)createSignedMutationTimestampsFailure;
-(id)createTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logHeadHash:(id)arg4 logType:(long long)arg5 revision:(long long)arg6 ;
-(id)fetchTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6 ;
-(BOOL)hasPendingDownloadForUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteDownloadRecordById:(id)arg1 error:(id*)arg2 ;
-(BOOL)setResponse:(id)arg1 downloadId:(id)arg2 error:(id*)arg3 ;
-(void)deleteCompletedRequest:(id)arg1 ;
-(id)copyStatistics:(id*)arg1 ;
-(BOOL)performAndWaitForDownloadId:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
@end

