/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>

@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;
@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, NSString, CNPhotoPickerVariantListController, OBLinkTrayButton, OBBoldTrayButton, NSLayoutConstraint;

@interface CNSharingProfileOnboardingVariantViewController : OBWelcomeController <CNPhotoPickerVariantListControllerDelegate> {

	BOOL _shouldShowPoseButton;
	id<CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
	CNPhotoPickerProviderItem* _selectedItem;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNPhotoPickerProviderItem* _item;
	NSString* _variantName;
	CNPhotoPickerVariantListController* _variantListController;
	OBLinkTrayButton* _setupLaterButton;
	OBBoldTrayButton* _backButton;
	OBBoldTrayButton* _continueButton;
	OBLinkTrayButton* _poseButton;
	NSLayoutConstraint* _heightLayoutConstraint;

}

@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                     //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * item;                                                                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * variantName;                                                                             //@synthesize variantName=_variantName - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantListController * variantListController;                                         //@synthesize variantListController=_variantListController - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * setupLaterButton;                                                                //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * backButton;                                                                      //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * continueButton;                                                                  //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * poseButton;                                                                      //@synthesize poseButton=_poseButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightLayoutConstraint;                                                        //@synthesize heightLayoutConstraint=_heightLayoutConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate;              //@synthesize onboardingDelegate=_onboardingDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPoseButton;                                                                          //@synthesize shouldShowPoseButton=_shouldShowPoseButton - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * selectedItem;                                                           //@synthesize selectedItem=_selectedItem - In the implementation block
-(void)setBackButton:(OBBoldTrayButton *)arg1 ;
-(CNPhotoPickerProviderItem *)item;
-(OBLinkTrayButton *)poseButton;
-(void)setItem:(CNPhotoPickerProviderItem *)arg1 ;
-(void)viewDidLoad;
-(void)updateOriginalItem:(id)arg1 ;
-(id<CNSharingProfileOnboardingVariantViewControllerDelegate>)onboardingDelegate;
-(void)setVariantName:(NSString *)arg1 ;
-(id)initWithVariantsManager:(id)arg1 originalItem:(id)arg2 selectedVariantIdentifier:(id)arg3 ;
-(void)didTapPose:(id)arg1 ;
-(void)setOnboardingDelegate:(id<CNSharingProfileOnboardingVariantViewControllerDelegate>)arg1 ;
-(BOOL)shouldShowPoseButton;
-(void)setShouldShowPoseButton:(BOOL)arg1 ;
-(NSString *)variantName;
-(void)setPoseButton:(OBLinkTrayButton *)arg1 ;
-(NSLayoutConstraint *)heightLayoutConstraint;
-(void)setHeightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(CNPhotoPickerProviderItem *)selectedItem;
-(void)didTapBack:(id)arg1 ;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(void)didTapSetupLater:(id)arg1 ;
-(void)didTapContinue:(id)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(CNPhotoPickerVariantListController *)variantListController;
-(void)setVariantListController:(CNPhotoPickerVariantListController *)arg1 ;
-(OBLinkTrayButton *)setupLaterButton;
-(void)setSetupLaterButton:(OBLinkTrayButton *)arg1 ;
-(OBBoldTrayButton *)backButton;
-(OBBoldTrayButton *)continueButton;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setSelectedItem:(CNPhotoPickerProviderItem *)arg1 ;
@end

