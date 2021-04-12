/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol WFAutomationSelectTypeViewControllerDelegate;
@class WFTriggerManager, NSArray, NSString;

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	id<WFAutomationSelectTypeViewControllerDelegate> _delegate;
	WFTriggerManager* _triggerManager;
	NSArray* _tableContent;

}

@property (nonatomic,readonly) WFTriggerManager * triggerManager;                                           //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) NSArray * tableContent;                                                      //@synthesize tableContent=_tableContent - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationSelectTypeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildTableContent;
+(id)sortedTriggerGroupIdentifiers;
+(id)triggerGroupTitleForIdentifier:(id)arg1 ;
+(id)allTriggersByGroupIdentifier;
+(id)allKnownTriggersSortedAsInUI;
-(id<WFAutomationSelectTypeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFAutomationSelectTypeViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)tableContent;
-(WFTriggerManager *)triggerManager;
-(id)initWithTriggerManager:(id)arg1 ;
-(Class)triggerSourceClassForIndexPath:(id)arg1 ;
@end

