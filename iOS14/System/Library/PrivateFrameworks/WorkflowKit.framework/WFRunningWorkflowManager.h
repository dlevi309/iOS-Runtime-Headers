/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)runningWorkflowControllers;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)workflowControllerDidStart:(id)arg1 ;
-(void)workflowControllerDidStop:(id)arg1 ;
-(void)updateRunningWorkflowCount;
-(void)updateAssertions;
-(NSArray *)runningWorkflows;
-(id)demoResetBlock;
-(void)setDemoResetBlock:(id)arg1 ;
-(NSMutableOrderedSet *)runningWorkflowControllerSet;
-(NSHashTable *)workflowControllerAssertionTable;
@end

