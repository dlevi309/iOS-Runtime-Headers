/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableArray, NSError, NSMutableOrderedSet, NSMutableSet, NSCountedSet, NSMutableDictionary, NSFileAccessProcessManager, NSObject, NSArray;

@interface NSFileAccessClaim : NSObject <NSSecureCoding> {

	NSXPCConnection* _client;
	NSString* _claimID;
	NSString* _purposeIDOrNil;
	BOOL _cameFromSuperarbiter;
	unsigned long long _blockageCount;
	BOOL _didWait;
	BOOL _isRevoked;
	NSMutableArray* _claimerBlockageReasons;
	NSError* _claimerError;
	NSMutableOrderedSet* _pendingClaims;
	NSMutableSet* _blockingClaims;
	NSCountedSet* _blockingReactorIDs;
	NSMutableArray* _providerCancellationProcedures;
	NSMutableDictionary* _reacquisitionProceduresByPresenterID;
	NSMutableArray* _revocationProcedures;
	NSMutableArray* _devaluationProcedures;
	NSMutableArray* _finishingProcedures;
	NSFileAccessProcessManager* _processManager;
	NSObject*<OS_dispatch_semaphore> _claimerWaiter;
	BOOL _hasInvokedClaimer;
	BOOL _shouldEnableMaterializationDuringAccessorBlock;
	id _claimerOrNil;
	/*^block*/id _serverClaimerOrNil;
	NSMutableArray* _sandboxTokens;
	NSObject*<OS_dispatch_queue> _arbiterQueue;
	id _originatingReactorQueueID;

}

@property (readonly) NSObject*<OS_dispatch_semaphore> claimerWaiter;                 //@synthesize claimerWaiter=_claimerWaiter - In the implementation block
@property (copy,readonly) NSArray * allURLs; 
@property (assign) BOOL shouldEnableMaterializationDuringAccessorBlock;              //@synthesize shouldEnableMaterializationDuringAccessorBlock=_shouldEnableMaterializationDuringAccessorBlock - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapNewWriting:(BOOL)arg3 ofItemAtLocation:(id)arg4 options:(unsigned long long)arg5 ;
+(BOOL)canNewWriteOfItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapExistingWriteOfItemAtLocation:(id)arg3 options:(unsigned long long)arg4 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)finished;
-(void)block;
-(id)client;
-(void)disavowed;
-(id)claimID;
-(BOOL)cameFromSuperarbiter;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)startObservingClientState;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)unblock;
-(void)revoked;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)whenDevaluedPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)isGranted;
-(void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(/*^block*/id)arg3 ;
-(void)setCameFromSuperarbiter;
-(id)pendingClaims;
-(void)cancelled;
-(BOOL)isRevoked;
-(void)blockClaimerForReason:(id)arg1 ;
-(NSArray *)allURLs;
-(void)unblockClaimerForReason:(id)arg1 ;
-(void)prepareClaimForGrantingWithArbiterQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)claimerWaiter;
-(void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1 ;
-(id)purposeID;
-(void)removePendingClaims:(id)arg1 ;
-(BOOL)isBlockedByClaimWithPurposeID:(id)arg1 ;
-(void)givePriorityToClaim:(id)arg1 ;
-(BOOL)shouldCancelInsteadOfWaiting;
-(void)setClaimerError:(id)arg1 ;
-(void)addPendingClaim:(id)arg1 ;
-(void)scheduleBlockedClaim:(id)arg1 ;
-(BOOL)shouldMakeProviderProvideItemAtLocation:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)addBlockingReactorID:(id)arg1 ;
-(void)removeBlockingReactorID:(id)arg1 ;
-(id)claimerError;
-(void)setShouldEnableMaterializationDuringAccessorBlock:(BOOL)arg1 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)_checkIfMovingRequiresProvidingAmongWritingLocations:(id)arg1 options:(unsigned long long*)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)ensureProvidersOfItemsAtReadingLocations:(id)arg1 writingLocations:(id)arg2 thenContinue:(/*^block*/id)arg3 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(/*^block*/id)arg2 ;
-(void)whenFinishedPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(void)devalueSelf;
-(BOOL)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(BOOL)shouldWritingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2 ;
-(BOOL)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1 ;
-(id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3 ;
-(int)clientProcessIdentifier;
-(BOOL)didWait;
-(void)whenRevokedPerformProcedure:(/*^block*/id)arg1 ;
-(void)evaluateNewClaim:(id)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)makeProvidersProvideItemsForReadingLocations:(id)arg1 options:(unsigned long long*)arg2 andWritingLocationsIfNecessary:(id)arg3 options:(unsigned long long*)arg4 thenContinue:(/*^block*/id)arg5 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(/*^block*/id)arg3 ;
-(BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id*)arg3 ;
-(void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(/*^block*/id)arg2 ;
-(void)devalueOldClaim:(id)arg1 ;
-(BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long*)arg2 andIfSoThenReevaluateSelf:(/*^block*/id)arg3 ;
-(id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(BOOL)shouldEnableMaterializationDuringAccessorBlock;
@end

