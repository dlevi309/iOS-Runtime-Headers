/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <UIKitCore/_UIArrayController.h>
#import <libobjc.A.dylib/_UIDocumentPickerDirectoryObserver.h>

@protocol OS_dispatch_queue;
@class NSOrderedSet, NSPredicate, NSURL, NSMetadataQuery, NSArray, NSDate, NSObject, NSOperationQueue, NSString;

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver> {

	NSOrderedSet* _staticItems;
	NSPredicate* _queryPredicate;
	NSURL* _firstURL;
	BOOL _recursive;
	BOOL _afterInitialUpdate;
	NSMetadataQuery* _query;
	NSArray* _scopes;
	NSDate* _lastSnapshotDate;
	NSObject*<OS_dispatch_queue> _queryQueue;
	NSOperationQueue* _queryWorkerQueue;

}

@property (nonatomic,retain) NSMetadataQuery * query;                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * scopes;                                     //@synthesize scopes=_scopes - In the implementation block
@property (nonatomic,retain) NSDate * lastSnapshotDate;                            //@synthesize lastSnapshotDate=_lastSnapshotDate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queryQueue;              //@synthesize queryQueue=_queryQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queryWorkerQueue;                  //@synthesize queryWorkerQueue=_queryWorkerQueue - In the implementation block
@property (assign,nonatomic) BOOL afterInitialUpdate;                              //@synthesize afterInitialUpdate=_afterInitialUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (nonatomic,retain) NSPredicate * queryPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)scopes;
-(NSMetadataQuery *)query;
-(void)setScopes:(NSArray *)arg1 ;
-(NSString *)description;
-(void)setStaticItems:(NSOrderedSet *)arg1 ;
-(void)setQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queryQueue;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
-(void)invalidate;
-(NSOrderedSet *)staticItems;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(void)dealloc;
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)queryPredicate;
-(id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2 ;
-(id)isVisiblePredicate;
-(void)_updateQuery;
-(id)initWithScopes:(id)arg1 delegate:(id)arg2 ;
-(void)assertOnQueryQueue;
-(NSOperationQueue *)queryWorkerQueue;
-(void)_initialGatherFinished:(id)arg1 ;
-(void)_updateObservers:(id)arg1 ;
-(void)_queryUpdated:(id)arg1 ;
-(id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id*)arg2 ;
-(BOOL)afterInitialUpdate;
-(NSDate *)lastSnapshotDate;
-(void)setLastSnapshotDate:(NSDate *)arg1 ;
-(void)setAfterInitialUpdate:(BOOL)arg1 ;
-(void)setQueryWorkerQueue:(NSOperationQueue *)arg1 ;
@end

