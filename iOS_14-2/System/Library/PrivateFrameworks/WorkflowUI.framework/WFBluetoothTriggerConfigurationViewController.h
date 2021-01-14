/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <libobjc.A.dylib/WFTriggerTableViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, UITableView, NSString;

@interface WFBluetoothTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _allDevices;
	UITableView* _tableView;
	NSArray* _sections;

}

@property (nonatomic,copy) NSArray * allDevices;                    //@synthesize allDevices=_allDevices - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)allDevices;
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
-(void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(BOOL)arg2 orSelectedOptions:(id)arg3 ;
-(void)triggerTableViewControllerDidCancel:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)presentNavControllerWithRootViewController:(id)arg1 ;
-(void)fetchBluetoothDevices;
-(void)finishWithDevices:(id)arg1 ;
-(void)setAllDevices:(NSArray *)arg1 ;
@end

