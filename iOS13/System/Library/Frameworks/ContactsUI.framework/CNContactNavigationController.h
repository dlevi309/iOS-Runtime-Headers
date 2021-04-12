/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegateInternal.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAccountsAndGroupsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>

@protocol CNScheduler;
@class CNContactListViewController, CNContactStyle, CNContactStore, CNContactViewController, CNAccountsAndGroupsViewController, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, UIKeyCommand, UIAlertController, CNUIUserActivityManager, CNContactListStyleApplier, NSArray, UIBarButtonItem, NSString;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter> {

	CNContactListViewController* _contactListViewController;
	BOOL _allowsCardEditing;
	BOOL _allowsCardDeletion;
	BOOL _allowsCanceling;
	BOOL _allowsDone;
	BOOL _allowsContactBlocking;
	BOOL _hasPendingShowCard;
	BOOL _ignoresMapsData;
	BOOL _hideGroupsButton;
	CNContactStyle* _contactStyle;
	CNContactStore* _contactStore;
	CNContactViewController* _reusableContactViewController;
	CNAccountsAndGroupsViewController* _accountsAndGroupsViewController;
	CNAccountsAndGroupsDataSource* _accountsAndGroupsDataSource;
	long long _leftButtonBehavior;
	long long _rightButtonBehavior;
	CNContactStoreDataSource* _nonServerDataSource;
	CNContactViewController* _presentedContactViewController;
	UIKeyCommand* _addKeyCommand;
	UIAlertController* _facebookContactsAlertController;
	id<CNScheduler> _backgroundScheduler;
	id<CNScheduler> _mainThreadScheduler;
	CNUIUserActivityManager* _activityManager;
	CNContactListStyleApplier* _contactListStyleApplier;
	NSArray* _prohibitedPropertyKeys;
	UIBarButtonItem* _addContactBarButtonItem;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                           //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactViewController * reusableContactViewController;                                 //@synthesize reusableContactViewController=_reusableContactViewController - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsViewController * accountsAndGroupsViewController;              //@synthesize accountsAndGroupsViewController=_accountsAndGroupsViewController - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;                             //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) long long leftButtonBehavior;                                                            //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) long long rightButtonBehavior;                                                           //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                                          //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * presentedContactViewController;                         //@synthesize presentedContactViewController=_presentedContactViewController - In the implementation block
@property (nonatomic,retain) UIKeyCommand * addKeyCommand;                                                            //@synthesize addKeyCommand=_addKeyCommand - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * facebookContactsAlertController;                              //@synthesize facebookContactsAlertController=_facebookContactsAlertController - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                                                   //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                                                   //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (assign,nonatomic) BOOL hasPendingShowCard;                                                                 //@synthesize hasPendingShowCard=_hasPendingShowCard - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * activityManager;                                               //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                                     //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL ignoresMapsData;                                                                    //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (assign,nonatomic) BOOL hideGroupsButton;                                                                   //@synthesize hideGroupsButton=_hideGroupsButton - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                                        //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addContactBarButtonItem;                                               //@synthesize addContactBarButtonItem=_addContactBarButtonItem - In the implementation block
@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                                           //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCardEditing;                                                                  //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCardDeletion;                                                                 //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCanceling;                                                                    //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                                         //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                              //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyCommandForNewContact;
+(id)newContactFormatter;
-(void)dealloc;
-(id)initWithDataSource:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNContactDataSource>)dataSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)applicationDidResume;
-(void)done:(id)arg1 ;
-(id<CNScheduler>)mainThreadScheduler;
-(id<CNScheduler>)backgroundScheduler;
-(NSArray *)prohibitedPropertyKeys;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(UIBarButtonItem *)addContactBarButtonItem;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(BOOL)allowsDone;
-(void)setAllowsDone:(BOOL)arg1 ;
-(CNContactStyle *)contactStyle;
-(BOOL)allowsContactBlocking;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(BOOL)arg3 ;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(id)nextResponderForContactListViewController:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 allowsLargeTitles:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(BOOL)arg3 environment:(id)arg4 allowsLargeTitles:(BOOL)arg5 ;
-(void)updateContactStyle:(id)arg1 ;
-(id)contactListViewController;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldShowGroupsButton;
-(BOOL)shouldShowLeftCancelAndRightDoneButton;
-(BOOL)shouldShowLeftCancelAndRightAddButton;
-(BOOL)shouldShowLeftDoneAndRightAddButton;
-(BOOL)shouldShowRightAddAndCancelButton;
-(BOOL)shouldShowRightCancelButton;
-(BOOL)shouldShowRightAddButton;
-(BOOL)canAddContacts;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)presentGroupsViewController:(id)arg1 ;
-(id)addContactPresenter;
-(void)addContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)showCardForContact:(id)arg1 resetFilter:(BOOL)arg2 resetSearch:(BOOL)arg3 fallbackToFirstContact:(BOOL)arg4 scrollToContact:(BOOL)arg5 animated:(BOOL)arg6 ;
-(id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2 ;
-(void)showCardForContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)_cnui_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)showCardForContactAfterIndexPath:(id)arg1 ;
-(void)showCardForContactBeforeIndexPath:(id)arg1 ;
-(BOOL)isPresentedContactViewControllerVisible;
-(void)showCardForContactIfPossible:(id)arg1 ;
-(void)checkForInfoContentWithContext:(id)arg1 ;
-(void)popToContactListAndSaveChanges:(BOOL)arg1 ;
-(void)searchForString:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)executeAddContact;
-(void)selectNextContact:(id)arg1 ;
-(void)selectPreviousContact:(id)arg1 ;
-(void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(BOOL)arg2 ;
-(void)observeOtherFacebookContactsAlert;
-(void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1 ;
-(void)notifyOtherFacebookContactsAlertDidSelectAction;
-(id)userActivityRepresentingCurrentlyDisplayedContact;
-(BOOL)allowsCardEditing;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(BOOL)allowsCardDeletion;
-(void)setAllowsCardDeletion:(BOOL)arg1 ;
-(BOOL)allowsCanceling;
-(void)setAllowsCanceling:(BOOL)arg1 ;
-(CNContactViewController *)reusableContactViewController;
-(void)setReusableContactViewController:(CNContactViewController *)arg1 ;
-(CNAccountsAndGroupsViewController *)accountsAndGroupsViewController;
-(void)setAccountsAndGroupsViewController:(CNAccountsAndGroupsViewController *)arg1 ;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(long long)leftButtonBehavior;
-(void)setLeftButtonBehavior:(long long)arg1 ;
-(long long)rightButtonBehavior;
-(void)setRightButtonBehavior:(long long)arg1 ;
-(CNContactStoreDataSource *)nonServerDataSource;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(CNContactViewController *)presentedContactViewController;
-(void)setPresentedContactViewController:(CNContactViewController *)arg1 ;
-(UIKeyCommand *)addKeyCommand;
-(void)setAddKeyCommand:(UIKeyCommand *)arg1 ;
-(UIAlertController *)facebookContactsAlertController;
-(void)setFacebookContactsAlertController:(UIAlertController *)arg1 ;
-(BOOL)hasPendingShowCard;
-(void)setHasPendingShowCard:(BOOL)arg1 ;
-(void)setActivityManager:(CNUIUserActivityManager *)arg1 ;
-(BOOL)ignoresMapsData;
-(void)setIgnoresMapsData:(BOOL)arg1 ;
-(BOOL)hideGroupsButton;
-(void)setHideGroupsButton:(BOOL)arg1 ;
-(void)setAddContactBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

