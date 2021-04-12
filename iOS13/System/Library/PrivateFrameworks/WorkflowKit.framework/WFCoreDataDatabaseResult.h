/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseResult.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSString;

@interface WFCoreDataDatabaseResult : WFDatabaseResult <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _resultsController;

}

@property (nonatomic,readonly) NSFetchedResultsController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(NSFetchedResultsController *)resultsController;
-(id)initWithBackingStore:(id)arg1 fetchRequest:(id)arg2 managedObjectContext:(id)arg3 ;
@end

