/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNMeCardSharingOnboardingViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarEditingManagerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>

@protocol CNMeCardSharingOnboardingEditViewControllerDelegate, AVTAvatarRecord, CNMeCardSharingNameProvider;
@class CNContactStore, CNContact, CNMeCardSharingPickerLayoutAttributes, UITextField, CNMutableContact, NSString, CNMeCardSharingOnboardingAvatarCarouselViewController, CNMeCardSharingOnboardingHeaderViewController, CNPhotoPickerViewController, CNPhotoPickerVariantsManager, CNAvatarEditingManager, CNSharingProfileLogger;

@interface CNMeCardSharingOnboardingEditViewController : CNMeCardSharingOnboardingViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate, CNPhotoPickerViewControllerDelegate, CNAvatarEditingManagerDelegate, CNPhotoPickerVariantListControllerDelegate> {

	BOOL _delegateDoesRespondToOnboardingResultSelector;
	BOOL _shouldSetAsMeContact;
	id<CNMeCardSharingOnboardingEditViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	long long _nameOrder;
	UITextField* _givenNameField;
	UITextField* _familyNameField;
	CNMutableContact* _editingContact;
	CNMutableContact* _avatarCarouselEditingContact;
	NSString* _editingGivenName;
	NSString* _editingFamilyName;
	id<CNMeCardSharingNameProvider> _nameProvider;
	CNMeCardSharingOnboardingAvatarCarouselViewController* _avatarCarouselViewController;
	CNMeCardSharingOnboardingHeaderViewController* _headerViewController;
	CNPhotoPickerViewController* _photoPickerViewController;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNAvatarEditingManager* _posePicker;
	CNSharingProfileLogger* _logger;

}

@property (assign,nonatomic) BOOL delegateDoesRespondToOnboardingResultSelector;                                                //@synthesize delegateDoesRespondToOnboardingResultSelector=_delegateDoesRespondToOnboardingResultSelector - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                                                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                                  //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (assign,nonatomic) long long nameOrder;                                                                               //@synthesize nameOrder=_nameOrder - In the implementation block
@property (nonatomic,retain) UITextField * givenNameField;                                                                      //@synthesize givenNameField=_givenNameField - In the implementation block
@property (nonatomic,retain) UITextField * familyNameField;                                                                     //@synthesize familyNameField=_familyNameField - In the implementation block
@property (assign,nonatomic) BOOL shouldSetAsMeContact;                                                                         //@synthesize shouldSetAsMeContact=_shouldSetAsMeContact - In the implementation block
@property (nonatomic,retain) CNMutableContact * editingContact;                                                                 //@synthesize editingContact=_editingContact - In the implementation block
@property (nonatomic,retain) CNMutableContact * avatarCarouselEditingContact;                                                   //@synthesize avatarCarouselEditingContact=_avatarCarouselEditingContact - In the implementation block
@property (nonatomic,retain) NSString * editingGivenName;                                                                       //@synthesize editingGivenName=_editingGivenName - In the implementation block
@property (nonatomic,retain) NSString * editingFamilyName;                                                                      //@synthesize editingFamilyName=_editingFamilyName - In the implementation block
@property (nonatomic,retain) id<CNMeCardSharingNameProvider> nameProvider;                                                      //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingAvatarCarouselViewController * avatarCarouselViewController;              //@synthesize avatarCarouselViewController=_avatarCarouselViewController - In the implementation block
@property (nonatomic,retain) CNMeCardSharingOnboardingHeaderViewController * headerViewController;                              //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) CNPhotoPickerViewController * photoPickerViewController;                                           //@synthesize photoPickerViewController=_photoPickerViewController - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                    //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNAvatarEditingManager * posePicker;                                                               //@synthesize posePicker=_posePicker - In the implementation block
@property (nonatomic,readonly) CNSharingProfileLogger * logger;                                                                 //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingOnboardingEditViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
+(id)headerText;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(CNContactStore *)contactStore;
-(CNContact *)contact;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)avatarEditingManager:(id)arg1 didFinishWithProviderItem:(id)arg2 ;
-(id<CNMeCardSharingOnboardingEditViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)confirmButtonTitle;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CNMeCardSharingOnboardingEditViewControllerDelegate>)arg1 ;
-(void)handleConfirmButtonTapped;
-(long long)nameOrder;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(CNPhotoPickerViewController *)photoPickerViewController;
-(void)setPhotoPickerViewController:(CNPhotoPickerViewController *)arg1 ;
-(void)viewDidLoad;
-(void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2 ;
-(CNSharingProfileLogger *)logger;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(void)givenNameDidChange:(id)arg1 ;
-(void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)familyNameDidChange:(id)arg1 ;
-(void)adjustInsetsForKeyboardOverlap:(double)arg1 ;
-(id)textFieldForIndex:(long long)arg1 ;
-(void)promptForSavingToMeCard;
-(void)saveDraftContact;
-(CNMutableContact *)editingContact;
-(void)setEditingContact:(CNMutableContact *)arg1 ;
-(NSString *)editingGivenName;
-(void)setEditingGivenName:(NSString *)arg1 ;
-(NSString *)editingFamilyName;
-(void)setEditingFamilyName:(NSString *)arg1 ;
-(CNMeCardSharingOnboardingHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(CNMeCardSharingOnboardingHeaderViewController *)arg1 ;
-(void)setNameOrder:(long long)arg1 ;
-(UITextField *)givenNameField;
-(void)setGivenNameField:(UITextField *)arg1 ;
-(UITextField *)familyNameField;
-(void)setFamilyNameField:(UITextField *)arg1 ;
-(BOOL)shouldSetAsMeContact;
-(void)setShouldSetAsMeContact:(BOOL)arg1 ;
-(id<CNMeCardSharingNameProvider>)nameProvider;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)finishOnboardingWithProviderItem:(id)arg1 ;
-(void)avatarCarouselViewControllerDidTapPhotoPickerCell:(id)arg1 ;
-(void)updateAvatarCarouselContactName;
-(void)avatarCarouselViewControllerDidUpdateCenterMostItem:(id)arg1 ;
-(void)showAvatarPosePickerFromItem:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 avatarRecord:(id)arg4 ;
-(long long)contactImageSourceForType:(unsigned long long)arg1 ;
-(void)finishOnboardingWithDidSaveToMeContact:(BOOL)arg1 ;
-(void)setAvatarCarouselViewController:(CNMeCardSharingOnboardingAvatarCarouselViewController *)arg1 ;
-(CNAvatarEditingManager *)posePicker;
-(void)notifyDelegateWithContactImage:(id)arg1 didSaveToMeContact:(BOOL)arg2 ;
-(CNMutableContact *)avatarCarouselEditingContact;
-(void)presentPhotoPickerVariantListForItem:(id)arg1 FromViewController:(id)arg2 ;
-(void)setNameProvider:(id<CNMeCardSharingNameProvider>)arg1 ;
-(BOOL)delegateDoesRespondToOnboardingResultSelector;
-(CNMeCardSharingOnboardingAvatarCarouselViewController *)avatarCarouselViewController;
-(void)setDelegateDoesRespondToOnboardingResultSelector:(BOOL)arg1 ;
-(void)setAvatarCarouselEditingContact:(CNMutableContact *)arg1 ;
-(void)setPosePicker:(CNAvatarEditingManager *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

