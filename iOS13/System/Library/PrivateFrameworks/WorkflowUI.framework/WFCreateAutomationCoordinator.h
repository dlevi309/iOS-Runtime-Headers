/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFAutomationTypeChooserViewControllerDelegate.h>
#import <libobjc.A.dylib/WFAutomationSelectTypeViewControllerDelegate.h>
#import <libobjc.A.dylib/WFTriggerConfigurationViewControllerDelegate.h>
#import <libobjc.A.dylib/WFTriggerComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/WFAutomationSummaryViewControllerDelegate.h>
#import <libobjc.A.dylib/HUTriggerEditorDelegate.h>

@protocol WFCreateAutomationCoordinatorDelegate;
@class UINavigationController, WFTriggerManager, NSString, WFDatabase, WFConfiguredTriggerRecord, WFWorkflow, WFHomeManager;

@interface WFCreateAutomationCoordinator : NSObject <WFAutomationTypeChooserViewControllerDelegate, WFAutomationSelectTypeViewControllerDelegate, WFTriggerConfigurationViewControllerDelegate, WFTriggerComposeViewControllerDelegate, WFAutomationSummaryViewControllerDelegate, HUTriggerEditorDelegate> {

	UINavigationController* _navigationController;
	id<WFCreateAutomationCoordinatorDelegate> _delegate;
	WFTriggerManager* _triggerManager;
	NSString* _triggerID;
	WFDatabase* _database;
	WFConfiguredTriggerRecord* _triggerRecord;
	WFWorkflow* _workflow;
	WFHomeManager* _homeManager;

}

@property (nonatomic,retain) WFTriggerManager * triggerManager;                                      //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                          //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSString * triggerID;                                                   //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,retain) WFDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) WFConfiguredTriggerRecord * triggerRecord;                              //@synthesize triggerRecord=_triggerRecord - In the implementation block
@property (nonatomic,retain) WFWorkflow * workflow;                                                  //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) WFHomeManager * homeManager;                                          //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFCreateAutomationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFCreateAutomationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<WFCreateAutomationCoordinatorDelegate>)arg1 ;
-(void)cancel;
-(void)finish;
-(void)setDatabase:(WFDatabase *)arg1 ;
-(WFDatabase *)database;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(WFHomeManager *)homeManager;
-(void)setTriggerID:(NSString *)arg1 ;
-(NSString *)triggerID;
-(WFTriggerManager *)triggerManager;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)setTriggerManager:(WFTriggerManager *)arg1 ;
-(void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2 ;
-(WFConfiguredTriggerRecord *)triggerRecord;
-(void)setTriggerRecord:(WFConfiguredTriggerRecord *)arg1 ;
-(void)triggerComposeViewController:(id)arg1 didFinishWithWorkflow:(id)arg2 ;
-(void)triggerConfigurationViewController:(id)arg1 didFinishWithTrigger:(id)arg2 ;
-(void)selectTypeViewController:(id)arg1 didChooseTriggerClass:(Class)arg2 ;
-(void)automationTypeChooser:(id)arg1 didChooseAutomationType:(unsigned long long)arg2 ;
-(id)initWithDatabase:(id)arg1 homeManager:(id)arg2 ;
-(void)startAtStep:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)buildViewControllerForAutomationTypeChooserStepWithCompletion:(/*^block*/id)arg1 ;
-(void)buildViewControllerForPersonalTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)buildViewControllerForHomeTriggerChooserStepWithBackButtonAction:(unsigned long long)arg1 hostingViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openHomeApp;
@end

