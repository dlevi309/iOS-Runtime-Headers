/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AAUIContactsSearchDelegate.h>

@protocol FAPickInviteeDelegate;
@class ACAccount, ACAccountStore, FAContactsSearchController, NSArray, UIView, UITableView, UITextField, UILabel, UIButton, CNMonogrammer, UIBarButtonItem, CNContactStore, NSString;

@interface FAFamilyPickInviteeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUIContactsSearchDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	FAContactsSearchController* _contactsSearchController;
	NSArray* _searchResults;
	UIView* _separator;
	UITableView* _resultsTableView;
	UIView* _container;
	UIView* _contactSearchBarContainer;
	UITextField* _contactSearchBar;
	UILabel* _toLabel;
	UILabel* _instructionsLabel;
	UILabel* _childAccountLabel;
	UIButton* _createChildAccountButton;
	CNMonogrammer* _monogrammer;
	UIBarButtonItem* _nextButton;
	CNContactStore* _contactStore;
	id<FAPickInviteeDelegate> _delegate;
	NSString* _searchQuery;
	NSString* _inviteeEmail;
	NSString* _inviteeShortName;
	NSString* _inviteeCompositeName;
	NSString* _addFamilyMemberInstructions;
	NSString* _createChildAccountButtonTitle;
	NSString* _createChildAccountInstructions;

}

@property (assign,nonatomic,__weak) id<FAPickInviteeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * searchQuery;                               //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) NSString * inviteeEmail;                              //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,readonly) NSString * inviteeShortName;                          //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeCompositeName;                      //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * addFamilyMemberInstructions;                   //@synthesize addFamilyMemberInstructions=_addFamilyMemberInstructions - In the implementation block
@property (nonatomic,copy) NSString * createChildAccountButtonTitle;                 //@synthesize createChildAccountButtonTitle=_createChildAccountButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * createChildAccountInstructions;                //@synthesize createChildAccountInstructions=_createChildAccountInstructions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FAPickInviteeDelegate>)delegate;
-(void)setDelegate:(id<FAPickInviteeDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSString *)searchQuery;
-(NSString *)inviteeEmail;
-(NSString *)inviteeCompositeName;
-(NSString *)inviteeShortName;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(BOOL)arg2 ;
-(void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)_createChildAccountButtonWasTapped:(id)arg1 ;
-(void)_nextButtonWasTapped:(id)arg1 ;
-(void)_updateNextButtonEnabledState;
-(void)_hideSearchResults;
-(id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2 ;
-(id)_imageForPersonWithRecordID:(unsigned)arg1 ;
-(NSString *)addFamilyMemberInstructions;
-(void)setAddFamilyMemberInstructions:(NSString *)arg1 ;
-(NSString *)createChildAccountButtonTitle;
-(void)setCreateChildAccountButtonTitle:(NSString *)arg1 ;
-(NSString *)createChildAccountInstructions;
-(void)setCreateChildAccountInstructions:(NSString *)arg1 ;
@end

