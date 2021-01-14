/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>
#import <libobjc.A.dylib/ICReindexing.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSDictionary, CSSearchableIndex, ICSelectorDelayer, NSMutableDictionary, NSArray, NSString;

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate, ICReindexing> {

	BOOL _disabled;
	BOOL _retryOnErrors;
	BOOL _observingChanges;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSOperationQueue* _operationQueue;
	NSDictionary* _dataSourcesByIdentifier;
	CSSearchableIndex* _searchableIndex;
	ICSelectorDelayer* _changeProcessingDelayer;
	NSMutableDictionary* _retryTimers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexingQueue;                   //@synthesize indexingQueue=_indexingQueue - In the implementation block
@property (nonatomic,readonly) NSArray * _dataSources; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSourcesByIdentifier;                         //@synthesize dataSourcesByIdentifier=_dataSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) CSSearchableIndex * searchableIndex;                          //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * changeProcessingDelayer;                  //@synthesize changeProcessingDelayer=_changeProcessingDelayer - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryTimers;                            //@synthesize retryTimers=_retryTimers - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                              //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL retryOnErrors;                                           //@synthesize retryOnErrors=_retryOnErrors - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedIndexer;
-(NSArray *)dataSources;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)finishRemainingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRetryOnErrors:(BOOL)arg1 ;
-(id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2 ;
-(void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)dataSourcesByIdentifier;
-(NSMutableDictionary *)retryTimers;
-(id)init;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(void)addDataSource:(id)arg1 ;
-(void)setChangeProcessingDelayer:(ICSelectorDelayer *)arg1 ;
-(void)reindexAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearRetryForSelector:(SEL)arg1 ;
-(void)dataSourceDidChange:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)processChanges;
-(NSObject*<OS_dispatch_queue>)indexingQueue;
-(id)newContextsForAllDataSources;
-(void)clearObjectIDsToProcess;
-(BOOL)isDisabled;
-(void)setRetryTimers:(NSMutableDictionary *)arg1 ;
-(NSArray *)_dataSources;
-(BOOL)retryOnErrors;
-(id)objectsDictionaryForSearchableItems:(id)arg1 inContexts:(id)arg2 ;
-(id)dataSourceWithIdentifier:(id)arg1 ;
-(id)objectForManagedObjectIDURI:(id)arg1 inContexts:(id)arg2 ;
-(void)setIndexingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancelIndexingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
-(void)startObservingChanges;
-(CSSearchableIndex *)searchableIndex;
-(void)reindexAllSearchableItemsInIndex;
-(BOOL)isObservingChanges;
-(id)pendingReindexingOperation;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)retrySelector:(SEL)arg1 ;
-(void)stopObservingChanges;
-(void)setDataSourcesByIdentifier:(NSDictionary *)arg1 ;
-(ICSelectorDelayer *)changeProcessingDelayer;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 inIndex:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

