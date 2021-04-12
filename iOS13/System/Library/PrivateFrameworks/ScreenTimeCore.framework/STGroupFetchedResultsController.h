/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@protocol STGroupFetchedResultsControllerDelegate;
@class NSFetchedResultsController, NSArray, NSString;

@interface STGroupFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate> {

	id<STGroupFetchedResultsControllerDelegate> _delegate;
	NSFetchedResultsController* _resultsController;
	NSArray* _resultsControllers;
	NSArray* _resultsRequests;
	unsigned long long _changeCounter;

}

@property (nonatomic,retain) NSFetchedResultsController * resultsController;                           //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,retain) NSArray * resultsControllers;                                             //@synthesize resultsControllers=_resultsControllers - In the implementation block
@property (nonatomic,retain) NSArray * resultsRequests;                                                //@synthesize resultsRequests=_resultsRequests - In the implementation block
@property (assign,nonatomic) unsigned long long changeCounter;                                         //@synthesize changeCounter=_changeCounter - In the implementation block
@property (assign,nonatomic,__weak) id<STGroupFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<STGroupFetchedResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<STGroupFetchedResultsControllerDelegate>)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)initWithResultsRequests:(id)arg1 cacheName:(id)arg2 managedObjectContext:(id)arg3 ;
-(NSArray *)resultsControllers;
-(NSArray *)resultsRequests;
-(unsigned long long)changeCounter;
-(void)setChangeCounter:(unsigned long long)arg1 ;
-(void)_evaluateCounter;
-(id)initWithContext:(id)arg1 resultsRequests:(id)arg2 ;
-(NSFetchedResultsController *)resultsController;
-(void)setResultsController:(NSFetchedResultsController *)arg1 ;
-(void)setResultsControllers:(NSArray *)arg1 ;
-(void)setResultsRequests:(NSArray *)arg1 ;
@end

