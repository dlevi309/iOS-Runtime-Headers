/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol WFAutomationSummaryViewControllerDelegate;
@class WFConfiguredTriggerRecord, WFTrigger, WFWorkflow, NSArray, UITableView, NSString;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<WFAutomationSummaryViewControllerDelegate> _delegate;
	WFConfiguredTriggerRecord* _triggerRecord;
	WFTrigger* _trigger;
	WFWorkflow* _workflow;
	unsigned long long _mode;
	NSArray* _actionIcons;
	NSArray* _sections;
	UITableView* _tableView;

}

@property (nonatomic,readonly) WFConfiguredTriggerRecord * triggerRecord;                                //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,readonly) WFTrigger * trigger;                                                      //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                                      //@synthesize workflow=_workflow - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSArray * actionIcons;                                                      //@synthesize actionIcons=_actionIcons - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                                  //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationSummaryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFAutomationSummaryViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAutomationSummaryViewControllerDelegate>)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)isModalInPresentation;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(WFTrigger *)trigger;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)updateUI;
-(void)didTapDone:(id)arg1 ;
-(id)infoForSection:(long long)arg1 ;
-(void)setActionIcons:(NSArray *)arg1 ;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(id)initWithTrigger:(id)arg1 workflow:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)loadActionDescriptionIcons;
-(void)testAutomation;
-(void)enabledSwitchChanged:(id)arg1 ;
-(void)promptSwitchChanged:(id)arg1 ;
-(NSArray *)actionIcons;
@end

