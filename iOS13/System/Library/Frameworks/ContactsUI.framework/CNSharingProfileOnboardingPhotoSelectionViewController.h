/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/CNSharingProfilePhotoPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerViewControllerDelegate.h>

@protocol CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, AVTAvatarRecord;
@class CNContact, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, OBBoldTrayButton, CNSharingProfilePhotoPickerViewController, CNPhotoPickerViewController, CNMutableContact, NSString;

@interface CNSharingProfileOnboardingPhotoSelectionViewController : OBWelcomeController <CNSharingProfilePhotoPickerViewControllerDelegate, CNPhotoPickerViewControllerDelegate> {

	id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate> _delegate;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;
	CNSharingProfileLogger* _logger;
	OBBoldTrayButton* _confirmButton;
	CNSharingProfilePhotoPickerViewController* _sharingPhotoPickerViewController;
	CNPhotoPickerViewController* _photoPickerViewController;
	CNMutableContact* _photoProviderContact;

}

@property (nonatomic,retain) CNContact * contact;                                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                               //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;              //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (nonatomic,retain) CNSharingProfileLogger * logger;                                                                //@synthesize logger=_logger - In the implementation block
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
-(id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate>)arg1 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)contentView;
-(void)loadView;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)photoPickerDidCancel:(id)arg1 ;
-(void)photoPicker:(id)arg1 didUpdatePhotoForContact:(id)arg2 withContactImage:(id)arg3 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(OBBoldTrayButton *)confirmButton;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)updateForContentSizeCategoryChange;
-(void)didTapDoneButton:(id)arg1 ;
-(void)sharingPhotoPickerDidSelectAddItem:(id)arg1 ;
-(id)initWithContact:(id)arg1 avatarRecord:(id)arg2 avatarItemProviderConfiguration:(id)arg3 ;
-(unsigned long long)imageTypeFromAvatarType:(long long)arg1 ;
-(CNSharingProfilePhotoPickerViewController *)sharingPhotoPickerViewController;
-(void)setSharingPhotoPickerViewController:(CNSharingProfilePhotoPickerViewController *)arg1 ;
-(CNPhotoPickerViewController *)photoPickerViewController;
-(void)setPhotoPickerViewController:(CNPhotoPickerViewController *)arg1 ;
-(CNMutableContact *)photoProviderContact;
-(void)setPhotoProviderContact:(CNMutableContact *)arg1 ;
@end

