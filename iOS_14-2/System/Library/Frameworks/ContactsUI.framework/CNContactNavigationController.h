/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class CNContactListViewController, CNContactStyle, CNContactStore, CNContactViewController, NSNumber, CNAccountsAndGroupsViewController, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, UIKeyCommand, UIAlertController, CNUIUserActivityManager, CNContactListStyleApplier, NSArray, UIBarButtonItem, NSString;

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
	NSNumber* _shouldShowAccountsAndGroupsCachedValue;
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

@property (nonatomic,retain) CNContactStore * contactStore;                                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactViewController * reusableContactViewController;                          //@synthesize reusableContactViewController=_reusableContactViewController - In the implementation block
@property (nonatomic,retain) NSNumber * shouldShowAccountsAndGroupsCachedValue;                                //@synthesize shouldShowAccountsAndGroupsCachedValue=_shouldShowAccountsAndGroupsCachedValue - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsViewController * accountsAndGroupsViewController;              //@synthesize accountsAndGroupsViewController=_accountsAndGroupsViewController - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;                      //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) long long leftButtonBehavior;                                                     //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) long long rightButtonBehavior;                                                    //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                                   //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * presentedContactViewController;                  //@synthesize presentedContactViewController=_presentedContactViewController - In the implementation block
@property (nonatomic,retain) UIKeyCommand * addKeyCommand;                                                     //@synthesize addKeyCommand=_addKeyCommand - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * facebookContactsAlertController;                       //@synthesize facebookContactsAlertController=_facebookContactsAlertController - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                                            //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                                            //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (assign,nonatomic) BOOL hasPendingShowCard;                                                          //@synthesize hasPendingShowCard=_hasPendingShowCard - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * activityManager;                                        //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                              //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL ignoresMapsData;                                                             //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (assign,nonatomic) BOOL hideGroupsButton;                                                            //@synthesize hideGroupsButton=_hideGroupsButton - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                                 //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addContactBarButtonItem;                                        //@synthesize addContactBarButtonItem=_addContactBarButtonItem - In the implementation block
@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                                    //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCardEditing;                                                           //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCardDeletion;                                                          //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCanceling;                                                             //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                                  //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                       //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)moveViewController:(id)arg1 toParent:(id)arg2 ;
+(id)keyCommandForNewContact;
+(id)newContactFormatter;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(CNContactStore *)contactStore;
-(BOOL)shouldShowRightAddAndCancelButton;
-(void)setAllowsCanceling:(BOOL)arg1 ;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldShowGroupsButton;
-(void)checkForInfoContentWithContext:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIKeyCommand *)addKeyCommand;
-(id)userActivityRepresentingCurrentlyDisplayedContact;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(BOOL)arg2 ;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(id)nextResponderForContactListViewController:(id)arg1 ;
-(void)popToContactListAndSaveChanges:(BOOL)arg1 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(BOOL)shouldDisplayMeContactBanner;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(BOOL)arg3 ;
-(void)cancelSearch:(id)arg1 ;
-(void)setIgnoresMapsData:(BOOL)arg1 ;
-(CNContactStyle *)contactStyle;
-(id)initWithDataSource:(id)arg1 ;
-(UIBarButtonItem *)addContactBarButtonItem;
-(long long)leftButtonBehavior;
-(id<CNScheduler>)mainThreadScheduler;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)executeAddContact;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(id)addContactPresenter;
-(CNContactStoreDataSource *)nonServerDataSource;
-(CNAccountsAndGroupsViewController *)accountsAndGroupsViewController;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAddKeyCommand:(UIKeyCommand *)arg1 ;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(BOOL)arg3 ;
-(void)cancel:(id)arg1 ;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)accountsAndGroupsViewControllerDidUpdateSelection:(id)arg1 ;
-(id<CNContactDataSource>)dataSource;
-(id)checkShouldShowAccountsAndGroups;
-(void)presentGroupsViewController:(id)arg1 ;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(BOOL)arg3 environment:(id)arg4 allowsLargeTitles:(BOOL)arg5 ;
-(void)setActivityManager:(CNUIUserActivityManager *)arg1 ;
-(void)done:(id)arg1 ;
-(void)addContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(void)applicationDidResume;
-(void)_cnui_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canAddContacts;
-(void)addContact:(id)arg1 ;
-(void)setLeftButtonBehavior:(long long)arg1 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)setHasPendingShowCard:(BOOL)arg1 ;
-(void)setRightButtonBehavior:(long long)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(CNContactViewController *)reusableContactViewController;
-(BOOL)allowsCardDeletion;
-(id<CNScheduler>)backgroundScheduler;
-(void)notifyOtherFacebookContactsAlertDidSelectAction;
-(void)setPresentedContactViewController:(CNContactViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setFacebookContactsAlertController:(UIAlertController *)arg1 ;
-(BOOL)ignoresMapsData;
-(BOOL)shouldShowLeftCancelAndRightDoneButton;
-(UIAlertController *)facebookContactsAlertController;
-(void)setAllowsCardDeletion:(BOOL)arg1 ;
-(id)contactListViewController;
-(BOOL)hasPendingShowCard;
-(void)setAccountsAndGroupsViewController:(CNAccountsAndGroupsViewController *)arg1 ;
-(void)selectPreviousContact:(id)arg1 ;
-(BOOL)shouldShowLeftDoneAndRightAddButton;
-(void)setHideGroupsButton:(BOOL)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)startEditingPresentedContact;
-(void)checkShouldShowAccountsAndGroupsDidChange;
-(void)showCardForContactAfterIndexPath:(id)arg1 ;
-(void)showCardForContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)observeOtherFacebookContactsAlert;
-(void)setShouldShowAccountsAndGroupsCachedValue:(NSNumber *)arg1 ;
-(void)clearServerSearchIfNeeded:(id)arg1 ;
-(NSNumber *)shouldShowAccountsAndGroupsCachedValue;
-(void)showCardForContactIfPossible:(id)arg1 ;
-(CNContactViewController *)presentedContactViewController;
-(BOOL)allowsCardEditing;
-(BOOL)shouldFlipDirectionWhenChangingSelectionWithKey:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)allowsDone;
-(void)showCardForContactBeforeIndexPath:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)showCardForContact:(id)arg1 resetFilter:(BOOL)arg2 resetSearch:(BOOL)arg3 fallbackToFirstContact:(BOOL)arg4 scrollToContact:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)selectNextContact:(id)arg1 ;
-(BOOL)shouldShowAccountsAndGroups;
-(BOOL)shouldShowLeftCancelAndRightAddButton;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(void)setAllowsDone:(BOOL)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(BOOL)hideGroupsButton;
-(BOOL)hidesSearchableSources;
-(void)setAddContactBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)searchForString:(id)arg1 ;
-(BOOL)shouldShowRightAddButton;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(BOOL)allowsCanceling;
-(void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1 ;
-(BOOL)allowsContactBlocking;
-(id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2 ;
-(long long)rightButtonBehavior;
-(BOOL)shouldShowRightCancelButton;
-(id)initWithDataSource:(id)arg1 allowsLargeTitles:(BOOL)arg2 ;
-(void)dealloc;
-(void)setReusableContactViewController:(CNContactViewController *)arg1 ;
-(BOOL)isPresentedContactViewControllerVisible;
-(void)contactStyleCurrentStyleDidChange:(id)arg1 ;
@end

