/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol CNContactViewControllerDelegate, CNContactContentViewController, CNContactViewControllerPPTDelegate;
@class CNContact, NSArray, CNContactStore, CNGroup, CNContainer, NSString, CNContactContentViewController, _UIAccessDeniedView, UINavigationItem, UIViewController, CNPolicy, CNContactFormatter, CNContactRecentsReference, NSAttributedString, UIView, _UIRemoteViewController;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate> {

	long long _mode;
	BOOL _ignoreViewWillBePresented;
	BOOL _shouldShowLinkedContacts;
	BOOL _highlightedPropertyImportant;
	BOOL _requiresSetup;
	BOOL _hasCompletedSetup;
	BOOL _showingMeContact;
	BOOL _shouldDrawNavigationBar;
	BOOL _editingProposedInformation;
	BOOL _allowsDisplayModePickerActions;
	BOOL _allowsEditPhoto;
	BOOL _ignoresParentalRestrictions;
	CNContact* _contact;
	NSArray* _displayedPropertyKeys;
	id<CNContactViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNGroup* _parentGroup;
	CNContainer* _parentContainer;
	NSString* _alternateName;
	NSString* _message;
	CNContact* _contentContact;
	CNContactContentViewController* _contentViewController;
	_UIAccessDeniedView* _accessDeniedView;
	NSString* _highlightedPropertyKey;
	NSString* _highlightedPropertyIdentifier;
	NSArray* _extraRightBarButtonItems;
	NSArray* _extraLeftBarButtonItems;
	NSArray* _preEditLeftBarButtonItems;
	UINavigationItem* _observedNavigationItem;
	UIViewController*<CNContactContentViewController> _viewController;
	CNPolicy* _policy;
	CNContact* _additionalContact;
	id<CNContactViewControllerPPTDelegate> _pptDelegate;
	NSString* _initialPrompt;
	long long _displayMode;
	long long _editMode;
	long long _actions;
	CNContactFormatter* _contactFormatter;
	CNContactRecentsReference* _recentsData;
	NSArray* _prohibitedPropertyKeys;
	NSString* _primaryPropertyKey;
	NSString* _importantMessage;
	NSString* _warningMessage;
	NSAttributedString* _verifiedInfoMessage;
	UIView* _contactHeaderView;
	UIViewController* _contactHeaderViewController;

}

@property (nonatomic,retain) CNContact * contentContact;                                                    //@synthesize contentContact=_contentContact - In the implementation block
@property (nonatomic,retain) CNContactContentViewController * contentViewController;                        //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                      //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (nonatomic,retain) NSString * highlightedPropertyKey;                                             //@synthesize highlightedPropertyKey=_highlightedPropertyKey - In the implementation block
@property (nonatomic,retain) NSString * highlightedPropertyIdentifier;                                      //@synthesize highlightedPropertyIdentifier=_highlightedPropertyIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedPropertyImportant;                                             //@synthesize highlightedPropertyImportant=_highlightedPropertyImportant - In the implementation block
@property (nonatomic,retain) NSArray * extraRightBarButtonItems;                                            //@synthesize extraRightBarButtonItems=_extraRightBarButtonItems - In the implementation block
@property (nonatomic,retain) NSArray * extraLeftBarButtonItems;                                             //@synthesize extraLeftBarButtonItems=_extraLeftBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL requiresSetup;                                                            //@synthesize requiresSetup=_requiresSetup - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedSetup;                                                        //@synthesize hasCompletedSetup=_hasCompletedSetup - In the implementation block
@property (nonatomic,retain) NSArray * preEditLeftBarButtonItems;                                           //@synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems - In the implementation block
@property (nonatomic,retain) UINavigationItem * observedNavigationItem;                                     //@synthesize observedNavigationItem=_observedNavigationItem - In the implementation block
@property (nonatomic,retain) UIViewController*<CNContactContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) long long mode;                                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) CNContact * additionalContact;                                                 //@synthesize additionalContact=_additionalContact - In the implementation block
@property (assign,nonatomic) BOOL showingMeContact;                                                         //@synthesize showingMeContact=_showingMeContact - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate;                     //@synthesize pptDelegate=_pptDelegate - In the implementation block
@property (nonatomic,retain) NSString * initialPrompt;                                                      //@synthesize initialPrompt=_initialPrompt - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawNavigationBar;                                                  //@synthesize shouldDrawNavigationBar=_shouldDrawNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL editingProposedInformation;                                               //@synthesize editingProposedInformation=_editingProposedInformation - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                           //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) long long displayMode;                                                         //@synthesize displayMode=_displayMode - In the implementation block
@property (assign,nonatomic) long long editMode;                                                            //@synthesize editMode=_editMode - In the implementation block
@property (assign,nonatomic) long long actions;                                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                         //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactRecentsReference * recentsData;                                       //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) id<CNContactViewControllerPrivateDelegate> privateDelegate; 
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                              //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,retain) NSString * primaryPropertyKey;                                                 //@synthesize primaryPropertyKey=_primaryPropertyKey - In the implementation block
@property (assign,nonatomic) BOOL allowsDisplayModePickerActions;                                           //@synthesize allowsDisplayModePickerActions=_allowsDisplayModePickerActions - In the implementation block
@property (assign,nonatomic) BOOL allowsEditPhoto;                                                          //@synthesize allowsEditPhoto=_allowsEditPhoto - In the implementation block
@property (assign,nonatomic) BOOL ignoresParentalRestrictions;                                              //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (nonatomic,copy) NSString * importantMessage;                                                     //@synthesize importantMessage=_importantMessage - In the implementation block
@property (nonatomic,copy) NSString * warningMessage;                                                       //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,copy) NSAttributedString * verifiedInfoMessage;                                        //@synthesize verifiedInfoMessage=_verifiedInfoMessage - In the implementation block
@property (nonatomic,retain) UIView * contactHeaderView;                                                    //@synthesize contactHeaderView=_contactHeaderView - In the implementation block
@property (nonatomic,retain) UIViewController * contactHeaderViewController;                                //@synthesize contactHeaderViewController=_contactHeaderViewController - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                                 //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNGroup * parentGroup;                                                         //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                                 //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,copy) NSString * alternateName;                                                        //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL allowsActions; 
@property (assign,nonatomic) BOOL shouldShowLinkedContacts;                                                 //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(id)descriptorForRequiredKeys;
+(id)viewControllerForContact:(id)arg1 ;
+(id)viewControllerForUnknownContact:(id)arg1 ;
+(id)viewControllerForNewContact:(id)arg1 ;
+(id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setActions:(long long)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setViewController:(UIViewController*<CNContactContentViewController>)arg1 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(long long)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)message;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(UIView *)contactHeaderView;
-(CNContactFormatter *)contactFormatter;
-(void)didCompleteWithContact:(id)arg1 ;
-(long long)actions;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)isPresentingEditingController:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(id)navigationItemController;
-(void)viewDidAppear;
-(CNPolicy *)policy;
-(void)toggleEditing:(id)arg1 ;
-(id<CNContactViewControllerDelegate>)delegate;
-(BOOL)allowsEditing;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setParentGroup:(CNGroup *)arg1 ;
-(BOOL)highlightedPropertyImportant;
-(void)setHighlightedPropertyImportant:(BOOL)arg1 ;
-(NSString *)warningMessage;
-(BOOL)shouldShowLinkedContacts;
-(void)setShouldShowLinkedContacts:(BOOL)arg1 ;
-(BOOL)editingProposedInformation;
-(void)setEditingProposedInformation:(BOOL)arg1 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(NSAttributedString *)verifiedInfoMessage;
-(void)setVerifiedInfoMessage:(NSAttributedString *)arg1 ;
-(void)setContentViewController:(CNContactContentViewController *)arg1 ;
-(NSArray *)extraRightBarButtonItems;
-(void)setExtraRightBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)extraLeftBarButtonItems;
-(void)setExtraLeftBarButtonItems:(NSArray *)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(NSString *)initialPrompt;
-(NSArray *)preEditLeftBarButtonItems;
-(void)setPreEditLeftBarButtonItems:(NSArray *)arg1 ;
-(void)setInitialPrompt:(NSString *)arg1 ;
-(BOOL)shouldDrawNavigationBar;
-(void)setShouldDrawNavigationBar:(BOOL)arg1 ;
-(void)setRecentsData:(CNContactRecentsReference *)arg1 ;
-(BOOL)showingMeContact;
-(void)setShowingMeContact:(BOOL)arg1 ;
-(CNContactRecentsReference *)recentsData;
-(long long)displayMode;
-(BOOL)allowsActions;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)_setViewController:(id)arg1 ;
-(CNContactContentViewController *)contentViewController;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)allowsDisplayModePickerActions;
-(void)setAllowsDisplayModePickerActions:(BOOL)arg1 ;
-(void)_viewWillBePresented;
-(void)_setupViewController;
-(BOOL)_shouldBeOutOfProcess;
-(void)_prepareViewController;
-(NSArray *)displayedPropertyKeys;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(CNContainer *)parentContainer;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(void)setDelegate:(id<CNContactViewControllerDelegate>)arg1 ;
-(long long)editMode;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(UIViewController*<CNContactContentViewController>)viewController;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(id<CNContactViewControllerPrivateDelegate>)privateDelegate;
-(BOOL)isModalInPresentation;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)setDisplayMode:(long long)arg1 ;
-(void)setEditMode:(long long)arg1 ;
-(CNGroup *)parentGroup;
-(CNContact *)contentContact;
-(void)configureNavigationItem:(id)arg1 ;
-(id)_contactPresentedViewController;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(id)_primaryPropertyStringForContact:(id)arg1 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(BOOL)arg3 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 ;
-(void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3 ;
-(void)presentConfirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1 ;
-(void)setDoneButtonText:(id)arg1 enabled:(BOOL)arg2 ;
-(id)confirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1 ;
-(void)enableSaveKeyboardShortcut;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(BOOL)requiresSetup;
-(void)enableCancelKeyboardShortcut;
-(void)setContentContact:(CNContact *)arg1 ;
-(NSString *)highlightedPropertyKey;
-(void)setHighlightedPropertyKey:(NSString *)arg1 ;
-(NSString *)highlightedPropertyIdentifier;
-(BOOL)hasCompletedSetup;
-(void)setHighlightedPropertyIdentifier:(NSString *)arg1 ;
-(void)setHasCompletedSetup:(BOOL)arg1 ;
-(UINavigationItem *)observedNavigationItem;
-(void)setObservedNavigationItem:(UINavigationItem *)arg1 ;
-(CNContact *)additionalContact;
-(void)setAdditionalContact:(CNContact *)arg1 ;
-(NSString *)primaryPropertyKey;
-(void)setPrimaryPropertyKey:(NSString *)arg1 ;
-(void)setContactHeaderView:(UIView *)arg1 ;
-(UIViewController *)contactHeaderViewController;
-(void)setContactHeaderViewController:(UIViewController *)arg1 ;
-(void)loadView;
-(void)setImportantMessage:(NSString *)arg1 ;
-(NSString *)importantMessage;
-(void)setAllowsEditPhoto:(BOOL)arg1 ;
-(BOOL)allowsEditPhoto;
-(void)_endDelayingPresentation;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isDelayingPresentation;
-(void)editCancel:(id)arg1 ;
@end

