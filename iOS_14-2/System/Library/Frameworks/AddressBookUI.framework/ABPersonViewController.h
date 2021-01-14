/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonViewControllerDelegate;
@class NSArray, CNContactViewController, CNContactStore, NSString;

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration> {

	BOOL _allowsEditing;
	BOOL _allowsActions;
	BOOL _shouldShowLinkedPeople;
	BOOL _highlightedImportant;
	int _style;
	int _highlightedProperty;
	int _highlightedMultiValueIdentifier;
	const void* _addressBook;
	const void* _displayedPerson;
	id<ABPersonViewControllerDelegate> _personViewDelegate;
	NSArray* _displayedProperties;
	CNContactViewController* _cnContactViewController;

}

@property (assign,nonatomic) int style;                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int highlightedProperty;                                            //@synthesize highlightedProperty=_highlightedProperty - In the implementation block
@property (assign,nonatomic) int highlightedMultiValueIdentifier;                                //@synthesize highlightedMultiValueIdentifier=_highlightedMultiValueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedImportant;                                          //@synthesize highlightedImportant=_highlightedImportant - In the implementation block
@property (nonatomic,retain) CNContactViewController * cnContactViewController;                  //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (assign,nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;              //@synthesize personViewDelegate=_personViewDelegate - In the implementation block
@property (assign,nonatomic) const void* addressBook;                                            //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) const void* displayedPerson;                                        //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                        //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                 //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkedPeople;                                        //@synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(CNContactStore *)contactStore;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)init;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(BOOL)allowsEditing;
-(const void*)addressBook;
-(id)initWithStyle:(int)arg1 ;
-(NSArray *)displayedProperties;
-(BOOL)allowsActions;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setStyle:(int)arg1 ;
-(void)loadView;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)setHighlightedProperty:(int)arg1 ;
-(int)style;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setAddressBook:(const void*)arg1 ;
-(const void*)displayedPerson;
-(CNContactViewController *)cnContactViewController;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(void)setShouldShowLinkedPeople:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 ;
-(void)reloadContactViewController;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3 ;
-(BOOL)shouldShowLinkedPeople;
-(id<ABPersonViewControllerDelegate>)personViewDelegate;
-(void)setHighlightedMultiValueIdentifier:(int)arg1 ;
-(void)setHighlightedImportant:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(int)highlightedProperty;
-(int)highlightedMultiValueIdentifier;
-(BOOL)highlightedImportant;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(void)setPersonViewDelegate:(id<ABPersonViewControllerDelegate>)arg1 ;
@end

