/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDelegate.h>
#import <libobjc.A.dylib/WFWorkflowWizardNameCellDataSource.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>

@protocol WFAddToHomeScreenViewControllerDelegate;
@class WFWorkflow, WFHomeScreenIcon, WFAddToHomeIconPreviewCell, WFWorkflowWizardNameCell, NSString;

@interface WFAddToHomeScreenViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, WFWorkflowWizardNameCellDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate> {

	id<WFAddToHomeScreenViewControllerDelegate> _delegate;
	WFWorkflow* _workflow;
	WFHomeScreenIcon* _icon;
	WFAddToHomeIconPreviewCell* _previewCell;
	WFWorkflowWizardNameCell* _editorCell;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                                    //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) WFHomeScreenIcon * icon;                                                  //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFAddToHomeIconPreviewCell * previewCell;                                 //@synthesize previewCell=_previewCell - In the implementation block
@property (nonatomic,retain) WFWorkflowWizardNameCell * editorCell;                                    //@synthesize editorCell=_editorCell - In the implementation block
@property (assign,nonatomic,__weak) id<WFAddToHomeScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<WFAddToHomeScreenViewControllerDelegate>)delegate;
-(WFHomeScreenIcon *)icon;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setIcon:(WFHomeScreenIcon *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<WFAddToHomeScreenViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithWorkflow:(id)arg1 ;
-(id)iconButtonDropdownMenuInWorkflowWizardNameCell:(id)arg1 ;
-(void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2 ;
-(void)registerCells;
-(void)presentPickerControllerWithSourceType:(long long)arg1 ;
-(void)didTapAdd;
-(WFAddToHomeIconPreviewCell *)previewCell;
-(void)setPreviewCell:(WFAddToHomeIconPreviewCell *)arg1 ;
-(WFWorkflowWizardNameCell *)editorCell;
-(void)setEditorCell:(WFWorkflowWizardNameCell *)arg1 ;
@end

