/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLJournalFile, NSURL, NSDictionary;

@interface PLJournal : NSObject {

	PLJournalFile* _snapshotJournal;
	PLJournalFile* _changeJournal;
	unsigned char _snapshotMode;
	NSURL* _baseURL;
	Class _payloadClass;
	PLJournalFile* _pendingSnapshotJournal;
	PLJournalFile* _pendingChangeJournal;
	PLJournalFile* _prepareMarker;

}

@property (nonatomic,readonly) PLJournalFile * pendingSnapshotJournal;              //@synthesize pendingSnapshotJournal=_pendingSnapshotJournal - In the implementation block
@property (nonatomic,readonly) PLJournalFile * pendingChangeJournal;                //@synthesize pendingChangeJournal=_pendingChangeJournal - In the implementation block
@property (nonatomic,readonly) PLJournalFile * prepareMarker;                       //@synthesize prepareMarker=_prepareMarker - In the implementation block
@property (nonatomic,readonly) NSURL * baseURL;                                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) PLJournalFile * snapshotJournal; 
@property (nonatomic,readonly) PLJournalFile * changeJournal; 
@property (nonatomic,readonly) Class payloadClass;                                  //@synthesize payloadClass=_payloadClass - In the implementation block
+(BOOL)snapshotFinishMarkerExistsForBaseURL:(id)arg1 ;
+(id)metadataURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 pending:(BOOL)arg3 ;
+(id)journalURLForBaseURL:(id)arg1 payloadClassId:(id)arg2 journalType:(id)arg3 ;
+(id)snapshotFinishMarkerURLForBaseURL:(id)arg1 ;
+(BOOL)createSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeSnapshotFinishMarkerForBaseURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)recoverJournalsIfNecessaryForBaseURL:(id)arg1 payloadClasses:(id)arg2 error:(id*)arg3 ;
+(BOOL)createSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)appendSnapshotsForBaseURL:(id)arg1 payloadClasses:(id)arg2 snapshotJournalBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)_performSnapshotsForBaseURL:(id)arg1 snapshotMode:(unsigned char)arg2 payloadClasses:(id)arg3 snapshotJournalBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
+(BOOL)_finishFullSnapshotForBaseURL:(id)arg1 snapshotSucceeded:(BOOL)arg2 snapshotMode:(unsigned char)arg3 journals:(id)arg4 error:(id*)arg5 ;
-(BOOL)appendUpdatePayloadWithPayloadID:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
-(NSURL *)baseURL;
-(BOOL)appendChangeEntries:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumeratePayloadsUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)createSnapshotUsingNextPayloadBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithBaseURL:(id)arg1 payloadClass:(Class)arg2 ;
-(BOOL)enumerateEntriesUsingBlock:(/*^block*/id)arg1 decodePayload:(BOOL)arg2 error:(id*)arg3 ;
-(void)removeMetadata;
-(id)metadataURLPending:(BOOL)arg1 ;
-(BOOL)_removeMetadataPending:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_replaceMetadataWithPendingMetadataError:(id*)arg1 ;
-(id)_readMetadataPending:(BOOL)arg1 ;
-(BOOL)_updateMetadataWithMetadata:(id)arg1 replace:(BOOL)arg2 pending:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeJournalFilesWithError:(id*)arg1 ;
-(PLJournalFile *)snapshotJournal;
-(BOOL)_isPendingJournalAuthoritative;
-(BOOL)_recoverJournalWithError:(id*)arg1 ;
-(BOOL)_prepareForSnapshotWithMode:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)_finishSnapshotWithMode:(unsigned char)arg1 snapshotSuccess:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_performSnapshotWithMode:(unsigned char)arg1 usingNextEntryBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)prepareForCreateSnapshotWithError:(id*)arg1 ;
-(BOOL)finishCreateSnapshot:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)coalesceChangesToSnapshotWithError:(id*)arg1 ;
-(BOOL)snapshotJournalFileSize:(unsigned long long*)arg1 changeJournalFileSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(PLJournalFile *)changeJournal;
-(PLJournalFile *)pendingSnapshotJournal;
-(unsigned long long)countOfInsertEntriesWithError:(id*)arg1 ;
-(unsigned long long)currentPayloadVersionWithError:(id*)arg1 ;
-(id)_payloadTooNewErrorWithPayloadVersion:(long long)arg1 ;
-(PLJournalFile *)pendingChangeJournal;
-(PLJournalFile *)prepareMarker;
-(Class)payloadClass;
-(BOOL)appendSnapshotUsingNextEntryBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSDictionary *)metadata;
@end

