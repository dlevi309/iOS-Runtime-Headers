/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@protocol OS_dispatch_workloop, NSFileProviderEnumerator, OS_dispatch_semaphore;
@class NSString, CSSearchableIndex, NSObject, NSOperationQueue, NSOperation, NSData, FPXFetchClientStateOperation, FPXDomainContext;

@interface FPXSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {

	NSString* _indexName;
	NSString* _domainID;
	NSString* _providerIdentifier;
	CSSearchableIndex* _index;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSOperationQueue* _operationQueue;
	NSOperation* _currentOperation;
	NSData* _lastIndexState;
	unsigned long long _clientState;
	FPXFetchClientStateOperation* _fetchStateOperation;
	BOOL _isCanceled;
	id<NSFileProviderEnumerator> _vendorEnumerator;
	NSObject*<OS_dispatch_semaphore> _clientStateSemaphore;
	BOOL _indexing;
	FPXDomainContext* _domainContext;

}

@property (__weak,readonly) FPXDomainContext * domainContext;                         //@synthesize domainContext=_domainContext - In the implementation block
@property (readonly) id<NSFileProviderEnumerator> vendorEnumerator;                   //@synthesize vendorEnumerator=_vendorEnumerator - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (nonatomic,readonly) CSSearchableIndex * index;                             //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * lastIndexState;                               //@synthesize lastIndexState=_lastIndexState - In the implementation block
@property (assign,getter=isIndexing,nonatomic) BOOL indexing;                         //@synthesize indexing=_indexing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(CSSearchableIndex *)index;
-(void)_invalidate;
-(BOOL)isIndexing;
-(void)invalidateAsync;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)fetchCurrentIndexingAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dropIndexWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)indexOutOfBandUpdatedItems:(id)arg1 deletedItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(FPXDomainContext *)domainContext;
-(void)learnNewIndexState:(id)arg1 ;
-(id)_fetchClientStateIfNeeded;
-(void)_indexOneBatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_indexOneBatchFromAnchor:(id)arg1 toAnchor:(id)arg2 updatedItems:(id)arg3 deletedItems:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_fetchCurrentIndexingAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithIndexName:(id)arg1 domainID:(id)arg2 context:(id)arg3 ;
-(void)dropIndexInQueue:(id)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dropIndexAndInvalidateWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<NSFileProviderEnumerator>)vendorEnumerator;
-(NSData *)lastIndexState;
-(void)setIndexing:(BOOL)arg1 ;
-(NSString *)description;
-(void)dumpStateTo:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)indexOneBatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

