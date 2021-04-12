/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFTriggerTextConfigurationViewControllerDelegate.h>
#import <libobjc.A.dylib/WFEmailContactsTableViewControllerDelegate.h>

@class UITableView, NSArray, NSMutableSet, CSSearchQuery, NSString;

@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerTextConfigurationViewControllerDelegate, WFEmailContactsTableViewControllerDelegate> {

	BOOL _showingAccounts;
	BOOL _showingRecipients;
	BOOL _showingAttachments;
	UITableView* _tableView;
	NSArray* _sections;
	NSMutableSet* _allRecipients;
	NSMutableSet* _allSenders;
	NSArray* _allAccounts;
	NSMutableSet* _allAccountsUsernames;
	CSSearchQuery* _query;

}

@property (nonatomic,retain) UITableView * tableView;                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSMutableSet * allRecipients;                     //@synthesize allRecipients=_allRecipients - In the implementation block
@property (nonatomic,retain) NSMutableSet * allSenders;                        //@synthesize allSenders=_allSenders - In the implementation block
@property (nonatomic,retain) NSArray * allAccounts;                            //@synthesize allAccounts=_allAccounts - In the implementation block
@property (nonatomic,retain) NSMutableSet * allAccountsUsernames;              //@synthesize allAccountsUsernames=_allAccountsUsernames - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                            //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL showingAccounts;                             //@synthesize showingAccounts=_showingAccounts - In the implementation block
@property (assign,nonatomic) BOOL showingRecipients;                           //@synthesize showingRecipients=_showingRecipients - In the implementation block
@property (assign,nonatomic) BOOL showingAttachments;                          //@synthesize showingAttachments=_showingAttachments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSSearchQuery *)query;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)startQuery:(id)arg1 ;
-(void)updateUI;
-(id)supportedAccountTypeIdentifiers;
-(NSMutableSet *)allRecipients;
-(NSArray *)allAccounts;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)presentNavControllerWithRootViewController:(id)arg1 ;
-(void)didSelectContacts:(id)arg1 ofType:(unsigned long long)arg2 ;
-(void)triggerTextConfigurationViewController:(id)arg1 didSelectText:(id)arg2 ;
-(void)triggerTextConfigurationViewControllerDidCancel:(id)arg1 ;
-(void)setUpAccounts;
-(BOOL)additionalSectionRowWithinAccounts:(long long)arg1 ;
-(BOOL)additionalSectionRowWithinRecipient:(long long)arg1 ;
-(long long)firstRowOfRecipient;
-(long long)firstRowOfHasAttachment;
-(BOOL)additionalSectionRowWithinHasAttachment:(long long)arg1 ;
-(id)displayForSelectedContacts:(id)arg1 ;
-(id)accountFromUsername:(id)arg1 ;
-(void)setAllRecipients:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allSenders;
-(void)setAllSenders:(NSMutableSet *)arg1 ;
-(void)setAllAccounts:(NSArray *)arg1 ;
-(NSMutableSet *)allAccountsUsernames;
-(void)setAllAccountsUsernames:(NSMutableSet *)arg1 ;
-(BOOL)showingAccounts;
-(void)setShowingAccounts:(BOOL)arg1 ;
-(BOOL)showingRecipients;
-(void)setShowingRecipients:(BOOL)arg1 ;
-(BOOL)showingAttachments;
-(void)setShowingAttachments:(BOOL)arg1 ;
@end

