/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class CNContactPickerViewController, NSArray, NSPredicate, NSString;

@interface ABPeoplePickerNavigationController : UINavigationController <CNContactPickerDelegate> {

	void* _addressBook;
	id _peoplePickerDelegate;
	CNContactPickerViewController* _contactPicker;
	BOOL _ignoreViewWillBePresented;
	NSArray* _displayedProperties;
	NSPredicate* _predicateForEnablingPerson;
	NSPredicate* _predicateForSelectionOfPerson;
	NSPredicate* _predicateForSelectionOfProperty;

}

@property (assign,nonatomic) id<ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate;              //@synthesize peoplePickerDelegate=_peoplePickerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                                      //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) const void* addressBook; 
@property (nonatomic,copy) NSPredicate * predicateForEnablingPerson;                                           //@synthesize predicateForEnablingPerson=_predicateForEnablingPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfPerson;                                        //@synthesize predicateForSelectionOfPerson=_predicateForSelectionOfPerson - In the implementation block
@property (nonatomic,copy) NSPredicate * predicateForSelectionOfProperty;                                      //@synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)contactStore;
-(id)init;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(const void*)addressBook;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)displayedProperties;
-(void)setupViewControllers;
-(BOOL)_allowsAutorotation;
-(void)_viewWillBePresented;
-(id)displayedPropertyKeys;
-(NSPredicate *)predicateForSelectionOfProperty;
-(void)setPredicateForSelectionOfProperty:(NSPredicate *)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(id)contactPickerPresentedViewController:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_endDelayingPresentation;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_isDelayingPresentation;
-(void)setAddressBook:(const void*)arg1 ;
-(NSPredicate *)predicateForEnablingPerson;
-(NSPredicate *)predicateForSelectionOfPerson;
-(BOOL)_shouldPreventCancelButtonsFromShowing;
-(void)_setViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id<ABPeoplePickerNavigationControllerDelegate>)peoplePickerDelegate;
-(void)setPeoplePickerDelegate:(id<ABPeoplePickerNavigationControllerDelegate>)arg1 ;
-(void)setPredicateForEnablingPerson:(NSPredicate *)arg1 ;
-(void)setPredicateForSelectionOfPerson:(NSPredicate *)arg1 ;
@end

