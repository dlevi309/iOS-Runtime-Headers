/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <libobjc.A.dylib/WFAppSearchViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFTriggerMultiSelectCellDelegate.h>

@class NSMutableOrderedSet, NSMutableArray, UITableView, NSArray, NSString;

@interface WFAppInFocusTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFAppSearchViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate> {

	NSMutableOrderedSet* _selectedApps;
	NSMutableArray* _displayNameOfSelectedApps;
	UITableView* _tableView;
	NSArray* _sections;

}

@property (nonatomic,retain) NSMutableOrderedSet * selectedApps;                      //@synthesize selectedApps=_selectedApps - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayNameOfSelectedApps;              //@synthesize displayNameOfSelectedApps=_displayNameOfSelectedApps - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                    //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)appSearchViewController:(id)arg1 didFinishWithApps:(id)arg2 ;
-(void)appSearchViewControllerDidCancel:(id)arg1 ;
-(NSMutableOrderedSet *)selectedApps;
-(void)setSelectedApps:(NSMutableOrderedSet *)arg1 ;
-(void)cell:(id)arg1 didSelectOptionWithLeftViewSelected:(BOOL)arg2 rightViewSelected:(BOOL)arg3 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)presentNavControllerWithRootViewController:(id)arg1 ;
-(void)updateDisplayNameOfSelectedApps;
-(NSMutableArray *)displayNameOfSelectedApps;
-(void)setDisplayNameOfSelectedApps:(NSMutableArray *)arg1 ;
@end

