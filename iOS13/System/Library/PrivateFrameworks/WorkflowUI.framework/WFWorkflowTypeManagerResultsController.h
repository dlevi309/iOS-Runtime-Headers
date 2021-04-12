/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowKit/WFDatabaseTableViewResultsController.h>

@class NSString;

@interface WFWorkflowTypeManagerResultsController : WFDatabaseTableViewResultsController {

	NSString* _workflowType;

}

@property (nonatomic,copy,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(NSString *)workflowType;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithResults:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4 withWorkflowType:(id)arg5 ;
-(void)_updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
@end

