/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNPropertyActionDelegate.h>
#import <libobjc.A.dylib/CNPropertyCellDelegate.h>
#import <libobjc.A.dylib/CNPropertyGroupItemDelegate.h>
#import <libobjc.A.dylib/CNContactGroupPickerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/CNContactHeaderViewDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/CNShareLocationProtocol.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactInlineActionsViewControllerDelegate_Internal.h>
#import <libobjc.A.dylib/CNUIGeminiDataSourceDelegate.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>
#import <libobjc.A.dylib/CNUIEditAuthorizationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactActionDelegate.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>

@protocol CNContactContentViewController <CNContactViewServiceProtocol>
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate; 
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate; 
@required
-(void)setPptDelegate:(id)arg1;
-(id<CNContactViewHostProtocol>)delegate;
-(void)setDelegate:(id)arg1;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;

@end

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol CNContactViewHostProtocol, CNContactViewControllerPPTDelegate, CNContactContentViewControllerDelegate, CNPresenterDelegate, CNHealthStoreManagerToken, CNCancelable, CNUIContactSaveExecutor;
@class NSArray, CNContact, CNGroup, CNContainer, NSString, NSAttributedString, UIViewController, CNCardGroup, CNMutableContact, NSMutableArray, CNContactView, CNContactFormatter, CNContactHeaderDisplayView, CNContactHeaderEditView, CNUIEditAuthorizationController, NSMutableDictionary, NSMapTable, CNCardLinkedCardsGroup, CNPropertyNoteCell, CNPropertyAction, CNPropertyFaceTimeAction, CNPropertyLinkedCardsAction, CNContactAddLinkedCardAction, CNContactAction, CNContactAddFavoriteAction, CNContactToggleBlockCallerAction, CNContactAddNewFieldAction, CNContactCreateNewContactAction, CNContactAddToExistingContactAction, CNContactUpdateExistingContactAction, CNContactSuggestionAction, CNContactClearRecentsDataAction, CNContactActionProvider, NSLayoutConstraint, CNShareLocationController, CNContactInlineActionsViewController, CNContactActionsContainerView, UIView, CNMedicalIDAction, CNEmergencyContactAction, CNCardPropertyGeminiGroup, CNSiriContactContextProvider, NSDictionary, HKHealthStore, CNUIUserActionListDataSource, UIKeyCommand, CNUIContactsEnvironment, CNContactViewCache, CNUIUserActivityManager, CNUIGeminiDataSource, CNPolicy, CNContactStore, CNManagedConfiguration, CNAccessAuthorization, CNContactRecentsReference, CNCardFaceTimeGroup, UITableView, CNContactHeaderView;

@interface CNContactContentViewController : UIViewController <CNPropertyActionDelegate, CNPropertyCellDelegate, CNPropertyGroupItemDelegate, CNContactGroupPickerDelegate, UIPopoverControllerDelegate, CNContactHeaderViewDelegate, CNContactContentViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CNShareLocationProtocol, CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate_Internal, CNUIGeminiDataSourceDelegate, NSUserActivityDelegate, CNUIEditAuthorizationControllerDelegate, CNContactActionDelegate, CNPresenterDelegate, CNContactContentViewController, UITableViewDelegate, UITableViewDataSource, UIViewControllerRestoration> {

	NSArray* _displayedProperties;
	BOOL _needsReload;
	BOOL _needsRefetch;
	BOOL _disablingRotation;
	BOOL _saving;
	int _animating;
	BOOL _navBarWasVisibleWhenPresented;
	BOOL _isMailVIP;
	BOOL _showContactBlockingFirst;
	BOOL _highlightedPropertyImportant;
	BOOL isPresentingModalViewController;
	BOOL _allowsEditing;
	BOOL _alwaysEditing;
	BOOL _allowsActions;
	BOOL _allowsPropertyActions;
	BOOL _allowsCardActions;
	BOOL _allowsConferencing;
	BOOL _allowsSharing;
	BOOL _allowsAddToFavorites;
	BOOL _allowsSendMessage;
	BOOL _allowsContactBlocking;
	BOOL _allowsAddingToAddressBook;
	BOOL _shouldShowLinkedContacts;
	BOOL _allowsSettingLinkedContactsAsPreferred;
	BOOL _allowsDeletion;
	BOOL _allowsActionsModel;
	BOOL _allowsDisplayModePickerActions;
	BOOL _allowsEditPhoto;
	BOOL _ignoresParentalRestrictions;
	BOOL _editingProposedInformation;
	BOOL _hideCardActions;
	BOOL _outOfProcessSetupComplete;
	BOOL _isPresentingFullscreenForOutOfProcess;
	BOOL _didSetFirstResponder;
	BOOL _contactSupportsTTYCalls;
	BOOL _runningPPT;
	BOOL _layoutPositionallyAfterNavBar;
	BOOL _shouldIgnoreBlockListChange;
	BOOL _allowsEditInApp;
	BOOL _shouldDrawNavigationBar;
	BOOL _shouldIgnoreContactStoreDidChangeNotification;
	BOOL _showingMeContact;
	id<CNContactViewHostProtocol> _delegate;
	id<CNContactViewControllerPPTDelegate> _pptDelegate;
	CNContact* _contact;
	CNGroup* _parentGroup;
	CNContainer* _parentContainer;
	NSString* _alternateName;
	NSString* _message;
	NSString* _warningMessage;
	NSString* _importantMessage;
	NSAttributedString* _verifiedInfoMessage;
	NSString* _primaryProperty;
	UIViewController* _personHeaderViewController;
	CNCardGroup* _cardTopGroup;
	CNCardGroup* _cardBottomGroup;
	CNCardGroup* _cardFooterGroup;
	id<CNContactContentViewControllerDelegate> _contactDelegate;
	id<CNPresenterDelegate> _presentingDelegate;
	CNMutableContact* _mutableContact;
	NSMutableArray* _issuedSaveRequestIdentifiers;
	CNMutableContact* _shadowCopyOfReadonlyContact;
	CNContactView* _displayContactView;
	CNContactView* _editingContactView;
	CNContactFormatter* _contactFormatter;
	CNContactHeaderDisplayView* _displayHeaderView;
	CNContactHeaderEditView* _editingHeaderView;
	CNUIEditAuthorizationController* _editAuthorizationController;
	long long _editAuthorizationResult;
	NSMutableArray* _editingGroups;
	NSArray* _nameEditingGroups;
	NSMutableDictionary* _groupsAfterGroup;
	NSMapTable* _cachedLabelWidths;
	NSArray* _extraRightBarButtonItems;
	NSArray* _extraLeftBarButtonItems;
	CNCardGroup* _cardActionsGroup;
	CNCardGroup* _cardShareLocationGroup;
	CNCardGroup* _cardMedicalIDGroup;
	CNCardGroup* _cardBlockContactGroup;
	CNCardLinkedCardsGroup* _cardLinkedCardsGroup;
	NSArray* _customActions;
	CNPropertyNoteCell* _noteCell;
	CNPropertyAction* _sendMessageAction;
	CNPropertyFaceTimeAction* _faceTimeAction;
	CNPropertyFaceTimeAction* _faceTimeAudioAction;
	CNPropertyLinkedCardsAction* _linkedCardsAction;
	CNContactAddLinkedCardAction* _addLinkedCardAction;
	CNContactAction* _shareContactAction;
	CNContactAction* _createReminderAction;
	CNContactAddFavoriteAction* _addFavoriteAction;
	CNContactToggleBlockCallerAction* _blockAction;
	CNContactAddNewFieldAction* _addNewFieldAction;
	CNContactCreateNewContactAction* _createNewContactAction;
	CNContactAddToExistingContactAction* _addToExistingContactAction;
	CNContactUpdateExistingContactAction* _updateExistingContactAction;
	CNContactSuggestionAction* _suggestedContactAction;
	CNContactClearRecentsDataAction* _clearRecentsDataAction;
	CNContactAction* _stopSharingWithFamilyAction;
	CNContactActionProvider* _actionProvider;
	NSArray* _activatedConstraints;
	NSLayoutConstraint* _headerHeightConstraint;
	CNShareLocationController* _shareLocationController;
	CNContactInlineActionsViewController* _actionsViewController;
	CNContactActionsContainerView* _actionsWrapperView;
	UIView* _headerDropShadowView;
	CNMedicalIDAction* _medicalIDAction;
	CNEmergencyContactAction* _emergencyContactAction;
	id<CNHealthStoreManagerToken> _medicalIDRegistrationToken;
	id<CNCancelable> _medicalIDLookupToken;
	NSString* _emergencyNumberIdentifier;
	CNCardGroup* _cardEditingActionsGroup;
	CNCardGroup* _cardEditingDeleteContactGroup;
	CNCardPropertyGeminiGroup* _cardEditingGeminiGroup;
	CNContactAction* _deleteContactAction;
	CNContactAction* _ignoreContactAction;
	CNSiriContactContextProvider* _siriContextProvider;
	NSMutableArray* _editingLinkedContacts;
	id<CNCancelable> _iMessageIDSLookupToken;
	id<CNCancelable> _faceTimeIDSLookupToken;
	NSDictionary* _userActivityUserInfo;
	HKHealthStore* _healthStore;
	NSArray* _highlightedProperties;
	CNUIUserActionListDataSource* _actionsDataSource;
	UIKeyCommand* _saveCommand;
	UIKeyCommand* _editCommand;
	UIKeyCommand* _cancelCommand;
	double _keyboardVerticalOverlap;
	NSArray* _preEditLeftBarButtonItems;
	CNUIContactsEnvironment* _environment;
	CNContactViewCache* _contactViewCache;
	CNUIUserActivityManager* _activityManager;
	CNUIGeminiDataSource* _geminiDataSource;
	CNPolicy* _policy;
	NSDictionary* _linkedPoliciesByContactIdentifier;
	long long _mode;
	CNContactStore* _contactStore;
	CNManagedConfiguration* _managedConfiguration;
	CNAccessAuthorization* _accessAuthorization;
	NSArray* _missingRequiredKeys;
	NSArray* _originalContacts;
	NSString* _initialPrompt;
	id<CNUIContactSaveExecutor> _saveContactExecutor;
	id<CNUIContactSaveExecutor> _saveLinkedContactsExecutor;
	NSArray* _prohibitedPropertyKeys;
	CNContactRecentsReference* _recentsData;
	NSDictionary* _propertyGroups;
	CNCardFaceTimeGroup* _cardFaceTimeGroup;
	NSMutableArray* _displayGroups;
	UIEdgeInsets _peripheryInsets;

}

@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,retain) CNMutableContact * mutableContact;                                               //@synthesize mutableContact=_mutableContact - In the implementation block
@property (nonatomic,retain) NSMutableArray * issuedSaveRequestIdentifiers;                                   //@synthesize issuedSaveRequestIdentifiers=_issuedSaveRequestIdentifiers - In the implementation block
@property (nonatomic,retain) CNMutableContact * shadowCopyOfReadonlyContact;                                  //@synthesize shadowCopyOfReadonlyContact=_shadowCopyOfReadonlyContact - In the implementation block
@property (nonatomic,retain) CNContactView * displayContactView;                                              //@synthesize displayContactView=_displayContactView - In the implementation block
@property (nonatomic,retain) CNContactView * editingContactView;                                              //@synthesize editingContactView=_editingContactView - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                           //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactHeaderDisplayView * displayHeaderView;                                  //@synthesize displayHeaderView=_displayHeaderView - In the implementation block
@property (nonatomic,retain) CNContactHeaderEditView * editingHeaderView;                                     //@synthesize editingHeaderView=_editingHeaderView - In the implementation block
@property (nonatomic,retain) CNUIEditAuthorizationController * editAuthorizationController;                   //@synthesize editAuthorizationController=_editAuthorizationController - In the implementation block
@property (assign,nonatomic) long long editAuthorizationResult;                                               //@synthesize editAuthorizationResult=_editAuthorizationResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * editingGroups;                                                  //@synthesize editingGroups=_editingGroups - In the implementation block
@property (nonatomic,retain) NSArray * nameEditingGroups;                                                     //@synthesize nameEditingGroups=_nameEditingGroups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupsAfterGroup;                                          //@synthesize groupsAfterGroup=_groupsAfterGroup - In the implementation block
@property (nonatomic,retain) NSMapTable * cachedLabelWidths;                                                  //@synthesize cachedLabelWidths=_cachedLabelWidths - In the implementation block
@property (nonatomic,retain) NSArray * extraRightBarButtonItems;                                              //@synthesize extraRightBarButtonItems=_extraRightBarButtonItems - In the implementation block
@property (nonatomic,retain) NSArray * extraLeftBarButtonItems;                                               //@synthesize extraLeftBarButtonItems=_extraLeftBarButtonItems - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardTopGroup;                                                      //@synthesize cardTopGroup=_cardTopGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardBottomGroup;                                                   //@synthesize cardBottomGroup=_cardBottomGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardActionsGroup;                                                  //@synthesize cardActionsGroup=_cardActionsGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardShareLocationGroup;                                            //@synthesize cardShareLocationGroup=_cardShareLocationGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardMedicalIDGroup;                                                //@synthesize cardMedicalIDGroup=_cardMedicalIDGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardBlockContactGroup;                                             //@synthesize cardBlockContactGroup=_cardBlockContactGroup - In the implementation block
@property (nonatomic,retain) CNCardLinkedCardsGroup * cardLinkedCardsGroup;                                   //@synthesize cardLinkedCardsGroup=_cardLinkedCardsGroup - In the implementation block
@property (nonatomic,retain) NSArray * customActions;                                                         //@synthesize customActions=_customActions - In the implementation block
@property (nonatomic,retain) CNPropertyNoteCell * noteCell;                                                   //@synthesize noteCell=_noteCell - In the implementation block
@property (nonatomic,retain) CNPropertyAction * sendMessageAction;                                            //@synthesize sendMessageAction=_sendMessageAction - In the implementation block
@property (nonatomic,retain) CNPropertyFaceTimeAction * faceTimeAction;                                       //@synthesize faceTimeAction=_faceTimeAction - In the implementation block
@property (nonatomic,retain) CNPropertyFaceTimeAction * faceTimeAudioAction;                                  //@synthesize faceTimeAudioAction=_faceTimeAudioAction - In the implementation block
@property (nonatomic,retain) CNPropertyLinkedCardsAction * linkedCardsAction;                                 //@synthesize linkedCardsAction=_linkedCardsAction - In the implementation block
@property (nonatomic,retain) CNContactAddLinkedCardAction * addLinkedCardAction;                              //@synthesize addLinkedCardAction=_addLinkedCardAction - In the implementation block
@property (nonatomic,retain) CNContactAction * shareContactAction;                                            //@synthesize shareContactAction=_shareContactAction - In the implementation block
@property (nonatomic,retain) CNContactAction * createReminderAction;                                          //@synthesize createReminderAction=_createReminderAction - In the implementation block
@property (nonatomic,retain) CNContactAddFavoriteAction * addFavoriteAction;                                  //@synthesize addFavoriteAction=_addFavoriteAction - In the implementation block
@property (nonatomic,retain) CNContactToggleBlockCallerAction * blockAction;                                  //@synthesize blockAction=_blockAction - In the implementation block
@property (nonatomic,retain) CNContactAddNewFieldAction * addNewFieldAction;                                  //@synthesize addNewFieldAction=_addNewFieldAction - In the implementation block
@property (nonatomic,retain) CNContactCreateNewContactAction * createNewContactAction;                        //@synthesize createNewContactAction=_createNewContactAction - In the implementation block
@property (nonatomic,retain) CNContactAddToExistingContactAction * addToExistingContactAction;                //@synthesize addToExistingContactAction=_addToExistingContactAction - In the implementation block
@property (nonatomic,retain) CNContactUpdateExistingContactAction * updateExistingContactAction;              //@synthesize updateExistingContactAction=_updateExistingContactAction - In the implementation block
@property (nonatomic,retain) CNContactSuggestionAction * suggestedContactAction;                              //@synthesize suggestedContactAction=_suggestedContactAction - In the implementation block
@property (nonatomic,retain) CNContactClearRecentsDataAction * clearRecentsDataAction;                        //@synthesize clearRecentsDataAction=_clearRecentsDataAction - In the implementation block
@property (nonatomic,retain) CNContactAction * stopSharingWithFamilyAction;                                   //@synthesize stopSharingWithFamilyAction=_stopSharingWithFamilyAction - In the implementation block
@property (nonatomic,retain) CNContactActionProvider * actionProvider;                                        //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,retain) NSArray * activatedConstraints;                                                  //@synthesize activatedConstraints=_activatedConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerHeightConstraint;                                     //@synthesize headerHeightConstraint=_headerHeightConstraint - In the implementation block
@property (nonatomic,retain) CNShareLocationController * shareLocationController;                             //@synthesize shareLocationController=_shareLocationController - In the implementation block
@property (nonatomic,retain) CNContactInlineActionsViewController * actionsViewController;                    //@synthesize actionsViewController=_actionsViewController - In the implementation block
@property (nonatomic,retain) CNContactActionsContainerView * actionsWrapperView;                              //@synthesize actionsWrapperView=_actionsWrapperView - In the implementation block
@property (nonatomic,retain) UIView * headerDropShadowView;                                                   //@synthesize headerDropShadowView=_headerDropShadowView - In the implementation block
@property (nonatomic,retain) CNMedicalIDAction * medicalIDAction;                                             //@synthesize medicalIDAction=_medicalIDAction - In the implementation block
@property (nonatomic,retain) CNEmergencyContactAction * emergencyContactAction;                               //@synthesize emergencyContactAction=_emergencyContactAction - In the implementation block
@property (nonatomic,retain) id<CNHealthStoreManagerToken> medicalIDRegistrationToken;                        //@synthesize medicalIDRegistrationToken=_medicalIDRegistrationToken - In the implementation block
@property (nonatomic,retain) id<CNCancelable> medicalIDLookupToken;                                           //@synthesize medicalIDLookupToken=_medicalIDLookupToken - In the implementation block
@property (nonatomic,retain) NSString * emergencyNumberIdentifier;                                            //@synthesize emergencyNumberIdentifier=_emergencyNumberIdentifier - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardEditingActionsGroup;                                           //@synthesize cardEditingActionsGroup=_cardEditingActionsGroup - In the implementation block
@property (nonatomic,retain) CNCardGroup * cardEditingDeleteContactGroup;                                     //@synthesize cardEditingDeleteContactGroup=_cardEditingDeleteContactGroup - In the implementation block
@property (nonatomic,retain) CNCardPropertyGeminiGroup * cardEditingGeminiGroup;                              //@synthesize cardEditingGeminiGroup=_cardEditingGeminiGroup - In the implementation block
@property (nonatomic,retain) CNContactAction * deleteContactAction;                                           //@synthesize deleteContactAction=_deleteContactAction - In the implementation block
@property (nonatomic,retain) CNContactAction * ignoreContactAction;                                           //@synthesize ignoreContactAction=_ignoreContactAction - In the implementation block
@property (nonatomic,retain) CNSiriContactContextProvider * siriContextProvider;                              //@synthesize siriContextProvider=_siriContextProvider - In the implementation block
@property (nonatomic,retain) NSMutableArray * editingLinkedContacts;                                          //@synthesize editingLinkedContacts=_editingLinkedContacts - In the implementation block
@property (nonatomic,retain) id<CNCancelable> iMessageIDSLookupToken;                                         //@synthesize iMessageIDSLookupToken=_iMessageIDSLookupToken - In the implementation block
@property (nonatomic,retain) id<CNCancelable> faceTimeIDSLookupToken;                                         //@synthesize faceTimeIDSLookupToken=_faceTimeIDSLookupToken - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityUserInfo;                                             //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                                     //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic) BOOL outOfProcessSetupComplete;                                                  //@synthesize outOfProcessSetupComplete=_outOfProcessSetupComplete - In the implementation block
@property (assign,nonatomic) BOOL isPresentingFullscreenForOutOfProcess;                                      //@synthesize isPresentingFullscreenForOutOfProcess=_isPresentingFullscreenForOutOfProcess - In the implementation block
@property (assign,nonatomic) BOOL didSetFirstResponder;                                                       //@synthesize didSetFirstResponder=_didSetFirstResponder - In the implementation block
@property (nonatomic,retain) NSArray * highlightedProperties;                                                 //@synthesize highlightedProperties=_highlightedProperties - In the implementation block
@property (assign,nonatomic) BOOL highlightedPropertyImportant;                                               //@synthesize highlightedPropertyImportant=_highlightedPropertyImportant - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionsDataSource;                                //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (assign,nonatomic) BOOL contactSupportsTTYCalls;                                                    //@synthesize contactSupportsTTYCalls=_contactSupportsTTYCalls - In the implementation block
@property (nonatomic,retain) UIKeyCommand * saveCommand;                                                      //@synthesize saveCommand=_saveCommand - In the implementation block
@property (nonatomic,retain) UIKeyCommand * editCommand;                                                      //@synthesize editCommand=_editCommand - In the implementation block
@property (nonatomic,retain) UIKeyCommand * cancelCommand;                                                    //@synthesize cancelCommand=_cancelCommand - In the implementation block
@property (assign,nonatomic) double keyboardVerticalOverlap;                                                  //@synthesize keyboardVerticalOverlap=_keyboardVerticalOverlap - In the implementation block
@property (nonatomic,retain) NSArray * preEditLeftBarButtonItems;                                             //@synthesize preEditLeftBarButtonItems=_preEditLeftBarButtonItems - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                                         //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;                                         //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (nonatomic,readonly) CNUIUserActivityManager * activityManager;                                     //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,readonly) CNUIGeminiDataSource * geminiDataSource;                                       //@synthesize geminiDataSource=_geminiDataSource - In the implementation block
@property (assign,nonatomic) BOOL runningPPT;                                                                 //@synthesize runningPPT=_runningPPT - In the implementation block
@property (assign,nonatomic) BOOL layoutPositionallyAfterNavBar;                                              //@synthesize layoutPositionallyAfterNavBar=_layoutPositionallyAfterNavBar - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets;                                                  //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreBlockListChange;                                                //@synthesize shouldIgnoreBlockListChange=_shouldIgnoreBlockListChange - In the implementation block
@property (nonatomic,retain) CNPolicy * policy;                                                               //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSDictionary * linkedPoliciesByContactIdentifier;                                //@synthesize linkedPoliciesByContactIdentifier=_linkedPoliciesByContactIdentifier - In the implementation block
@property (assign,nonatomic) long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSArray * cardActions; 
@property (nonatomic,retain) CNContactStore * contactStore;                                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                                   //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,retain) CNAccessAuthorization * accessAuthorization;                                     //@synthesize accessAuthorization=_accessAuthorization - In the implementation block
@property (nonatomic,retain) NSArray * missingRequiredKeys;                                                   //@synthesize missingRequiredKeys=_missingRequiredKeys - In the implementation block
@property (nonatomic,retain) NSArray * originalContacts;                                                      //@synthesize originalContacts=_originalContacts - In the implementation block
@property (assign,nonatomic) BOOL allowsEditInApp;                                                            //@synthesize allowsEditInApp=_allowsEditInApp - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawNavigationBar;                                                    //@synthesize shouldDrawNavigationBar=_shouldDrawNavigationBar - In the implementation block
@property (nonatomic,retain) NSString * initialPrompt;                                                        //@synthesize initialPrompt=_initialPrompt - In the implementation block
@property (nonatomic,retain) id<CNUIContactSaveExecutor> saveContactExecutor;                                 //@synthesize saveContactExecutor=_saveContactExecutor - In the implementation block
@property (nonatomic,retain) id<CNUIContactSaveExecutor> saveLinkedContactsExecutor;                          //@synthesize saveLinkedContactsExecutor=_saveLinkedContactsExecutor - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreContactStoreDidChangeNotification;                              //@synthesize shouldIgnoreContactStoreDidChangeNotification=_shouldIgnoreContactStoreDidChangeNotification - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                                //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,retain) CNContactRecentsReference * recentsData;                                         //@synthesize recentsData=_recentsData - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertyGroups;                                                 //@synthesize propertyGroups=_propertyGroups - In the implementation block
@property (nonatomic,retain) CNCardFaceTimeGroup * cardFaceTimeGroup;                                         //@synthesize cardFaceTimeGroup=_cardFaceTimeGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayGroups;                                                  //@synthesize displayGroups=_displayGroups - In the implementation block
@property (assign,nonatomic) BOOL showingMeContact;                                                           //@synthesize showingMeContact=_showingMeContact - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNGroup * parentGroup;                                                           //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                                   //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,readonly) CNContactView * contactView; 
@property (nonatomic,readonly) CNContactHeaderView * contactHeaderView; 
@property (nonatomic,copy) NSArray * displayedProperties;                                                     //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                              //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL alwaysEditing;                                                              //@synthesize alwaysEditing=_alwaysEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                              //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL allowsPropertyActions;                                                      //@synthesize allowsPropertyActions=_allowsPropertyActions - In the implementation block
@property (assign,nonatomic) BOOL allowsCardActions;                                                          //@synthesize allowsCardActions=_allowsCardActions - In the implementation block
@property (assign,nonatomic) BOOL allowsConferencing;                                                         //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                              //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToFavorites;                                                       //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) BOOL allowsSendMessage;                                                          //@synthesize allowsSendMessage=_allowsSendMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                      //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToAddressBook;                                                  //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedContacts;                                                   //@synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts - In the implementation block
@property (assign,nonatomic) BOOL allowsSettingLinkedContactsAsPreferred;                                     //@synthesize allowsSettingLinkedContactsAsPreferred=_allowsSettingLinkedContactsAsPreferred - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion;                                                             //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsActionsModel;                                                         //@synthesize allowsActionsModel=_allowsActionsModel - In the implementation block
@property (assign,nonatomic) BOOL allowsDisplayModePickerActions;                                             //@synthesize allowsDisplayModePickerActions=_allowsDisplayModePickerActions - In the implementation block
@property (assign,nonatomic) BOOL allowsEditPhoto;                                                            //@synthesize allowsEditPhoto=_allowsEditPhoto - In the implementation block
@property (assign,nonatomic) BOOL ignoresParentalRestrictions;                                                //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (assign,nonatomic) BOOL editingProposedInformation;                                                 //@synthesize editingProposedInformation=_editingProposedInformation - In the implementation block
@property (assign,nonatomic) BOOL hideCardActions;                                                            //@synthesize hideCardActions=_hideCardActions - In the implementation block
@property (assign,nonatomic) BOOL isMailVIP;                                                                  //@synthesize isMailVIP=_isMailVIP - In the implementation block
@property (assign,nonatomic) BOOL showContactBlockingFirst;                                                   //@synthesize showContactBlockingFirst=_showContactBlockingFirst - In the implementation block
@property (nonatomic,retain) NSString * alternateName;                                                        //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,retain) NSString * message;                                                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * warningMessage;                                                       //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,retain) NSString * importantMessage;                                                     //@synthesize importantMessage=_importantMessage - In the implementation block
@property (nonatomic,retain) NSAttributedString * verifiedInfoMessage;                                        //@synthesize verifiedInfoMessage=_verifiedInfoMessage - In the implementation block
@property (nonatomic,retain) NSString * primaryProperty;                                                      //@synthesize primaryProperty=_primaryProperty - In the implementation block
@property (nonatomic,retain) UIView * personHeaderView; 
@property (nonatomic,retain) UIViewController * personHeaderViewController;                                   //@synthesize personHeaderViewController=_personHeaderViewController - In the implementation block
@property (nonatomic,readonly) CNCardGroup * cardFooterGroup;                                                 //@synthesize cardFooterGroup=_cardFooterGroup - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactContentViewControllerDelegate> contactDelegate;               //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
@property (assign,nonatomic,__weak) id<CNContactViewHostProtocol> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactViewControllerPPTDelegate> pptDelegate;                       //@synthesize pptDelegate=_pptDelegate - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)boolStateRestorationProperties;
+(BOOL)shouldShowGeminiForResult:(id)arg1 contact:(id)arg2 ;
+(BOOL)actionModelIncludesTTY:(id)arg1 ;
+(BOOL)enablesTransportButtons;
+(void)_telemetryForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysWithDescription:(id)arg1 ;
+(id)createActionsControllerWithActionListDataSource:(id)arg1 environment:(id)arg2 ;
+(long long)tableViewStyle;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateViewConstraints;
-(void)setMessage:(NSString *)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(HKHealthStore *)healthStore;
-(id<CNPresenterDelegate>)presentingDelegate;
-(void)setMedicalIDLookupToken:(id<CNCancelable>)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CNContactStore *)contactStore;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(CNContact *)contact;
-(long long)mode;
-(NSString *)message;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setPptDelegate:(id<CNContactViewControllerPPTDelegate>)arg1 ;
-(void)geminiDataSourceDidUpdate:(id)arg1 ;
-(void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2 ;
-(void)headerPhotoDidUpdate;
-(BOOL)contactInlineActionsViewController:(id)arg1 shouldPerformActionOfType:(id)arg2 withContactProperty:(id)arg3 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)contactInlineActionsViewControllerWillPresentDisambiguationUI:(id)arg1 ;
-(id)alreadyPickedGroups;
-(void)contactInlineActionsViewControllerDidDismissDisambiguationUI:(id)arg1 ;
-(BOOL)isNicknameProhibited;
-(id)sharedActionsDataSource;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(CNContactHeaderEditView *)editingHeaderView;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)setPolicy:(CNPolicy *)arg1 ;
-(CNUIGeminiDataSource *)geminiDataSource;
-(CNContactHeaderView *)contactHeaderView;
-(BOOL)isOutOfProcess;
-(BOOL)runningPPT;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)sharingStatusDidChange;
-(void)presentViewController:(id)arg1 sourceView:(id)arg2 ;
-(void)headerViewDidUpdateLabelSizes;
-(CNContactView *)displayContactView;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)headerPhotoDidSaveEditsForImageDrop;
-(id)viewControllerForHeaderView:(id)arg1 ;
-(CNContactHeaderDisplayView *)displayHeaderView;
-(void)headerViewDidPickPreferredChannel:(id)arg1 ;
-(void)contactGroupPickerDidCancel:(id)arg1 ;
-(CNContactView *)editingContactView;
-(void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2 ;
-(void)propertyItem:(id)arg1 willChangeValue:(id)arg2 ;
-(void)setIsMailVIP:(BOOL)arg1 ;
-(BOOL)propertyItemCanIgnoreGuardianRestrictions;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 didDeleteLabel:(id)arg2 forGroup:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3 ;
-(id)initWithContact:(id)arg1 prohibitedPropertyKeys:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(BOOL)isHeaderViewPhotoProhibited;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setShowContactBlockingFirst:(BOOL)arg1 ;
-(void)prepareCell:(id)arg1 ;
-(void)keyboardDidShowNotification:(id)arg1 ;
-(void)keyboardWillHideNotification:(id)arg1 ;
-(void)favoritesDidChangeWithNotification:(id)arg1 ;
-(void)_refetchContact;
-(NSArray *)originalContacts;
-(BOOL)_modelIsEmpty;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id<CNCancelable>)medicalIDLookupToken;
-(void)setPersonHeaderViewController:(UIViewController *)arg1 ;
-(id)cardGroupForProperty:(id)arg1 ;
-(long long)sectionOfGroup:(id)arg1 inTableView:(id)arg2 ;
-(void)addCardGroup:(id)arg1 afterGroup:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(BOOL)arg5 ;
-(void)toggleEditing;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 ;
-(void)reloadCardGroup:(id)arg1 forTableView:(id)arg2 ;
-(CNPropertyNoteCell *)noteCell;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3 ;
-(void)adjustPreferredContentSize;
-(void)updateContact:(id)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToShowTitle:(BOOL)arg1 ;
-(void)performConfirmedCancel;
-(id)indexPathOfDisplayedPropertyItem:(id)arg1 ;
-(id)indexPathOfEditingPropertyItem:(id)arg1 ;
-(void)updateDoneButton;
-(id)indexPathOfPropertyItem:(id)arg1 editing:(BOOL)arg2 ;
-(id)_policyForContact:(id)arg1 mode:(long long)arg2 ;
-(id)navigationItemController;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(CNPolicy *)policy;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)updateEditNavigationItemsAnimated:(BOOL)arg1 ;
-(void)updateWindowTitleForAppearing:(BOOL)arg1 ;
-(void)toggleEditing:(id)arg1 ;
-(void)cancelAsyncLookups;
-(BOOL)shouldPresentConfirmCancelAlert;
-(void)clearMapsDataIfEdited;
-(void)presentConfirmCancelAlertController;
-(void)saveModelChangesToContact;
-(id)authorizationCheck;
-(id)saveDescriptionForCurrentState;
-(void)finishEditing:(id)arg1 ;
-(BOOL)editingChangeRequiresAuthorization;
-(BOOL)editRequiresAuthorization;
-(void)showEditAuthorizationPane:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)setupTableHeaderView;
-(void)resetEditAuthorizationState;
-(void)performAuthorizedSetEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)contactDidAppear;
-(void)loadContactViewControllerViews;
-(void)setupViewHierarchyIncludingAvatarHeader:(BOOL)arg1 editing:(BOOL)arg2 ;
-(BOOL)shouldDisplayAvatarHeaderView;
-(void)updateEditPhotoButtonIfNeeded;
-(BOOL)isStandardGroup:(id)arg1 ;
-(BOOL)shouldShowVerifiedFooterInSection:(long long)arg1 inTableView:(id)arg2 ;
-(void)shouldPresentFullscreen:(BOOL)arg1 ;
-(id<CNContactViewHostProtocol>)delegate;
-(void)updateOutOfProcessFullscreenPresentationIfNeeded;
-(void)requestFavoritesUpdateWithGemini;
-(long long)_modalPresentationStyleForViewController:(id)arg1 ;
-(void)setNeedsReloadLazy;
-(void)createdNewContact:(id)arg1 ;
-(id)_phoneticNameForValue:(id)arg1 currentPhoneticName:(id)arg2 property:(id)arg3 ;
-(BOOL)isSuggestedContact;
-(CNContactToggleBlockCallerAction *)blockAction;
-(id)_currentTopVisibleGroupInContactView:(id)arg1 ;
-(void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2 ;
-(id)_cellIdentifierForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_cellForIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(UIKeyCommand *)saveCommand;
-(BOOL)allowsEditing;
-(BOOL)hasTableViewHeaderFirstSectionForTableView:(id)arg1 ;
-(void)_setNeedsUpdateCachedLabelWidths;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(id)tableViewHeaderFirstSectionCellForTableView:(id)arg1 ;
-(void)_updateCachedLabelWidthsForGroup:(id)arg1 ;
-(BOOL)isTableViewHeaderFirstSectionIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(id)_labelWidthKeyForGroup:(id)arg1 ;
-(UITableView *)tableView;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)groupIndexFromTableViewSectionIndex:(unsigned long long)arg1 forTableView:(id)arg2 ;
-(void)_updateCachedLabelWidthsForItem:(id)arg1 ;
-(unsigned long long)tableViewSectionIndexFromGroupIndex:(unsigned long long)arg1 forTableView:(id)arg2 ;
-(void)_updateCachedLabelWidths;
-(void)removeFirstSectionHeaderViewControllerFromHierarchy;
-(id)_labelWidthKeyForItem:(id)arg1 ;
-(void)_updateCachedLabelWidthsIfNeeded;
-(void)_updateLabelWidthForCell:(id)arg1 ;
-(void)updatedExistingContact:(id)arg1 ;
-(void)_updateLabelWidthForCellsInGroup:(id)arg1 forTableView:(id)arg2 reset:(BOOL)arg3 ;
-(void)_didCompleteWithContact:(id)arg1 ;
-(void)_updateLabelWidthsForAllVisibleCells;
-(void)addEditingItemAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3 ;
-(id)_removeUnauthorizedKeysFromContact:(id)arg1 ;
-(void)_updateItemsInGroup:(id)arg1 forTableView:(id)arg2 deletedIndexPath:(id)arg3 ;
-(void)focusOnFirstEditingItemIfNeeded;
-(id)indexPathsOfEditingItemsInGroup:(id)arg1 withSectionIndex:(unsigned long long)arg2 ;
-(void)focusOnLastEditingItemInGroup:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadRowsAndRestoreFirstResponderAtIndexPaths:(id)arg1 ofTableView:(id)arg2 ;
-(void)addLinkedContact:(id)arg1 ;
-(id)_updateContact:(id)arg1 withMissingKeysFromRequiredKeys:(id)arg2 ;
-(void)removeLinkedContact:(id)arg1 ;
-(BOOL)alwaysEditing;
-(CNContactActionProvider *)actionProvider;
-(void)_setupEditingLinkedContactsForKeys:(id)arg1 ;
-(void)reloadUnifiedContact;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)cleanupRecentImageMetadata;
-(CGSize)requiredSizeForVisibleTableView;
-(void)blockListDidChange:(id)arg1 ;
-(void)updateContactsViewWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleCoalescedBlockListDidChange;
-(void)setupActionsPreservingChanges:(BOOL)arg1 ;
-(void)_retrieveActionsModelPreservingChanges:(BOOL)arg1 ;
-(UIKeyCommand *)editCommand;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setupCardActions;
-(void)setupShareLocationActionReload:(BOOL)arg1 ;
-(void)_setupAddToAddressBookActions;
-(void)setNeedsReload;
-(void)_setupContactBlockingActionPreservingChanges:(BOOL)arg1 withUpdate:(BOOL)arg2 ;
-(void)_setupSuggestionActions;
-(void)_setupEditingCardActions;
-(void)_setupCustomActions;
-(id)_propertyGroupsForKeys:(id)arg1 ;
-(NSMutableArray *)editingGroups;
-(id)_sendMessageActionAllowingEmailIDs:(BOOL)arg1 ;
-(id)_addFavoriteActionWithConferencing:(BOOL)arg1 telephony:(BOOL)arg2 ;
-(id)_addCreateNewContactAction;
-(CNShareLocationController *)shareLocationController;
-(void)_updateAvailableTransports;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(id)_allDisplayPropertyItemsFromGroups:(id)arg1 ;
-(void)_updateAvailableTransportsForItems:(id)arg1 ;
-(void)_updateIMessageTransportButtonsForItems:(id)arg1 ;
-(void)_updatePhoneTransportButtonsForItems:(id)arg1 ;
-(void)_updateEmailTransportButtonsForItems:(id)arg1 ;
-(void)_updateTTYTransportButtonsForItems:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(Class)groupClassForProperty:(id)arg1 ;
-(id)_loadPropertyGroups;
-(void)_reloadPropertyGroupsPreservingChanges:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)_reloadFaceTimeGroup;
-(void)_addFaceTimeGroupAnimated:(BOOL)arg1 ;
-(void)_reloadMedicalIDGroup;
-(CNCardGroup *)cardTopGroup;
-(void)_addGroup:(id)arg1 afterGroup:(id)arg2 forTableView:(id)arg3 animated:(BOOL)arg4 ;
-(void)_reloadAlertGroups;
-(id)_loadDisplayGroups;
-(void)_addMedicalIDGroupAnimated:(BOOL)arg1 forTableView:(id)arg2 ;
-(id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2 ;
-(BOOL)shouldReallyShowLinkedContactsForEditingState:(BOOL)arg1 ;
-(void)_reloadLinkedCardsGroup;
-(void)_reloadGeminiGroupPreservingChanges:(BOOL)arg1 ;
-(void)createCardEditingGeminiGroupIfNeeded;
-(id)_loadEditingGroupsPreservingChanges:(BOOL)arg1 ;
-(id)_loadNameEditingGroups;
-(BOOL)_modelHasChanges;
-(void)_validateGroup:(id)arg1 ;
-(void)_saveChangesForGroups:(id)arg1 ;
-(id)_currentGroupsForTableView:(id)arg1 ;
-(void)setParentGroup:(CNGroup *)arg1 ;
-(void)setPresentingDelegate:(id<CNPresenterDelegate>)arg1 ;
-(id)_cardGroupAtTableViewSectionIndex:(long long)arg1 forTableView:(id)arg2 ;
-(id)_itemAtIndexPath:(id)arg1 forTableView:(id)arg2 ;
-(BOOL)_indexPathIsActionItem:(id)arg1 forTableView:(id)arg2 ;
-(void)_addedGroupWithName:(id)arg1 ;
-(void)_updateUserActivity;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)setSaveKeyboardShortcutEnabled:(BOOL)arg1 ;
-(void)setCancelKeyboardShortcutEnabled:(BOOL)arg1 ;
-(NSString *)primaryProperty;
-(void)setEditKeyboardShortcutEnabled:(BOOL)arg1 ;
-(double)globalHeaderHeightForContentOffset:(double)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(double)contentOffsetYForGlobalHeaderHeight:(double)arg1 contentInset:(UIEdgeInsets)arg2 ;
-(void)scrollScrollViewAllTheWayUp:(id)arg1 ;
-(void)updateHeaderHeightToMatchScrollViewState:(id)arg1 scrollDirection:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hideCardActions;
-(double)updateHeaderConstraintForGlobalHeaderHeight:(double)arg1 direction:(long long)arg2 animated:(BOOL)arg3 ;
-(id)applyContactStyle;
-(BOOL)isScrollViewControllingHeaderResizeAnimation:(id)arg1 ;
-(void)initializeTableViewsForHeaderHeight;
-(void)updateInsetsIfNeededForTableView:(id)arg1 isEditing:(BOOL)arg2 ;
-(UIEdgeInsets)insetsForContactTableView:(id)arg1 ;
-(UIEdgeInsets)scrollIndicatorInsetsForContactTableView:(id)arg1 withContentInsets:(UIEdgeInsets)arg2 ;
-(NSArray *)displayedProperties;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)updateTableView:(id)arg1 contentInsetsTo:(UIEdgeInsets)arg2 withScrollIndicatorInsets:(UIEdgeInsets)arg3 ;
-(void)setAlwaysEditing:(BOOL)arg1 ;
-(BOOL)showContactBlockingFirst;
-(BOOL)highlightedPropertyImportant;
-(BOOL)allowsPropertyActions;
-(void)setHighlightedPropertyImportant:(BOOL)arg1 ;
-(void)setAllowsPropertyActions:(BOOL)arg1 ;
-(BOOL)allowsCardActions;
-(NSDictionary *)userActivityUserInfo;
-(void)setAllowsCardActions:(BOOL)arg1 ;
-(BOOL)allowsConferencing;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(BOOL)allowsSendMessage;
-(BOOL)allowsAddToFavorites;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(void)setAllowsSendMessage:(BOOL)arg1 ;
-(NSString *)warningMessage;
-(BOOL)allowsAddingToAddressBook;
-(void)setAllowsAddingToAddressBook:(BOOL)arg1 ;
-(BOOL)shouldShowLinkedContacts;
-(void)setShouldShowLinkedContacts:(BOOL)arg1 ;
-(BOOL)allowsSettingLinkedContactsAsPreferred;
-(void)setNoteCell:(CNPropertyNoteCell *)arg1 ;
-(void)setAllowsSettingLinkedContactsAsPreferred:(BOOL)arg1 ;
-(BOOL)allowsActionsModel;
-(void)setHideCardActions:(BOOL)arg1 ;
-(void)setAllowsActionsModel:(BOOL)arg1 ;
-(BOOL)editingProposedInformation;
-(void)setEditingProposedInformation:(BOOL)arg1 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(NSAttributedString *)verifiedInfoMessage;
-(void)setVerifiedInfoMessage:(NSAttributedString *)arg1 ;
-(void)setPrimaryProperty:(NSString *)arg1 ;
-(UIViewController *)personHeaderViewController;
-(void)setCardTopGroup:(CNCardGroup *)arg1 ;
-(CNCardGroup *)cardBottomGroup;
-(void)setCardBottomGroup:(CNCardGroup *)arg1 ;
-(CNCardGroup *)cardFooterGroup;
-(void)setMutableContact:(CNMutableContact *)arg1 ;
-(NSMutableArray *)issuedSaveRequestIdentifiers;
-(NSArray *)nameEditingGroups;
-(void)setIssuedSaveRequestIdentifiers:(NSMutableArray *)arg1 ;
-(void)setShadowCopyOfReadonlyContact:(CNMutableContact *)arg1 ;
-(void)setEditingGroups:(NSMutableArray *)arg1 ;
-(void)setDisplayContactView:(CNContactView *)arg1 ;
-(void)setEditingContactView:(CNContactView *)arg1 ;
-(void)setDisplayHeaderView:(CNContactHeaderDisplayView *)arg1 ;
-(CNPropertyFaceTimeAction *)faceTimeAction;
-(void)setEditingHeaderView:(CNContactHeaderEditView *)arg1 ;
-(CNUIEditAuthorizationController *)editAuthorizationController;
-(void)setEditAuthorizationController:(CNUIEditAuthorizationController *)arg1 ;
-(long long)editAuthorizationResult;
-(void)setEditAuthorizationResult:(long long)arg1 ;
-(void)setNameEditingGroups:(NSArray *)arg1 ;
-(NSMutableDictionary *)groupsAfterGroup;
-(void)setGroupsAfterGroup:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)cachedLabelWidths;
-(void)setCachedLabelWidths:(NSMapTable *)arg1 ;
-(void)setTitle:(id)arg1 ;
-(NSArray *)extraRightBarButtonItems;
-(void)setExtraRightBarButtonItems:(NSArray *)arg1 ;
-(NSArray *)extraLeftBarButtonItems;
-(void)setExtraLeftBarButtonItems:(NSArray *)arg1 ;
-(CNCardGroup *)cardActionsGroup;
-(void)setCardActionsGroup:(CNCardGroup *)arg1 ;
-(void)setBlockAction:(CNContactToggleBlockCallerAction *)arg1 ;
-(CNCardGroup *)cardShareLocationGroup;
-(void)setCardShareLocationGroup:(CNCardGroup *)arg1 ;
-(CNCardGroup *)cardMedicalIDGroup;
-(NSArray *)customActions;
-(void)setCardMedicalIDGroup:(CNCardGroup *)arg1 ;
-(CNCardGroup *)cardBlockContactGroup;
-(void)setCardBlockContactGroup:(CNCardGroup *)arg1 ;
-(CNCardLinkedCardsGroup *)cardLinkedCardsGroup;
-(void)setCardLinkedCardsGroup:(CNCardLinkedCardsGroup *)arg1 ;
-(void)setCustomActions:(NSArray *)arg1 ;
-(CNPropertyAction *)sendMessageAction;
-(void)setSendMessageAction:(CNPropertyAction *)arg1 ;
-(void)setFaceTimeAction:(CNPropertyFaceTimeAction *)arg1 ;
-(CNPropertyLinkedCardsAction *)linkedCardsAction;
-(void)setLinkedCardsAction:(CNPropertyLinkedCardsAction *)arg1 ;
-(CNContactAddLinkedCardAction *)addLinkedCardAction;
-(void)setAddLinkedCardAction:(CNContactAddLinkedCardAction *)arg1 ;
-(CNContactAction *)shareContactAction;
-(CNContactAddFavoriteAction *)addFavoriteAction;
-(void)setShareContactAction:(CNContactAction *)arg1 ;
-(CNContactAction *)createReminderAction;
-(void)setCreateReminderAction:(CNContactAction *)arg1 ;
-(UIKeyCommand *)cancelCommand;
-(void)setAddFavoriteAction:(CNContactAddFavoriteAction *)arg1 ;
-(CNContactAddNewFieldAction *)addNewFieldAction;
-(void)setAddNewFieldAction:(CNContactAddNewFieldAction *)arg1 ;
-(CNContactActionsContainerView *)actionsWrapperView;
-(CNContactCreateNewContactAction *)createNewContactAction;
-(void)setCreateNewContactAction:(CNContactCreateNewContactAction *)arg1 ;
-(CNContactAddToExistingContactAction *)addToExistingContactAction;
-(void)setAddToExistingContactAction:(CNContactAddToExistingContactAction *)arg1 ;
-(CNContactUpdateExistingContactAction *)updateExistingContactAction;
-(CNContactSuggestionAction *)suggestedContactAction;
-(void)setUpdateExistingContactAction:(CNContactUpdateExistingContactAction *)arg1 ;
-(void)setSuggestedContactAction:(CNContactSuggestionAction *)arg1 ;
-(CNContactClearRecentsDataAction *)clearRecentsDataAction;
-(void)setClearRecentsDataAction:(CNContactClearRecentsDataAction *)arg1 ;
-(CNContactAction *)stopSharingWithFamilyAction;
-(NSLayoutConstraint *)headerHeightConstraint;
-(void)setStopSharingWithFamilyAction:(CNContactAction *)arg1 ;
-(void)setHeaderHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setActionsWrapperView:(CNContactActionsContainerView *)arg1 ;
-(void)setShareLocationController:(CNShareLocationController *)arg1 ;
-(UIView *)headerDropShadowView;
-(void)setHeaderDropShadowView:(UIView *)arg1 ;
-(CNMedicalIDAction *)medicalIDAction;
-(void)setMedicalIDAction:(CNMedicalIDAction *)arg1 ;
-(CNEmergencyContactAction *)emergencyContactAction;
-(CNCardGroup *)cardEditingActionsGroup;
-(void)setEmergencyContactAction:(CNEmergencyContactAction *)arg1 ;
-(id<CNHealthStoreManagerToken>)medicalIDRegistrationToken;
-(NSString *)emergencyNumberIdentifier;
-(void)setMedicalIDRegistrationToken:(id<CNHealthStoreManagerToken>)arg1 ;
-(void)setEmergencyNumberIdentifier:(NSString *)arg1 ;
-(CNContactAction *)deleteContactAction;
-(void)setCardEditingActionsGroup:(CNCardGroup *)arg1 ;
-(CNCardGroup *)cardEditingDeleteContactGroup;
-(CNCardPropertyGeminiGroup *)cardEditingGeminiGroup;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)setCardEditingDeleteContactGroup:(CNCardGroup *)arg1 ;
-(void)setCardEditingGeminiGroup:(CNCardPropertyGeminiGroup *)arg1 ;
-(CNContactAction *)ignoreContactAction;
-(void)setDeleteContactAction:(CNContactAction *)arg1 ;
-(void)setIgnoreContactAction:(CNContactAction *)arg1 ;
-(CNSiriContactContextProvider *)siriContextProvider;
-(NSString *)initialPrompt;
-(void)setSiriContextProvider:(CNSiriContactContextProvider *)arg1 ;
-(id<CNCancelable>)iMessageIDSLookupToken;
-(void)setIMessageIDSLookupToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)faceTimeIDSLookupToken;
-(void)setFaceTimeIDSLookupToken:(id<CNCancelable>)arg1 ;
-(BOOL)outOfProcessSetupComplete;
-(void)setOutOfProcessSetupComplete:(BOOL)arg1 ;
-(BOOL)isPresentingFullscreenForOutOfProcess;
-(NSDictionary *)propertyGroups;
-(void)setIsPresentingFullscreenForOutOfProcess:(BOOL)arg1 ;
-(BOOL)didSetFirstResponder;
-(void)setSaveCommand:(UIKeyCommand *)arg1 ;
-(void)setDidSetFirstResponder:(BOOL)arg1 ;
-(NSArray *)highlightedProperties;
-(void)setHighlightedProperties:(NSArray *)arg1 ;
-(BOOL)contactSupportsTTYCalls;
-(void)setContactSupportsTTYCalls:(BOOL)arg1 ;
-(void)setEditCommand:(UIKeyCommand *)arg1 ;
-(NSMutableArray *)displayGroups;
-(void)setCancelCommand:(UIKeyCommand *)arg1 ;
-(double)keyboardVerticalOverlap;
-(void)setKeyboardVerticalOverlap:(double)arg1 ;
-(id)_faceTimeAudioAction;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)preEditLeftBarButtonItems;
-(void)setPreEditLeftBarButtonItems:(NSArray *)arg1 ;
-(void)setAccessAuthorization:(CNAccessAuthorization *)arg1 ;
-(BOOL)layoutPositionallyAfterNavBar;
-(void)setLayoutPositionallyAfterNavBar:(BOOL)arg1 ;
-(void)setInitialPrompt:(NSString *)arg1 ;
-(BOOL)shouldIgnoreBlockListChange;
-(void)setShouldIgnoreBlockListChange:(BOOL)arg1 ;
-(CNAccessAuthorization *)accessAuthorization;
-(NSDictionary *)linkedPoliciesByContactIdentifier;
-(void)setLinkedPoliciesByContactIdentifier:(NSDictionary *)arg1 ;
-(NSArray *)missingRequiredKeys;
-(void)setMissingRequiredKeys:(NSArray *)arg1 ;
-(void)setOriginalContacts:(NSArray *)arg1 ;
-(BOOL)allowsEditInApp;
-(void)setAllowsEditInApp:(BOOL)arg1 ;
-(BOOL)shouldDrawNavigationBar;
-(void)setShouldDrawNavigationBar:(BOOL)arg1 ;
-(id<CNUIContactSaveExecutor>)saveContactExecutor;
-(void)setSaveContactExecutor:(id<CNUIContactSaveExecutor>)arg1 ;
-(id<CNUIContactSaveExecutor>)saveLinkedContactsExecutor;
-(void)setSaveLinkedContactsExecutor:(id<CNUIContactSaveExecutor>)arg1 ;
-(BOOL)shouldIgnoreContactStoreDidChangeNotification;
-(void)setShouldIgnoreContactStoreDidChangeNotification:(BOOL)arg1 ;
-(void)setRecentsData:(CNContactRecentsReference *)arg1 ;
-(BOOL)showingMeContact;
-(CNCardFaceTimeGroup *)cardFaceTimeGroup;
-(void)setCardFaceTimeGroup:(CNCardFaceTimeGroup *)arg1 ;
-(void)setDisplayGroups:(NSMutableArray *)arg1 ;
-(void)setShowingMeContact:(BOOL)arg1 ;
-(CNPropertyFaceTimeAction *)faceTimeAudioAction;
-(void)setFaceTimeAudioAction:(CNPropertyFaceTimeAction *)arg1 ;
-(CNContactRecentsReference *)recentsData;
-(void)setMode:(long long)arg1 ;
-(BOOL)allowsActions;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)reloadDataPreservingChanges:(BOOL)arg1 ;
-(void)setActionProvider:(CNContactActionProvider *)arg1 ;
-(BOOL)needsReload;
-(BOOL)allowsDisplayModePickerActions;
-(void)setAllowsDisplayModePickerActions:(BOOL)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg1 ;
-(UIEdgeInsets)peripheryInsets;
-(CNContainer *)parentContainer;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(BOOL)allowsDeletion;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)setRunningPPT:(BOOL)arg1 ;
-(BOOL)shouldShowGemini;
-(CNMutableContact *)mutableContact;
-(BOOL)isMailVIP;
-(id<CNContactContentViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<CNContactContentViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)allowsSharing;
-(void)viewDidLoad;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(CNContactInlineActionsViewController *)actionsViewController;
-(void)setActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(BOOL)isModalInPresentation;
-(NSMutableArray *)editingLinkedContacts;
-(void)setEditingLinkedContacts:(NSMutableArray *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithContact:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 ;
-(void)adjustInsetsForKeyboardOverlap:(double)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(BOOL)reloadDataIfNeeded;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3 ;
-(void)actionDidUpdate:(id)arg1 ;
-(void)actionWasCanceled:(id)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)setTableView:(UITableView *)arg1 ;
-(CNUIContactsEnvironment *)environment;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(CNGroup *)parentGroup;
-(CNUIUserActionListDataSource *)actionsDataSource;
-(void)setActionsDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)updateWithNewContact:(id)arg1 ;
-(NSArray *)activatedConstraints;
-(void)setActivatedConstraints:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(void)loadView;
-(void)setImportantMessage:(NSString *)arg1 ;
-(NSString *)importantMessage;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(void)setAllowsEditPhoto:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)setAllowsEditPhoto:(BOOL)arg1 preservingChanges:(BOOL)arg2 ;
-(BOOL)allowsEditPhoto;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPresentingModalViewController;
-(BOOL)shouldShowActionsForAvatarView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)indexOfGroup:(id)arg1 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(CNMutableContact *)shadowCopyOfReadonlyContact;
-(BOOL)saveWasAuthorized;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)editCancel;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)actionDidFinish:(id)arg1 ;
-(void)setupConstraints;
-(void)viewDidLayoutSubviews;
-(id<CNContactViewControllerPPTDelegate>)pptDelegate;
-(BOOL)allowsContactBlocking;
-(void)dealloc;
-(CNContactView *)contactView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_faceTimeAction;
-(id)_linkedCardsAction;
-(id)_addLinkedCardAction;
-(id)_shareContactAction;
-(id)_addNewFieldAction;
-(id)_addToExistingContactAction;
-(id)_updateExistingContactAction;
-(id)_clearRecentsDataAction;
-(BOOL)saveChanges;
-(void)editCancel:(id)arg1 ;
-(NSArray *)cardActions;
-(BOOL)performSave;
@end

