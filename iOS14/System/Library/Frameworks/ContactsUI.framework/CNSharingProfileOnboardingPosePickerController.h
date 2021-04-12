/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>

@protocol CNSharingProfileOnboardingPosePickerControllerDelegate, AVTAvatarRecord;
@class CNPhotoPickerVariantsManager, CNPhotoPickerVariantListController, OBLinkTrayButton, OBBoldTrayButton, NSLayoutConstraint;

@interface CNSharingProfileOnboardingPosePickerController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate> {

	id<CNSharingProfileOnboardingPosePickerControllerDelegate> _delegate;
	id<AVTAvatarRecord> _avatarRecord;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNPhotoPickerVariantListController* _variantListController;
	OBLinkTrayButton* _setupLaterButton;
	OBBoldTrayButton* _backButton;
	OBBoldTrayButton* _nextButton;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                        //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                          //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantListController * variantListController;                              //@synthesize variantListController=_variantListController - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * setupLaterButton;                                                     //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * backButton;                                                           //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * nextButton;                                                           //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                                   //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingPosePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setBackButton:(OBBoldTrayButton *)arg1 ;
-(OBBoldTrayButton *)nextButton;
-(id<CNSharingProfileOnboardingPosePickerControllerDelegate>)delegate;
-(void)setNextButton:(OBBoldTrayButton *)arg1 ;
-(void)setDelegate:(id<CNSharingProfileOnboardingPosePickerControllerDelegate>)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(NSLayoutConstraint *)heightConstraint;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)viewDidLoad;
-(void)didTapBack:(id)arg1 ;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 ;
-(void)didTapSetupLater:(id)arg1 ;
-(void)didTapContinue:(id)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(CNPhotoPickerVariantListController *)variantListController;
-(void)setVariantListController:(CNPhotoPickerVariantListController *)arg1 ;
-(OBLinkTrayButton *)setupLaterButton;
-(void)setSetupLaterButton:(OBLinkTrayButton *)arg1 ;
-(OBBoldTrayButton *)backButton;
-(void)viewDidLayoutSubviews;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

