/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol WFAutomationSummaryViewControllerDelegate;
@class WFConfiguredTriggerRecord, NSString, WFTrigger, WFWorkflow, NSArray, UITableView;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	id<WFAutomationSummaryViewControllerDelegate> _delegate;
	WFConfiguredTriggerRecord* _triggerRecord;
	NSString* _triggerIdentifier;
	WFTrigger* _trigger;
	WFWorkflow* _workflow;
	unsigned long long _mode;
	NSArray* _actionIcons;
	NSArray* _sections;
	UITableView* _tableView;

}

@property (nonatomic,readonly) WFConfiguredTriggerRecord * triggerRecord;                                //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerIdentifier;                                        //@synthesize triggerIdentifier=_triggerIdentifier - In the implementation block
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
-(unsigned long long)mode;
-(WFTrigger *)trigger;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<WFAutomationSummaryViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<WFAutomationSummaryViewControllerDelegate>)arg1 ;
-(WFWorkflow *)workflow;
-(void)updateUI;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(void)didTapDone:(id)arg1 ;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)actionIcons;
-(void)testAutomation;
-(id)infoForSection:(long long)arg1 ;
-(void)setActionIcons:(NSArray *)arg1 ;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(NSString *)triggerIdentifier;
-(id)initWithTrigger:(id)arg1 triggerIdentifier:(id)arg2 workflow:(id)arg3 mode:(unsigned long long)arg4 ;
-(void)loadActionDescriptionIcons;
-(void)enabledSwitchChanged:(id)arg1 ;
-(void)promptSwitchChanged:(id)arg1 ;
@end

