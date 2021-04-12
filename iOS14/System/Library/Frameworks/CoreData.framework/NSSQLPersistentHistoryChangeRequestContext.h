/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_changeFromResult:(id)arg1 withTransaction:(id)arg2 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(id)fetchRequestDescribingChanges;
-(BOOL)isWritingRequest;
-(id)fetchRequestContextForChanges;
-(id)createCountRequestContextForChanges;
-(id)_transactionFromResult:(id)arg1 withChanges:(id)arg2 ;
-(NSPersistentHistoryChangeRequest *)request;
-(void)executePrologue;
-(id)_processResult:(id)arg1 ;
-(BOOL)executeRequestUsingConnection:(id)arg1 ;
-(id)createDeleteTransactionsRequestContext;
-(BOOL)shouldUseBatches;
-(id)createRequestContextForChangesWithTransactionIDs:(id)arg1 ;
-(void)dealloc;
@end

