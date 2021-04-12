/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSFetchRequest, NSPersistentHistoryChangeRequest;

@interface NSSQLPersistentHistoryChangeRequestContext : NSSQLStoreRequestContext {

	NSFetchRequest* _fetchRequest;
	BOOL _shouldUseBatches;

}

@property (nonatomic,readonly) NSPersistentHistoryChangeRequest * request; 
@property (nonatomic,readonly) BOOL shouldUseBatches;                                   //@synthesize shouldUseBatches=_shouldUseBatches - In the implementation block
-(void)dealloc;
-(NSPersistentHistoryChangeRequest *)request;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(void)executePrologue;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(id)fetchRequestDescribingChanges;
-(BOOL)shouldUseBatches;
-(id)_transactionFromResult:(id)arg1 withChanges:(id)arg2 ;
-(id)_changeFromResult:(id)arg1 withTransaction:(id)arg2 ;
-(id)_processResult:(id)arg1 ;
-(id)createCountRequestContextForChanges;
-(id)fetchRequestContextForChanges;
-(id)createRequestContextForChangesWithTransactionIDs:(id)arg1 ;
-(id)createDeleteTransactionsRequestContext;
@end

