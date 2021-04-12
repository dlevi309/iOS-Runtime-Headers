/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowUI/WFActionSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFAccountLoginViewControllerDelegate.h>

@class UITableView, NSArray, NSString;

@interface WFAccountListViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate, WFAccountLoginViewControllerDelegate> {

	Class _accountClass;
	UITableView* _tableView;
	NSArray* _accounts;

}

@property (nonatomic,readonly) Class accountClass;                          //@synthesize accountClass=_accountClass - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * accounts;                              //@synthesize accounts=_accounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)accounts;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(Class)accountClass;
-(id)initWithAction:(id)arg1 definition:(id)arg2 ;
-(void)loginViewController:(id)arg1 didLoginWithAccount:(id)arg2 ;
-(void)loginViewControllerDidCancel:(id)arg1 ;
@end

