/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol WFWorkflowPickerViewControllerDelegate, WFVariableProvider;
@class NSArray, WFVariable, NSString;

@interface WFWorkflowPickerViewController : UITableViewController <UISearchResultsUpdating> {

	id<WFWorkflowPickerViewControllerDelegate> _delegate;
	NSArray* _workflowNames;
	id<WFVariableProvider> _variableProvider;
	WFVariable* _selectedVariable;
	NSString* _selectedWorkflowName;
	NSArray* _workflows;
	NSArray* _variables;
	NSArray* _filteredWorkflows;
	NSArray* _filteredVariables;

}

@property (nonatomic,retain) NSArray * workflows;                                                     //@synthesize workflows=_workflows - In the implementation block
@property (nonatomic,retain) NSArray * variables;                                                     //@synthesize variables=_variables - In the implementation block
@property (nonatomic,retain) NSArray * filteredWorkflows;                                             //@synthesize filteredWorkflows=_filteredWorkflows - In the implementation block
@property (nonatomic,retain) NSArray * filteredVariables;                                             //@synthesize filteredVariables=_filteredVariables - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * workflowNames;                                          //@synthesize workflowNames=_workflowNames - In the implementation block
@property (nonatomic,readonly) id<WFVariableProvider> variableProvider;                               //@synthesize variableProvider=_variableProvider - In the implementation block
@property (nonatomic,retain) WFVariable * selectedVariable;                                           //@synthesize selectedVariable=_selectedVariable - In the implementation block
@property (nonatomic,copy) NSString * selectedWorkflowName;                                           //@synthesize selectedWorkflowName=_selectedWorkflowName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFWorkflowPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowPickerViewControllerDelegate>)arg1 ;
-(void)cancel;
-(void)loadView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(NSArray *)variables;
-(id<WFVariableProvider>)variableProvider;
-(NSArray *)workflows;
-(void)setWorkflows:(NSArray *)arg1 ;
-(WFVariable *)selectedVariable;
-(void)setSelectedVariable:(WFVariable *)arg1 ;
-(id)initWithWorkflowNames:(id)arg1 variableProvider:(id)arg2 allowedVariableTypes:(id)arg3 ;
-(id)workflowIconForWorkflow:(id)arg1 ;
-(void)reloadSearchResults;
-(NSArray *)workflowNames;
-(NSString *)selectedWorkflowName;
-(void)setSelectedWorkflowName:(NSString *)arg1 ;
-(void)setVariables:(NSArray *)arg1 ;
-(NSArray *)filteredWorkflows;
-(void)setFilteredWorkflows:(NSArray *)arg1 ;
-(NSArray *)filteredVariables;
-(void)setFilteredVariables:(NSArray *)arg1 ;
@end

