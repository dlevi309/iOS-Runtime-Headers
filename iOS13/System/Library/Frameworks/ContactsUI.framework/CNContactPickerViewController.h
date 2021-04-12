/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactPickerContentDelegate.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol CNContactPickerDelegate, CNContactPickerContentViewController;
@class _UIRemoteViewController, NSArray, NSPredicate, UIViewController, CNContact, FAFamilyMember, NSString, UIBarButtonItem, UINavigationController;

@interface CNContactPickerViewController : UIViewController <CNContactPickerContentDelegate, _UIRemoteViewControllerContaining, UIAdaptivePresentationControllerDelegate> {

	BOOL _ignoreViewWillBePresented;
	BOOL _hidesSearchableSources;
	BOOL _onlyRealContacts;
	BOOL _ignoresParentalRestrictions;
	BOOL _allowsEditing;
	BOOL _allowsCancel;
	BOOL _allowsDone;
	BOOL _allowsDeletion;
	BOOL _hidesPromptInLandscape;
	BOOL _defaultViewControllerVisible;
	BOOL _autocloses;
	NSArray* _displayedPropertyKeys;
	id<CNContactPickerDelegate> _delegate;
	NSPredicate* _predicateForEnablingContact;
	NSPredicate* _predicateForSelectionOfContact;
	NSPredicate* _predicateForSelectionOfProperty;
	UIViewController*<CNContactPickerContentViewController> _viewController;
	CNContact* _scrollContact;
	FAFamilyMember* _familyMember;
	long long _mode;
	long long _behavior;
	long long _cardActions;
	NSArray* _prohibitedPropertyKeys;
	NSString* _prompt;
	NSString* _bannerTitle;
	NSString* _bannerValue;

}

@property (nonatomic,retain) UIViewController*<CNContactPickerContentViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) CNContact * scrollContact;                                                           //@synthesize scrollContact=_scrollContact - In the implementation block
@property (nonatomic,retain) FAFamilyMember * familyMember;                                                       //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
@property (assign,nonatomic) long long mode;                                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long behavior;                                                                  //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic) long long cardActions;                                                               //@synthesize cardActions=_cardActions - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                                         //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) BOOL onlyRealContacts;                                                               //@synthesize onlyRealContacts=_onlyRealContacts - In the implementation block
@property (assign,nonatomic) BOOL ignoresParentalRestrictions;                                                    //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                                    //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                                  //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCancel;                                                                   //@synthesize allowsCancel=_allowsCancel - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                                     //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion;                                                                 //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                     //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL hidesPromptInLandscape;                                                         //@synthesize hidesPromptInLandscape=_hidesPromptInLandscape - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                                //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (nonatomic,copy) NSString * bannerValue;                                                                //@synthesize bannerValue=_bannerValue - In the implementation block
@property (getter=isDefaultViewControllerVisible,readonly) BOOL defaultViewControllerVisible;                     //@synthesize defaultViewControllerVisible=_defaultViewControllerVisible - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (assign,nonatomic) BOOL autocloses;                                                                     //@synthesize autocloses=_autocloses - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                                       //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPickerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForEnablingContact;                                             //@synthesize predicateForEnablingContact=_predicateForEnablingContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfContact;                                          //@synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                         //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(void)dealloc;
-(id<CNContactPickerDelegate>)delegate;
-(void)setDelegate:(id<CNContactPickerDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setViewController:(UIViewController*<CNContactPickerContentViewController>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(UIViewController*<CNContactPickerContentViewController>)viewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isDelayingPresentation;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(UINavigationController *)navigationController;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(long long)behavior;
-(void)setBehavior:(long long)arg1 ;
-(void)_endDelayingPresentation;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(NSString *)bannerTitle;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)pickerDidSelectAddNewContact;
-(void)pickerDidSelectContact:(id)arg1 property:(id)arg2 ;
-(void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2 ;
-(void)pickerDidCancel;
-(id)_pickerPresentedViewController;
-(void)_checkConsistencyFromOptions:(id)arg1 ;
-(void)scrollToClosestContactMatching:(id)arg1 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(void)_viewWillBePresented;
-(void)_setViewController:(id)arg1 ;
-(void)_setupViewController;
-(BOOL)_shouldBeOutOfProcess;
-(void)_prepareViewController;
-(void)closePickerIfNeeded;
-(void)notifyDelegateForCancellation;
-(UIBarButtonItem *)addContactBarButtonItem;
-(void)popToDefaultViewController:(BOOL)arg1 ;
-(NSArray *)displayedPropertyKeys;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(NSPredicate *)predicateForEnablingContact;
-(void)setPredicateForEnablingContact:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForSelectionOfContact;
-(void)setPredicateForSelectionOfContact:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForSelectionOfProperty;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(CNContact *)scrollContact;
-(void)setScrollContact:(CNContact *)arg1 ;
-(FAFamilyMember *)familyMember;
-(void)setFamilyMember:(FAFamilyMember *)arg1 ;
-(long long)cardActions;
-(void)setCardActions:(long long)arg1 ;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(BOOL)onlyRealContacts;
-(void)setOnlyRealContacts:(BOOL)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(BOOL)allowsCancel;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(BOOL)allowsDone;
-(void)setAllowsDone:(BOOL)arg1 ;
-(BOOL)allowsDeletion;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(BOOL)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(BOOL)arg1 ;
-(void)setBannerTitle:(NSString *)arg1 ;
-(NSString *)bannerValue;
-(void)setBannerValue:(NSString *)arg1 ;
-(BOOL)isDefaultViewControllerVisible;
-(BOOL)autocloses;
-(void)setAutocloses:(BOOL)arg1 ;
@end

