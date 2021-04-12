/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class NSMutableOrderedSet, NSHashTable, NSArray;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver> {

	/*^block*/id _demoResetBlock;
	NSMutableOrderedSet* _runningWorkflowControllerSet;
	NSHashTable* _workflowControllerAssertionTable;

}

@property (nonatomic,readonly) NSMutableOrderedSet * runningWorkflowControllerSet;              //@synthesize runningWorkflowControllerSet=_runningWorkflowControllerSet - In the implementation block
@property (nonatomic,readonly) NSHashTable * workflowControllerAssertionTable;                  //@synthesize workflowControllerAssertionTable=_workflowControllerAssertionTable - In the implementation block
@property (nonatomic,readonly) NSArray * runningWorkflows; 
@property (nonatomic,readonly) NSArray * runningWorkflowControllers; 
@property (nonatomic,copy) id demoResetBlock;                                                   //@synthesize demoResetBlock=_demoResetBlock - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)workflowControllerDidStart:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)updateRunningWorkflowCount;
-(void)updateAssertions;
-(NSArray *)runningWorkflowControllers;
-(NSArray *)runningWorkflows;
-(id)demoResetBlock;
-(void)setDemoResetBlock:(id)arg1 ;
-(NSMutableOrderedSet *)runningWorkflowControllerSet;
-(NSHashTable *)workflowControllerAssertionTable;
@end

