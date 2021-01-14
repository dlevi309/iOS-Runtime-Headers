/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>
#import <libobjc.A.dylib/CNContactPickerContentViewController.h>

@protocol CNContactPickerContentDelegate;
@class CNContactNavigationController, CNContactStoreDataSource, NSMutableArray, CNContainer, NSArray, NSString, NSPredicate, CNManagedConfiguration, FAFamilyMember, UINavigationController, UIBarButtonItem;

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController> {

	BOOL _clientWantsSingleContact;
	BOOL _clientWantsSingleProperty;
	BOOL _clientWantsMultipleContacts;
	BOOL _clientWantsMultipleProperties;
	BOOL _clientHasContactsAccess;
	BOOL _hidesSearchableSources;
	BOOL _onlyRealContacts;
	BOOL _ignoresParentalRestrictions;
	BOOL _allowsEditing;
	BOOL _allowsCancel;
	BOOL _allowsDeletion;
	BOOL _allowsDone;
	BOOL _hidesPromptInLandscape;
	id<CNContactPickerContentDelegate> _delegate;
	CNContactNavigationController* _contactNavigationController;
	CNContactStoreDataSource* _dataSource;
	NSMutableArray* _contactProperties;
	CNContainer* _parentContainer;
	NSArray* _displayedPropertyKeys;
	long long _cardActions;
	NSString* _prompt;
	NSString* _bannerTitle;
	NSString* _bannerValue;
	NSPredicate* _predicateForEnablingContact;
	NSPredicate* _predicateForSelectionOfContact;
	NSPredicate* _predicateForSelectionOfProperty;
	CNManagedConfiguration* _managedConfiguration;
	FAFamilyMember* _familyMember;
	NSArray* _prohibitedPropertyKeys;

}

@property (nonatomic,retain) CNContactNavigationController * contactNavigationController;              //@synthesize contactNavigationController=_contactNavigationController - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactProperties;                                       //@synthesize contactProperties=_contactProperties - In the implementation block
@property (nonatomic,retain) CNContainer * parentContainer;                                            //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,copy) NSArray * displayedPropertyKeys;                                            //@synthesize displayedPropertyKeys=_displayedPropertyKeys - In the implementation block
@property (assign,nonatomic) long long cardActions;                                                    //@synthesize cardActions=_cardActions - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources;                                              //@synthesize hidesSearchableSources=_hidesSearchableSources - In the implementation block
@property (assign,nonatomic) BOOL onlyRealContacts;                                                    //@synthesize onlyRealContacts=_onlyRealContacts - In the implementation block
@property (assign,nonatomic) BOOL ignoresParentalRestrictions;                                         //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                       //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCancel;                                                        //@synthesize allowsCancel=_allowsCancel - In the implementation block
@property (assign,nonatomic) BOOL allowsDeletion;                                                      //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                          //@synthesize allowsDone=_allowsDone - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                          //@synthesize prompt=_prompt - In the implementation block
@property (assign,nonatomic) BOOL hidesPromptInLandscape;                                              //@synthesize hidesPromptInLandscape=_hidesPromptInLandscape - In the implementation block
@property (nonatomic,copy) NSString * bannerTitle;                                                     //@synthesize bannerTitle=_bannerTitle - In the implementation block
@property (nonatomic,copy) NSString * bannerValue;                                                     //@synthesize bannerValue=_bannerValue - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForEnablingContact;                                  //@synthesize predicateForEnablingContact=_predicateForEnablingContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfContact;                               //@synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                              //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (nonatomic,retain) CNManagedConfiguration * managedConfiguration;                            //@synthesize managedConfiguration=_managedConfiguration - In the implementation block
@property (nonatomic,retain) FAFamilyMember * familyMember;                                            //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                         //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (assign,nonatomic) BOOL clientWantsSingleContact;                                            //@synthesize clientWantsSingleContact=_clientWantsSingleContact - In the implementation block
@property (assign,nonatomic) BOOL clientWantsSingleProperty;                                           //@synthesize clientWantsSingleProperty=_clientWantsSingleProperty - In the implementation block
@property (assign,nonatomic) BOOL clientWantsMultipleContacts;                                         //@synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts - In the implementation block
@property (assign,nonatomic) BOOL clientWantsMultipleProperties;                                       //@synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties - In the implementation block
@property (assign,nonatomic) BOOL clientHasContactsAccess;                                             //@synthesize clientHasContactsAccess=_clientHasContactsAccess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CNContactPickerContentDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController; 
@property (nonatomic,readonly) UIBarButtonItem * addContactBarButtonItem; 
+(id)descriptorForContactPropertiesSupportingPredicateEvaluation;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(void)setManagedConfiguration:(CNManagedConfiguration *)arg1 ;
-(CNManagedConfiguration *)managedConfiguration;
-(id)init;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(id<CNContactPickerContentDelegate>)delegate;
-(BOOL)allowsEditing;
-(UIBarButtonItem *)addContactBarButtonItem;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(CNContactStoreDataSource *)dataSource;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)invalidateSelectionAnimated:(BOOL)arg1 ;
-(NSArray *)displayedPropertyKeys;
-(void)setDisplayedPropertyKeys:(NSArray *)arg1 ;
-(NSPredicate *)predicateForEnablingContact;
-(void)setPredicateForEnablingContact:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForSelectionOfContact;
-(void)setPredicateForSelectionOfContact:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForSelectionOfProperty;
-(FAFamilyMember *)familyMember;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)setFamilyMember:(FAFamilyMember *)arg1 ;
-(CNContainer *)parentContainer;
-(BOOL)allowsCancel;
-(void)setParentContainer:(CNContainer *)arg1 ;
-(void)setCardActions:(long long)arg1 ;
-(BOOL)onlyRealContacts;
-(void)setOnlyRealContacts:(BOOL)arg1 ;
-(BOOL)ignoresParentalRestrictions;
-(void)setIgnoresParentalRestrictions:(BOOL)arg1 ;
-(void)setAllowsCancel:(BOOL)arg1 ;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(BOOL)hidesPromptInLandscape;
-(void)setHidesPromptInLandscape:(BOOL)arg1 ;
-(void)setBannerTitle:(NSString *)arg1 ;
-(void)setBannerValue:(NSString *)arg1 ;
-(void)setDelegate:(id<CNContactPickerContentDelegate>)arg1 ;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(BOOL)allowsDeletion;
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(NSArray *)prohibitedPropertyKeys;
-(void)invalidate;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(BOOL)contactNavigationControllerShouldAddNewContact:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2 ;
-(CNContactNavigationController *)contactNavigationController;
-(BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1 ;
-(BOOL)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)allowsDone;
-(void)setAllowsDone:(BOOL)arg1 ;
-(BOOL)hidesSearchableSources;
-(void)_selectedContact:(id)arg1 ;
-(id)_validatePredicatesWithError:(id*)arg1 ;
-(void)_updatePromptWithViewSize:(CGSize)arg1 transitionCoordinator:(id)arg2 ;
-(id)descriptorsForKeysRequiredByDelegate;
-(void)_selectedProperty:(id)arg1 ;
-(void)_selectedContacts:(id)arg1 ;
-(void)_selectedProperties:(id)arg1 ;
-(BOOL)clientWantsSingleContact;
-(void)setClientWantsSingleContact:(BOOL)arg1 ;
-(BOOL)clientWantsSingleProperty;
-(void)setClientWantsSingleProperty:(BOOL)arg1 ;
-(BOOL)clientWantsMultipleContacts;
-(void)setClientWantsMultipleContacts:(BOOL)arg1 ;
-(BOOL)clientWantsMultipleProperties;
-(NSMutableArray *)contactProperties;
-(void)setClientWantsMultipleProperties:(BOOL)arg1 ;
-(BOOL)clientHasContactsAccess;
-(void)setClientHasContactsAccess:(BOOL)arg1 ;
-(void)setContactNavigationController:(CNContactNavigationController *)arg1 ;
-(void)setContactProperties:(NSMutableArray *)arg1 ;
-(UINavigationController *)navigationController;
-(long long)cardActions;
-(NSString *)bannerTitle;
-(NSString *)bannerValue;
@end

