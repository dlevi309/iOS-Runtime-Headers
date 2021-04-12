/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLJournalFile, NSURL, NSDictionary;

@interface PLJournal : NSObject {

	PLJournalFile* _snapshotJournal;
	PLJournalFile* _changeJournal;
	unsigned char _prepareMode;
	NSURL* _baseURL;
	Class _payloadClass;
	PLJournalFile* _pendingJournal;
	PLJournalFile* _prepareMarker;

}

@property (nonatomic,readonly) PLJournalFile * pendingJournal;               //@synthesize pendingJournal=_pendingJournal - In the implementation block
@property (nonatomic,readonly) PLJournalFile * prepareMarker;                //@synthesize prepareMarker=_prepareMarker - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                              //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) PLJournalFile * snapshotJournal; 
@property (nonatomic,readonly) PLJournalFile * changeJournal; 
@property (nonatomic,readonly) Class payloadClass;                           //@synthesize payloadClass=_payloadClass - In the implementation block
+(BOOL)snapshotFinishMarkerExistsForBaseURL:(id)arg1 ;
+(id)metadataURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 pending:(BOOL)arg3 ;
+(id)journalURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 journalType:(id)arg3 ;
+(id)snapshotFinishMarkerURLForBaseURL:(id)arg1 ;
+(BOOL)createSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)finishSnapshotForBaseURL:(id)arg1 snapshotSucceeded:(BOOL)arg2 journals:(id)arg3 error:(id*)arg4 ;
+(BOOL)recoverJournalsIfNecessaryForBaseURL:(id)arg1 payloadClasses:(id)arg2 error:(id*)arg3 ;
-(NSURL *)baseURL;
-(NSDictionary *)metadata;
-(Class)payloadClass;
-(BOOL)createSnapshotUsingNextPayloadBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateEntriesUsingBlock:(/*^block*/id)arg1 decodePayload:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithBaseURL:(id)arg1 payloadClass:(Class)arg2 ;
-(void)removeMetadata;
-(id)metadataURLPending:(BOOL)arg1 ;
-(BOOL)_removeMetadataPending:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_replaceMetadataWithPendingMetadataError:(id*)arg1 ;
-(id)_readMetadataPending:(BOOL)arg1 ;
-(BOOL)_updateMetadataWithMetadata:(id)arg1 replace:(BOOL)arg2 pending:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeJournalFilesWithError:(id*)arg1 ;
-(BOOL)_isPendingJournalAuthoritative;
-(BOOL)_recoverJournalWithError:(id*)arg1 ;
-(BOOL)_finishSnapshot:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)prepareForSnapshotWithError:(id*)arg1 ;
-(BOOL)finishSnapshot:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)coalesceChangesToSnapshotWithError:(id*)arg1 ;
-(BOOL)appendChangeEntries:(id)arg1 error:(id*)arg2 ;
-(PLJournalFile *)snapshotJournal;
-(PLJournalFile *)changeJournal;
-(BOOL)enumeratePayloadsUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(unsigned long long)countOfInsertEntriesWithError:(id*)arg1 ;
-(unsigned long long)currentPayloadVersionWithError:(id*)arg1 ;
-(PLJournalFile *)pendingJournal;
-(PLJournalFile *)prepareMarker;
@end

