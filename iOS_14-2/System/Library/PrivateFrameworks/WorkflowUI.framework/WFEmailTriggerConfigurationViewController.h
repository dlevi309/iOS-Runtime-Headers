/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFRecipientFieldViewControllerDelegate.h>
#import <libobjc.A.dylib/WFTriggerTableViewControllerDelegate.h>

@class UITableView, NSArray, UIViewController, NSString;

@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate, WFTriggerTableViewControllerDelegate> {

	BOOL _showingAccounts;
	BOOL _showingRecipients;
	UITableView* _tableView;
	NSArray* _sections;
	NSArray* _allAccounts;
	UIViewController* _senderFieldViewController;
	UIViewController* _recipientFieldViewController;

}

@property (nonatomic,retain) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSArray * allAccounts;                                               //@synthesize allAccounts=_allAccounts - In the implementation block
@property (assign,nonatomic) BOOL showingAccounts;                                                //@synthesize showingAccounts=_showingAccounts - In the implementation block
@property (assign,nonatomic) BOOL showingRecipients;                                              //@synthesize showingRecipients=_showingRecipients - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * senderFieldViewController;                 //@synthesize senderFieldViewController=_senderFieldViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * recipientFieldViewController;              //@synthesize recipientFieldViewController=_recipientFieldViewController - In the implementation block
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
-(NSArray *)allAccounts;
-(void)updateUI;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)supportedAccountTypeIdentifiers;
-(void)recipientViewControllerDidFinish:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(BOOL)arg2 orSelectedOptions:(id)arg3 ;
-(void)triggerTableViewControllerDidCancel:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)setUpAccounts;
-(void)presentNavControllerWithRootViewController:(id)arg1 ;
-(void)showSubjectContainsAlert;
-(id)accountFromAccountIdentifier:(id)arg1 ;
-(void)setAllAccounts:(NSArray *)arg1 ;
-(BOOL)showingAccounts;
-(void)setShowingAccounts:(BOOL)arg1 ;
-(BOOL)showingRecipients;
-(void)setShowingRecipients:(BOOL)arg1 ;
-(UIViewController *)senderFieldViewController;
-(void)setSenderFieldViewController:(UIViewController *)arg1 ;
-(UIViewController *)recipientFieldViewController;
-(void)setRecipientFieldViewController:(UIViewController *)arg1 ;
@end

