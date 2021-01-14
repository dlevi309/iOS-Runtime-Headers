/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/CNSharingProfilePhotoPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>

@protocol CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, AVTAvatarRecord;
@class CNContact, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, OBLinkTrayButton, OBBoldTrayButton, CNSharingProfilePhotoPickerViewController, CNPhotoPickerViewController, CNMutableContact, NSString;

@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController <CNSharingProfilePhotoPickerViewControllerDelegate, CNPhotoPickerViewControllerDelegate> {

	id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> _delegate;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;
	CNSharingProfileLogger* _logger;
	OBLinkTrayButton* _setupLaterButton;
	OBBoldTrayButton* _backButton;
	OBBoldTrayButton* _confirmButton;
	CNSharingProfilePhotoPickerViewController* _sharingPhotoPickerViewController;
	CNPhotoPickerViewController* _photoPickerViewController;
	CNMutableContact* _photoProviderContact;

}

@property (nonatomic,retain) CNContact * contact;                                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                               //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;              //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (nonatomic,retain) CNSharingProfileLogger * logger;                                                                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * setupLaterButton;                                                            //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * backButton;                                                                  //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                                                               //@synthesize confirmButton=_confirmButton - In the implementation block
@property (nonatomic,retain) CNSharingProfilePhotoPickerViewController * sharingPhotoPickerViewController;                   //@synthesize sharingPhotoPickerViewController=_sharingPhotoPickerViewController - In the implementation block
@property (nonatomic,retain) CNPhotoPickerViewController * photoPickerViewController;                                        //@synthesize photoPickerViewController=_photoPickerViewController - In the implementation block
@property (nonatomic,retain) CNMutableContact * photoProviderContact;                                                        //@synthesize photoProviderContact=_photoProviderContact - In the implementation block
@property (assign,nonatomic) id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setBackButton:(OBBoldTrayButton *)arg1 ;
-(id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate>)delegate;
-(OBBoldTrayButton *)confirmButton;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)didTapDoneButton:(id)arg1 ;
-(void)updateForContentSizeCategoryChange;
-(void)setDelegate:(id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate>)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)didTapBackButton:(id)arg1 ;
-(void)sharingPhotoPickerDidSelectAddItem:(id)arg1 ;
-(void)didTapSetupLaterButton:(id)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 ;
-(CNMutableContact *)photoProviderContact;
-(CNSharingProfilePhotoPickerViewController *)sharingPhotoPickerViewController;
-(void)setSharingPhotoPickerViewController:(CNSharingProfilePhotoPickerViewController *)arg1 ;
-(CNPhotoPickerViewController *)photoPickerViewController;
-(void)setPhotoPickerViewController:(CNPhotoPickerViewController *)arg1 ;
-(void)setPhotoProviderContact:(CNMutableContact *)arg1 ;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(CNSharingProfileLogger *)logger;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(OBLinkTrayButton *)setupLaterButton;
-(void)setSetupLaterButton:(OBLinkTrayButton *)arg1 ;
-(OBBoldTrayButton *)backButton;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(void)loadView;
-(id)contentView;
@end

