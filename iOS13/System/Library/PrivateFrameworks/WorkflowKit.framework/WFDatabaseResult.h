/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFDatabaseBackingStore, OS_dispatch_queue;
@class NSArray, NSPredicate, NSObject, NSHashTable, WFDatabase;

@interface WFDatabaseResult : NSObject {

	id<WFDatabaseBackingStore> _backingStore;
	NSArray* _descriptors;
	NSPredicate* _searchPredicate;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observersTable;

}

@property (nonatomic,readonly) id<WFDatabaseBackingStore> backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observersTable;                         //@synthesize observersTable=_observersTable - In the implementation block
@property (nonatomic,readonly) NSArray * observers; 
@property (nonatomic,readonly) WFDatabase * database; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * descriptors;                                //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
-(unsigned long long)count;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(WFDatabase *)database;
-(void)invalidateCache;
-(NSArray *)observers;
-(NSArray *)descriptors;
-(BOOL)performFetch:(id*)arg1 ;
-(id<WFDatabaseBackingStore>)backingStore;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)searchPredicate;
-(id)_initWithBackingStore:(id)arg1 ;
-(id)_performFetch:(id*)arg1 ;
-(NSHashTable *)observersTable;
@end

