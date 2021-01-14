/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURL, NSMutableDictionary, NSString;

@interface NSFileCoordinator : NSObject {

	id _accessArbiter;
	id _fileReactor;
	id _purposeID;
	NSURL* _recentFilePresenterURL;
	id _accessClaimIDOrIDs;
	BOOL _isCancelled;
	NSMutableDictionary* _movedItems;

}

@property (copy) NSString * purposeIdentifier; 
+(void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2 ;
+(void)_addProcessIdentifier:(int)arg1 observedUbiquityAttributes:(id)arg2 forID:(id)arg3 ;
+(void)_startInProcessFileCoordinationAndProgressServers;
+(void)removeFilePresenter:(id)arg1 ;
+(id)_observedUbiquityAttributesForPresenterWithID:(id)arg1 ;
+(void)_setAutomaticFileProviderReregistrationDisabled:(BOOL)arg1 ;
+(void)_stopInProcessFileCoordinationAndProgressServers;
+(void)_setProvidedItemRecursiveGenerationCount:(unsigned long long)arg1 ;
+(void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2 ;
+(id)_endpointForInProcessFileCoordinationServer;
+(id)_createConnectionToFileAccessArbiterForQueue:(id)arg1 ;
+(id)_createConnectionToProgressRegistrar;
+(void)_setCurrentClaimPurposeIdentifier:(id)arg1 ;
+(void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2 ;
+(void)_getDebugInfoWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2 ;
+(void)_setKernelMaterializationOperation:(unsigned)arg1 ;
+(id)_currentClaimPurposeIdentifier;
+(void)_accessPresenterInfoUsingBlock:(/*^block*/id)arg1 ;
+(unsigned)_kernelMaterializationOperation;
+(void)_setNextClaimIdentifier:(id)arg1 ;
+(BOOL)_itemHasPresentersAtURL:(id)arg1 ;
+(int)_processIdentifierForID:(id)arg1 ;
+(id)_createIdentifierForNewClaim;
+(id)_fileAccessArbiterInterface;
+(unsigned long long)_providedItemGenerationCount;
+(id)_inProcessFileAccessArbiter;
+(void)_printDebugInfo;
+(void)_performBarrier;
+(unsigned long long)_readingOptions;
+(id)_currentFileCoordinator;
+(void)_adoptFCDEndpointForTest:(id)arg1 ;
+(id)_canonicalURLForURL:(id)arg1 ;
+(id)_nextClaimIdentifier;
+(void)_removeFileProvider:(id)arg1 ;
+(id)_fileProviders;
+(void)_addFileProvider:(id)arg1 ;
+(void)_removeInfoForID:(id)arg1 ;
+(BOOL)_skipCoordinationWork;
+(void)_performBarrierAsync:(/*^block*/id)arg1 ;
+(id)_fileProviderInterface;
+(id)filePresenters;
+(void)_setReadingOptions:(unsigned long long)arg1 ;
+(BOOL)_provideRecursively;
+(id)_filePresenterInterface;
+(unsigned long long)_responsesForPresenter:(id)arg1 ;
+(void)addFilePresenter:(id)arg1 ;
-(void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(/*^block*/id)arg5 ;
-(void)_forgetAccessClaimForID:(id)arg1 ;
-(id)init;
-(void)_blockOnAccessClaim:(id)arg1 withAccessArbiter:(id)arg2 ;
-(void)sharingDidChangeForItemAtURL:(id)arg1 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(id)retainAccess;
-(id)initWithFilePresenter:(id)arg1 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_cancelClaimWithIdentifier:(id)arg1 ;
-(void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(void)releaseAccess:(id)arg1 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_lockdownPurposeIdentifier;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_requestAccessClaim:(id)arg1 withProcedure:(/*^block*/id)arg2 ;
-(void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)_itemDidDisappearAtURL:(id)arg1 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_itemDidChangeAtURL:(id)arg1 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)itemAtURL:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ;
-(void)_didEndWrite:(id)arg1 ;
-(NSString *)purposeIdentifier;
-(void)_withAccessArbiter:(id)arg1 invokeAccessor:(/*^block*/id)arg2 orDont:(BOOL)arg3 andRelinquishAccessClaim:(id)arg4 ;
-(BOOL)_purposeIdentifierLockedDown;
-(void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(id)_willStartWriteWithIntents:(id)arg1 async:(BOOL)arg2 ;
-(void)_setPurposeIdentifier:(id)arg1 ;
-(BOOL)_isValidUbiquityAttribute:(id)arg1 ;
-(void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)cancel;
-(void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_ubiquityDidChangeForItemAtURL:(id)arg1 ;
-(void)_invokeAccessor:(/*^block*/id)arg1 thenCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setFileProvider:(id)arg1 ;
-(void)dealloc;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
@end

