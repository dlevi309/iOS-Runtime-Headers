/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol WFWorkflowConflictViewControllerDelegate;
@class WFWorkflowConflict, UIBarButtonItem, WFWorkflow, NSString;

@interface WFWorkflowConflictViewController : UITableViewController <UINavigationControllerDelegate> {

	id<WFWorkflowConflictViewControllerDelegate> _delegate;
	WFWorkflowConflict* _conflict;
	UIBarButtonItem* _keepItem;
	WFWorkflow* _workflowBeingPreviewed;

}

@property (assign,nonatomic,__weak) UIBarButtonItem * keepItem;                                         //@synthesize keepItem=_keepItem - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflowBeingPreviewed;                                       //@synthesize workflowBeingPreviewed=_workflowBeingPreviewed - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowConflictViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFWorkflowConflict * conflict;                                           //@synthesize conflict=_conflict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)cancelPressed;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id<WFWorkflowConflictViewControllerDelegate>)delegate;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(WFWorkflowConflict *)conflict;
-(void)setDelegate:(id<WFWorkflowConflictViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithConflict:(id)arg1 ;
-(void)keepPressed;
-(void)updateKeepButton;
-(id)workflowForRow:(unsigned long long)arg1 ;
-(UIBarButtonItem *)keepItem;
-(void)setKeepItem:(UIBarButtonItem *)arg1 ;
-(WFWorkflow *)workflowBeingPreviewed;
-(void)setWorkflowBeingPreviewed:(WFWorkflow *)arg1 ;
@end

