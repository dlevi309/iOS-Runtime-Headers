/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol CNContactViewControllerDelegate, CNContactContentViewController, CNContactViewControllerPPTDelegate;
@class CNContact, NSArray, CNContactStore, CNGroup, CNContainer, NSString, CNContactContentViewController, _UIAccessDeniedView, UIViewController, CNPolicy, CNContactFormatter, CNContactRecentsReference, NSAttributedString, UIView, _UIRemoteViewController;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate> {

	long long _mode;
	BOOL _ignoreViewWillBePresented;
	BOOL _shouldShowLinkedContacts;
	BOOL _highlightedPropertyImportant;
	BOOL _requiresSetup;
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
	NSArray* _extraBarButtonItems;
	NSArray* _preEditLeftBarButtonItems;
	UIViewController*<CNContactContentViewController> _viewController;
	CNPolicy* _policy;
	CNContact* _additionalContact;
	id<CNContactViewControllerPPTDelegate> _pptDelegate;
	NSArray* _prohibitedPropertyKeys;
	NSString* _initialPrompt;
	long long _displayMode;
	long long _editMode;
	long long _actions;
	CNContactFormatter* _contactFormatter;
	CNContactRecentsReference* _recentsData;
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
@property (nonatomic,retain) NSArray * extraBarButtonItems;                                                 //@synthesize extraBarButtonItems=_extraBarButtonItems - In the implementation block
@property (assign,nonatomic) BOOL requiresSetup;                                                            //@synthesize requiresSetup=_requiresSetup - In the implementation block
@property (nonatomic,retain) NSArray * preEditLeftBarButtonItems;                                           //@synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems - In the implementation block
@property (nonatomic,retain) UIViewController*<CNContactContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) long long mode;                                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) CNPolicy * policy;                                                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) CNContact * additionalContact;                                                 //@synthesize additionalContact=_additionalContact - In the implementation block
@property (assign,nonatomic) BOOL showingMeContact;                                                         //@synthesize showingMeContact=_showingMeContact - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate;                     //@synthesize pptDelegate=_pptDelegate - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                              //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
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
-(void)dealloc;
-(id<CNContactViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNContactViewControllerDelegate>)arg1 ;
-(long long)mode;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(CNPolicy *)policy;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setViewController:(UIViewController*<CNContactContentViewController>)arg1 ;
-(void)loadView;
-(void)setContentViewController:(CNContactContentViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)actions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(CNContactContentViewController *)contentViewController;
-(UIViewController*<CNContactContentViewController>)viewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_isDelayingPresentation;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isModalInPresentation;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)_endDelayingPresentation;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(long long)displayMode;
-(CNGroup *)parentGroup;
-(id<CNContactViewControllerPrivateDelegate>)privateDelegate;
-(void)setActions:(long long)arg1 ;
-(id)initWithMode:(long long)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(void)setParentGroup:(CNGroup *)arg1 ;
-(long long)editMode;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)isPresentingEditingController:(BOOL)arg1 ;
-(void)didChangePreferredContentSize:(CGSize)arg1 ;
-(void)viewDidAppear;
-(void)didExecuteClearRecentsDataAction;
-(void)didExecuteDeleteFromDowntimeWhitelistAction;
-(void)presentCancelConfirmationAlert;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(CNContactRecentsReference *)recentsData;
-(BOOL)allowsDisplayModePickerActions;
-(void)setAllowsDisplayModePickerActions:(BOOL)arg1 ;
-(void)_viewWillBePresented;
-(void)_setViewController:(id)arg1 ;
-(void)_setupViewController;
-(BOOL)_shouldBeOutOfProcess;
-(void)_prepareViewController;
-(NSArray *)displayedPropertyKeys;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(void)setImportantMessage:(NSString *)arg1 ;
-(NSString *)importantMessage;
-(void)setAllowsEditPhoto:(BOOL)arg1 ;
-(BOOL)allowsEditPhoto;
-(CNContainer *)parentContainer;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(UIView *)contactHeaderView;
-(id)navigationItemController;
-(void)editCancel:(id)arg1 ;
-(void)toggleEditing:(id)arg1 ;
-(BOOL)highlightedPropertyImportant;
-(void)setHighlightedPropertyImportant:(BOOL)arg1 ;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(BOOL)allowsActions;
-(void)setAllowsActions:(BOOL)arg1 ;
-(BOOL)shouldShowLinkedContacts;
-(void)setShouldShowLinkedContacts:(BOOL)arg1 ;
-(BOOL)editingProposedInformation;
-(void)setEditingProposedInformation:(BOOL)arg1 ;
-(NSString *)warningMessage;
-(void)setWarningMessage:(NSString *)arg1 ;
-(NSAttributedString *)verifiedInfoMessage;
-(void)setVerifiedInfoMessage:(NSAttributedString *)arg1 ;
-(NSArray *)extraBarButtonItems;
-(void)setExtraBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)preEditLeftBarButtonItems;
-(void)setPreEditLeftBarButtonItems:(NSArray *)arg1 ;
-(BOOL)shouldDrawNavigationBar;
-(void)setShouldDrawNavigationBar:(BOOL)arg1 ;
-(NSString *)initialPrompt;
-(void)setInitialPrompt:(NSString *)arg1 ;
-(void)setRecentsData:(CNContactRecentsReference *)arg1 ;
-(BOOL)showingMeContact;
-(void)setShowingMeContact:(BOOL)arg1 ;
-(id)_contactPresentedViewController;
-(id)_primaryPropertyStringForContact:(id)arg1 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(BOOL)arg3 ;
-(void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 ;
-(void)setRequiresSetup:(BOOL)arg1 ;
-(void)presentConfirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1 ;
-(id)confirmCancelAlertControllerAnchoredAtButtonItem:(id)arg1 ;
-(void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3 ;
-(void)setDoneButtonText:(id)arg1 enabled:(BOOL)arg2 ;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)configureNavigationItem:(id)arg1 ;
-(void)enableSaveKeyboardShortcut;
-(void)enableCancelKeyboardShortcut;
-(CNContact *)contentContact;
-(void)setContentContact:(CNContact *)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(NSString *)highlightedPropertyKey;
-(void)setHighlightedPropertyKey:(NSString *)arg1 ;
-(NSString *)highlightedPropertyIdentifier;
-(void)setHighlightedPropertyIdentifier:(NSString *)arg1 ;
-(BOOL)requiresSetup;
-(CNContact *)additionalContact;
-(void)setAdditionalContact:(CNContact *)arg1 ;
-(void)setEditMode:(long long)arg1 ;
-(NSString *)primaryPropertyKey;
-(void)setPrimaryPropertyKey:(NSString *)arg1 ;
-(void)setContactHeaderView:(UIView *)arg1 ;
-(UIViewController *)contactHeaderViewController;
-(void)setContactHeaderViewController:(UIViewController *)arg1 ;
@end

