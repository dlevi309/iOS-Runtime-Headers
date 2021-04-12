/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingSettingsHeaderViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingEnabledDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>

@protocol CNMeCardSharingSettingsViewControllerDelegate, CNMeCardSharingAvatarProvider, CNMeCardSharingNameProvider;
@class CNContactStore, CNContact, CNMutableContact, CNContactImage, NSString, CNMeCardSharingPickerLayoutAttributes, CNMeCardSharingSettingsHeaderViewController, CNMeCardSharingSettingsNameDataSource, CNMeCardSharingEnabledDataSource, CNMeCardSharingAudienceDataSource, CNPhotoPickerViewController, NSArray, UISwitch, UITableView, UITextField, CNMeCardSharingContactAvatarProvider, CNSharingProfileLogger;

@interface CNMeCardSharingSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CNMeCardSharingSettingsHeaderViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate> {

	BOOL _shouldSetAsMeContact;
	id<CNMeCardSharingSettingsViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNContact* _contact;
	CNMutableContact* _editingContact;
	CNContactImage* _editingContactImage;
	NSString* _editingGivenName;
	NSString* _editingFamilyName;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	CNMeCardSharingSettingsHeaderViewController* _headerViewController;
	id<CNMeCardSharingAvatarProvider> _avatarProvider;
	id<CNMeCardSharingNameProvider> _nameProvider;
	CNMeCardSharingSettingsNameDataSource* _nameDataSource;
	CNMeCardSharingEnabledDataSource* _enabledDataSource;
	CNMeCardSharingAudienceDataSource* _sharingAudienceDataSource;
	CNPhotoPickerViewController* _photoPicker;
	NSArray* _sectionDataSources;
	UISwitch* _shareSwitch;
	UITableView* _tableView;
	long long _nameOrder;
	UITextField* _givenNameField;
	UITextField* _familyNameField;
	CNMeCardSharingContactAvatarProvider* _editingContactAvatarProvider;
	CNSharingProfileLogger* _logger;
	double _keyboardHeight;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                              //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNMutableContact * editingContact;                                                //@synthesize editingContact=_editingContact - In the implementation block
@property (nonatomic,retain) CNContactImage * editingContactImage;                                             //@synthesize editingContactImage=_editingContactImage - In the implementation block
@property (nonatomic,retain) NSString * editingGivenName;                                                      //@synthesize editingGivenName=_editingGivenName - In the implementation block
@property (nonatomic,retain) NSString * editingFamilyName;                                                     //@synthesize editingFamilyName=_editingFamilyName - In the implementation block
@property (nonatomic,readonly) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                       //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) CNMeCardSharingSettingsHeaderViewController * headerViewController;               //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,readonly) id<CNMeCardSharingAvatarProvider> avatarProvider;                               //@synthesize avatarProvider=_avatarProvider - In the implementation block
@property (nonatomic,readonly) id<CNMeCardSharingNameProvider> nameProvider;                                   //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,readonly) CNMeCardSharingSettingsNameDataSource * nameDataSource;                         //@synthesize nameDataSource=_nameDataSource - In the implementation block
@property (nonatomic,readonly) CNMeCardSharingEnabledDataSource * enabledDataSource;                           //@synthesize enabledDataSource=_enabledDataSource - In the implementation block
@property (nonatomic,readonly) CNMeCardSharingAudienceDataSource * sharingAudienceDataSource;                  //@synthesize sharingAudienceDataSource=_sharingAudienceDataSource - In the implementation block
@property (nonatomic,retain) CNPhotoPickerViewController * photoPicker;                                        //@synthesize photoPicker=_photoPicker - In the implementation block
@property (nonatomic,retain) NSArray * sectionDataSources;                                                     //@synthesize sectionDataSources=_sectionDataSources - In the implementation block
@property (nonatomic,retain) UISwitch * shareSwitch;                                                           //@synthesize shareSwitch=_shareSwitch - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long nameOrder;                                                              //@synthesize nameOrder=_nameOrder - In the implementation block
@property (nonatomic,retain) UITextField * givenNameField;                                                     //@synthesize givenNameField=_givenNameField - In the implementation block
@property (nonatomic,retain) UITextField * familyNameField;                                                    //@synthesize familyNameField=_familyNameField - In the implementation block
@property (nonatomic,retain) CNMeCardSharingContactAvatarProvider * editingContactAvatarProvider;              //@synthesize editingContactAvatarProvider=_editingContactAvatarProvider - In the implementation block
@property (assign,nonatomic) BOOL shouldSetAsMeContact;                                                        //@synthesize shouldSetAsMeContact=_shouldSetAsMeContact - In the implementation block
@property (nonatomic,readonly) CNSharingProfileLogger * logger;                                                //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) double keyboardHeight;                                                            //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingSettingsViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL sharingEnabled; 
@property (nonatomic,readonly) unsigned long long selectedSharingAudience; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(void)dealloc;
-(id<CNMeCardSharingSettingsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNMeCardSharingSettingsViewControllerDelegate>)arg1 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)sharingEnabled;
-(CNMeCardSharingSettingsNameDataSource *)nameDataSource;
-(long long)nameOrder;
-(void)setNameOrder:(long long)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(BOOL)arg2 ;
-(void)sharingSettingsHeaderWasTapped:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contact:(id)arg2 avatarProvider:(id)arg3 nameProvider:(id)arg4 sharingEnabled:(BOOL)arg5 selectedSharingAudience:(unsigned long long)arg6 ;
-(void)presentErrorAlertForEmptyPhotoIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyDelegateOfChangesWithDidSaveToMeCard:(BOOL)arg1 ;
-(void)givenNameDidChange:(id)arg1 ;
-(void)familyNameDidChange:(id)arg1 ;
-(void)updateVisibilityOfAudienceSection;
-(void)keyboardWillHide:(id)arg1 ;
-(void)adjustInsetsForKeyboardOverlap:(double)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(unsigned long long)selectedSharingAudience;
-(id)textFieldForIndex:(long long)arg1 ;
-(void)processSelectionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)promptForSavingToMeCard;
-(void)saveDraftContact;
-(void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2 ;
-(void)presentPhotoPickerControllerForContact:(id)arg1 ;
-(CNMutableContact *)editingContact;
-(void)setEditingContact:(CNMutableContact *)arg1 ;
-(CNContactImage *)editingContactImage;
-(void)setEditingContactImage:(CNContactImage *)arg1 ;
-(NSString *)editingGivenName;
-(void)setEditingGivenName:(NSString *)arg1 ;
-(NSString *)editingFamilyName;
-(void)setEditingFamilyName:(NSString *)arg1 ;
-(CNMeCardSharingSettingsHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(CNMeCardSharingSettingsHeaderViewController *)arg1 ;
-(id<CNMeCardSharingAvatarProvider>)avatarProvider;
-(id<CNMeCardSharingNameProvider>)nameProvider;
-(CNMeCardSharingEnabledDataSource *)enabledDataSource;
-(CNMeCardSharingAudienceDataSource *)sharingAudienceDataSource;
-(CNPhotoPickerViewController *)photoPicker;
-(void)setPhotoPicker:(CNPhotoPickerViewController *)arg1 ;
-(NSArray *)sectionDataSources;
-(void)setSectionDataSources:(NSArray *)arg1 ;
-(UISwitch *)shareSwitch;
-(void)setShareSwitch:(UISwitch *)arg1 ;
-(UITextField *)givenNameField;
-(void)setGivenNameField:(UITextField *)arg1 ;
-(UITextField *)familyNameField;
-(void)setFamilyNameField:(UITextField *)arg1 ;
-(CNMeCardSharingContactAvatarProvider *)editingContactAvatarProvider;
-(void)setEditingContactAvatarProvider:(CNMeCardSharingContactAvatarProvider *)arg1 ;
-(BOOL)shouldSetAsMeContact;
-(void)setShouldSetAsMeContact:(BOOL)arg1 ;
-(double)keyboardHeight;
-(void)setKeyboardHeight:(double)arg1 ;
@end

