/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)__itemAtURL:(id)arg1 didMoveToURL:(id)arg2 purposeID:(id)arg3 ;
+(void)__itemAtURL:(id)arg1 didDisconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didReconnectWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didGainVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didLoseVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(void)__itemAtURL:(id)arg1 didResolveConflictVersionWithClientID:(id)arg2 name:(id)arg3 purposeID:(id)arg4 ;
+(id)_currentFileCoordinator;
+(id)_fileAccessArbiterInterface;
+(id)_fileProviderInterface;
+(void)addFilePresenter:(id)arg1 ;
+(unsigned long long)_responsesForPresenter:(id)arg1 ;
+(void)removeFilePresenter:(id)arg1 ;
+(id)filePresenters;
+(void)_performBarrierAsync:(/*^block*/id)arg1 ;
+(void)_setCurrentClaimPurposeIdentifier:(id)arg1 ;
+(void)_addProcessIdentifier:(int)arg1 observedUbiquityAttributes:(id)arg2 forID:(id)arg3 ;
+(void)_setReadingOptions:(unsigned long long)arg1 ;
+(void)_setKernelMaterializationOperation:(unsigned)arg1 ;
+(void)_removeInfoForID:(id)arg1 ;
+(id)_createIdentifierForNewClaim;
+(unsigned long long)_readingOptions;
+(BOOL)_skipCoordinationWork;
+(id)_canonicalURLForURL:(id)arg1 ;
+(void)_getDebugInfoWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_addFileProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_nextClaimIdentifier;
+(void)_setNextClaimIdentifier:(id)arg1 ;
+(void)__itemAtURL:(id)arg1 didChangeUbiquityWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didDisappearWithPurposeID:(id)arg2 ;
+(void)__itemAtURL:(id)arg1 didChangeWithPurposeID:(id)arg2 ;
+(void)_addFileProvider:(id)arg1 ;
+(void)_removeFileProvider:(id)arg1 ;
+(id)_fileProviders;
+(void)_setAutomaticFileProviderReregistrationDisabled:(BOOL)arg1 ;
+(BOOL)_itemHasPresentersAtURL:(id)arg1 ;
+(id)_currentClaimPurposeIdentifier;
+(void)_printDebugInfo;
+(id)_filePresenterInterface;
+(void)_startInProcessFileCoordinationAndProgressServers;
+(id)_inProcessFileAccessArbiter;
+(void)_stopInProcessFileCoordinationAndProgressServers;
+(id)_createConnectionToFileAccessArbiterForQueue:(id)arg1 ;
+(id)_createConnectionToProgressRegistrar;
+(void)_adoptFCDEndpointForTest:(id)arg1 ;
+(id)_endpointForInProcessFileCoordinationServer;
+(void)_performBarrier;
+(void)_accessPresenterInfoUsingBlock:(/*^block*/id)arg1 ;
+(int)_processIdentifierForID:(id)arg1 ;
+(id)_observedUbiquityAttributesForPresenterWithID:(id)arg1 ;
+(BOOL)_provideRecursively;
+(unsigned)_kernelMaterializationOperation;
-(id)init;
-(void)dealloc;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)__coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)__coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 purposeID:(id)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)cancel;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(id)initWithFilePresenter:(id)arg1 ;
-(void)itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)_lockdownPurposeIdentifier;
-(BOOL)_purposeIdentifierLockedDown;
-(void)_setPurposeIdentifier:(id)arg1 ;
-(void)_invokeAccessor:(/*^block*/id)arg1 thenCompletionHandler:(/*^block*/id)arg2 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 byAccessor:(/*^block*/id)arg4 ;
-(void)_coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_coordinateWritingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)_coordinateAccessWithIntents:(id)arg1 queue:(id)arg2 byAccessor:(/*^block*/id)arg3 ;
-(void)__prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 byAccessor:(/*^block*/id)arg5 ;
-(void)_itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)_itemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(BOOL)_isValidUbiquityAttribute:(id)arg1 ;
-(void)setPurposeIdentifier:(NSString *)arg1 ;
-(NSString *)purposeIdentifier;
-(void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned long long)arg2 writingItemAtURL:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)prepareForReadingItemsAtURLs:(id)arg1 options:(unsigned long long)arg2 writingItemsAtURLs:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 byAccessor:(/*^block*/id)arg6 ;
-(void)itemAtURL:(id)arg1 willMoveToURL:(id)arg2 ;
-(void)itemAtURL:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ;
-(void)_requestAccessClaim:(id)arg1 withProcedure:(/*^block*/id)arg2 ;
-(void)_forgetAccessClaimForID:(id)arg1 ;
-(void)_itemDidDisappearAtURL:(id)arg1 ;
-(void)_blockOnAccessClaim:(id)arg1 withAccessArbiter:(id)arg2 ;
-(void)_withAccessArbiter:(id)arg1 invokeAccessor:(/*^block*/id)arg2 orDont:(BOOL)arg3 andRelinquishAccessClaim:(id)arg4 ;
-(id)_willStartWriteWithIntents:(id)arg1 async:(BOOL)arg2 ;
-(void)_didEndWrite:(id)arg1 ;
-(void)_cancelClaimWithIdentifier:(id)arg1 ;
-(void)_ubiquityDidChangeForItemAtURL:(id)arg1 ;
-(void)sharingDidChangeForItemAtURL:(id)arg1 ;
-(void)_itemDidChangeAtURL:(id)arg1 ;
-(void)_setFileProvider:(id)arg1 ;
-(id)retainAccess;
-(void)releaseAccess:(id)arg1 ;
@end

