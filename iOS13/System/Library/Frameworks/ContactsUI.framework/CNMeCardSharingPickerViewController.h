/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMeCardSharingEnabledDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>

@protocol CNMeCardSharingPickerViewControllerDelegate, CNMeCardSharingAvatarProvider;
@class CNContactStore, CNContact, CNMutableContact, CNContactImage, CNMeCardSharingHeaderViewController, CNMeCardSharingAvatarViewController, CNMeCardSharingEnabledDataSource, CNMeCardSharingAudienceDataSource, CNMeCardSharingPickerLayoutAttributes, CNPhotoPickerViewController, NSArray, UIView, OBBoldTrayButton, OBLinkTrayButton, UISwitch, UITableView, NSString;

@interface CNMeCardSharingPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CNMeCardSharingAvatarViewControllerDelegate, CNMeCardSharingEnabledDelegate, CNPhotoPickerViewControllerDelegate> {

	BOOL _shouldSetMeContact;
	BOOL _sharingEnabled;
	unsigned long long _mode;
	id<CNMeCardSharingPickerViewControllerDelegate> _delegate;
	CNContactStore* _contactStore;
	CNContact* _contact;
	CNMutableContact* _draftContact;
	CNContactImage* _draftContactImage;
	CNMeCardSharingHeaderViewController* _headerViewController;
	id<CNMeCardSharingAvatarProvider> _avatarProvider;
	CNMeCardSharingAvatarViewController* _avatarViewController;
	CNMeCardSharingEnabledDataSource* _enabledDataSource;
	CNMeCardSharingAudienceDataSource* _sharingAudienceDataSource;
	CNMeCardSharingPickerLayoutAttributes* _layoutAttributes;
	CNPhotoPickerViewController* _photoPicker;
	NSArray* _sectionDataSources;
	UIView* _buttonTray;
	OBBoldTrayButton* _confirmButton;
	OBLinkTrayButton* _laterButton;
	UISwitch* _shareSwitch;
	UITableView* _tableView;

}

@property (assign,nonatomic) unsigned long long meCardSharingStatus; 
@property (nonatomic,retain) CNContactStore * contactStore;                                                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                          //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL shouldSetMeContact;                                                      //@synthesize shouldSetMeContact=_shouldSetMeContact - In the implementation block
@property (nonatomic,retain) CNMutableContact * draftContact;                                              //@synthesize draftContact=_draftContact - In the implementation block
@property (nonatomic,retain) CNContactImage * draftContactImage;                                           //@synthesize draftContactImage=_draftContactImage - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                                                          //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,retain) CNMeCardSharingHeaderViewController * headerViewController;                   //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) id<CNMeCardSharingAvatarProvider> avatarProvider;                             //@synthesize avatarProvider=_avatarProvider - In the implementation block
@property (nonatomic,retain) CNMeCardSharingAvatarViewController * avatarViewController;                   //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) CNMeCardSharingEnabledDataSource * enabledDataSource;                         //@synthesize enabledDataSource=_enabledDataSource - In the implementation block
@property (nonatomic,retain) CNMeCardSharingAudienceDataSource * sharingAudienceDataSource;                //@synthesize sharingAudienceDataSource=_sharingAudienceDataSource - In the implementation block
@property (nonatomic,retain) CNMeCardSharingPickerLayoutAttributes * layoutAttributes;                     //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) CNPhotoPickerViewController * photoPicker;                                    //@synthesize photoPicker=_photoPicker - In the implementation block
@property (nonatomic,retain) NSArray * sectionDataSources;                                                 //@synthesize sectionDataSources=_sectionDataSources - In the implementation block
@property (nonatomic,retain) UIView * buttonTray;                                                          //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                                             //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * laterButton;                                               //@synthesize laterButton=_laterButton - In the implementation block
@property (nonatomic,retain) UISwitch * shareSwitch;                                                       //@synthesize shareSwitch=_shareSwitch - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sharedName; 
@property (nonatomic,readonly) unsigned long long selectedNameFormat; 
@property (nonatomic,readonly) unsigned long long selectedSharingAudience; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id<CNMeCardSharingPickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNMeCardSharingPickerViewControllerDelegate>)arg1 ;
-(unsigned long long)mode;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(CNMeCardSharingPickerLayoutAttributes *)layoutAttributes;
-(void)setLayoutAttributes:(CNMeCardSharingPickerLayoutAttributes *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(UIView *)buttonTray;
-(void)setButtonTray:(UIView *)arg1 ;
-(CNMeCardSharingAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNMeCardSharingAvatarViewController *)arg1 ;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(void)sharingEnabledDataSource:(id)arg1 didChangeEnabledState:(BOOL)arg2 ;
-(unsigned long long)selectedSharingAudience;
-(void)saveDraftContact;
-(CNMeCardSharingHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(CNMeCardSharingHeaderViewController *)arg1 ;
-(id<CNMeCardSharingAvatarProvider>)avatarProvider;
-(CNMeCardSharingEnabledDataSource *)enabledDataSource;
-(CNMeCardSharingAudienceDataSource *)sharingAudienceDataSource;
-(CNPhotoPickerViewController *)photoPicker;
-(void)setPhotoPicker:(CNPhotoPickerViewController *)arg1 ;
-(NSArray *)sectionDataSources;
-(void)setSectionDataSources:(NSArray *)arg1 ;
-(UISwitch *)shareSwitch;
-(void)setShareSwitch:(UISwitch *)arg1 ;
-(void)setSharingAudienceDataSource:(CNMeCardSharingAudienceDataSource *)arg1 ;
-(void)setMeCardSharingStatus:(unsigned long long)arg1 ;
-(unsigned long long)meCardSharingStatus;
-(void)avatarViewControllerWasTapped:(id)arg1 ;
-(void)setAvatarProvider:(id<CNMeCardSharingAvatarProvider>)arg1 ;
-(OBBoldTrayButton *)confirmButton;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)didTapDoneButton:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 contact:(id)arg2 nameProvider:(id)arg3 sharingEnabled:(BOOL)arg4 selectedNameFormat:(unsigned long long)arg5 selectedSharingAudience:(unsigned long long)arg6 mode:(unsigned long long)arg7 ;
-(NSString *)sharedName;
-(unsigned long long)selectedNameFormat;
-(void)didTapSetUpLaterButton:(id)arg1 ;
-(BOOL)shouldSetMeContact;
-(void)setShouldSetMeContact:(BOOL)arg1 ;
-(CNMutableContact *)draftContact;
-(void)setDraftContact:(CNMutableContact *)arg1 ;
-(CNContactImage *)draftContactImage;
-(void)setDraftContactImage:(CNContactImage *)arg1 ;
-(void)setEnabledDataSource:(CNMeCardSharingEnabledDataSource *)arg1 ;
-(OBLinkTrayButton *)laterButton;
-(void)setLaterButton:(OBLinkTrayButton *)arg1 ;
@end

