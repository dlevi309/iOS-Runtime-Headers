/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristics.framework/ActionPredictionHeuristics
*/

#import <libobjc.A.dylib/ATXInformationHeuristicRefreshTriggerDelegate.h>

@protocol OS_dispatch_queue, ATXInformationHeuristicsDelegate;
@class NSMutableSet, NSObject, _PASSimpleCoalescingTimer;

@interface ATXInformationHeuristics : NSObject <ATXInformationHeuristicRefreshTriggerDelegate> {

	NSMutableSet* _heuristicRefreshTriggers;
	NSMutableSet* _heuristicsPendingRefresh;
	NSObject*<OS_dispatch_queue> _queue;
	_PASSimpleCoalescingTimer* _coalescedRefreshOperation;
	id<ATXInformationHeuristicsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXInformationHeuristicsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_criteriaForRefreshJobOnDate:(id)arg1 ;
-(id)init;
-(id<ATXInformationHeuristicsDelegate>)delegate;
-(id)sourceIdentifierForHeuristicWithName:(id)arg1 ;
-(void)_refreshResultsForAllHeuristics:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<ATXInformationHeuristicsDelegate>)arg1 ;
-(void)refreshResultsForAllHeuristicsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshResultsForAllHeuristicsPendingRefreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)informationHeuristicRefreshTrigger:(id)arg1 didTriggerRefreshForHeuristics:(id)arg2 ;
-(id)getResultsFromHeuristicInterpreter:(id)arg1 ;
-(void)_setRefreshCTSJobForCriteria:(id)arg1 forHeuristics:(id)arg2 ;
-(BOOL)_refreshResultsForHeuristics:(id)arg1 ;
@end

