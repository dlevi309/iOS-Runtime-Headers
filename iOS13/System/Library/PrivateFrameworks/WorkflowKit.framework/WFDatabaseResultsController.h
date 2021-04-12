/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFDatabaseResultObserver.h>

@class WFDatabase, WFDatabaseResult, NSOrderedSet, NSMapTable;

@interface WFDatabaseResultsController : NSObject <WFDatabaseResultObserver> {

	WFDatabase* _database;
	WFDatabaseResult* _result;
	NSOrderedSet* _currentObjects;
	NSMapTable* _observers;
	/*^block*/id _block;
	WFDatabaseResultsSlice _slice;

}

@property (nonatomic,copy) NSOrderedSet * currentObjects;               //@synthesize currentObjects=_currentObjects - In the implementation block
@property (nonatomic,readonly) NSMapTable * observers;                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy,readonly) id block;                           //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                   //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) WFDatabaseResult * result;               //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) WFDatabaseResultsSlice slice;              //@synthesize slice=_slice - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(WFDatabaseResultsSlice)slice;
-(void)removeObserver:(id)arg1 ;
-(id)block;
-(WFDatabaseResult *)result;
-(WFDatabase *)database;
-(void)update;
-(NSMapTable *)observers;
-(void)notify;
-(void)setSlice:(WFDatabaseResultsSlice)arg1 ;
-(void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(id)initWithResult:(id)arg1 slice:(WFDatabaseResultsSlice)arg2 database:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)descriptorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfDescriptor:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4 ;
-(NSOrderedSet *)currentObjects;
-(void)setCurrentObjects:(NSOrderedSet *)arg1 ;
@end

