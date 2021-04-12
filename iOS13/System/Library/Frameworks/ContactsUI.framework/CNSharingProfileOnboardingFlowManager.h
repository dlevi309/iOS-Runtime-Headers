/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CNSharingProfileOnboardingAudienceViewControllerDelegate.h>
#import <libobjc.A.dylib/CNPhotoPickerVariantListControllerDelegate.h>
#import <libobjc.A.dylib/CNSharingProfileOnboardingVariantViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarEditingManagerDelegate.h>

@protocol CNSharingProfileOnboardingFlowManagerDelegate, AVTAvatarRecord;
@class UINavigationController, CNContact, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileOnboardingPhotoSelectionViewController, CNSharingProfileOnboardingVariantViewController, CNSharingProfileOnboardingAudienceViewController, CNSharingProfileOnboardingPhotoSelectionResult, CNPhotoPickerVariantsManager, CNPhotoPickerProviderItem, CNAvatarEditingManager, CNSharingProfileLogger, NSString;

@interface CNSharingProfileOnboardingFlowManager : NSObject <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, CNSharingProfileOnboardingAudienceViewControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate, CNAvatarEditingManagerDelegate> {

	BOOL _isRunningFlow;
	BOOL _didPersistToMeCard;
	id<CNSharingProfileOnboardingFlowManagerDelegate> _delegate;
	UINavigationController* _navigationController;
	CNContact* _contact;
	id<AVTAvatarRecord> _avatarRecord;
	CNSharingProfileAvatarItemProviderConfiguration* _avatarItemProviderConfiguration;
	CNSharingProfileOnboardingPhotoSelectionViewController* _photoSelectionController;
	CNSharingProfileOnboardingVariantViewController* _variantController;
	CNSharingProfileOnboardingAudienceViewController* _audienceViewController;
	CNSharingProfileOnboardingPhotoSelectionResult* _photoSelectionResult;
	CNPhotoPickerVariantsManager* _variantsManager;
	CNPhotoPickerProviderItem* _selectedVariantItem;
	CNAvatarEditingManager* _avatarEditingManager;
	CNSharingProfileLogger* _logger;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                                  //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                               //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) CNSharingProfileAvatarItemProviderConfiguration * avatarItemProviderConfiguration;              //@synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL isRunningFlow;                                                                             //@synthesize isRunningFlow=_isRunningFlow - In the implementation block
@property (assign,nonatomic) BOOL didPersistToMeCard;                                                                        //@synthesize didPersistToMeCard=_didPersistToMeCard - In the implementation block
@property (nonatomic,retain) CNSharingProfileOnboardingPhotoSelectionViewController * photoSelectionController;              //@synthesize photoSelectionController=_photoSelectionController - In the implementation block
@property (nonatomic,retain) CNSharingProfileOnboardingVariantViewController * variantController;                            //@synthesize variantController=_variantController - In the implementation block
@property (nonatomic,retain) CNSharingProfileOnboardingAudienceViewController * audienceViewController;                      //@synthesize audienceViewController=_audienceViewController - In the implementation block
@property (nonatomic,retain) CNSharingProfileOnboardingPhotoSelectionResult * photoSelectionResult;                          //@synthesize photoSelectionResult=_photoSelectionResult - In the implementation block
@property (nonatomic,retain) CNPhotoPickerVariantsManager * variantsManager;                                                 //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * selectedVariantItem;                                                //@synthesize selectedVariantItem=_selectedVariantItem - In the implementation block
@property (nonatomic,retain) CNAvatarEditingManager * avatarEditingManager;                                                  //@synthesize avatarEditingManager=_avatarEditingManager - In the implementation block
@property (nonatomic,retain) CNSharingProfileLogger * logger;                                                                //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingFlowManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id<CNSharingProfileOnboardingFlowManagerDelegate>)delegate;
-(void)setDelegate:(id<CNSharingProfileOnboardingFlowManagerDelegate>)arg1 ;
-(CNSharingProfileLogger *)logger;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(UINavigationController *)navigationController;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(CNSharingProfileAvatarItemProviderConfiguration *)avatarItemProviderConfiguration;
-(void)setAvatarItemProviderConfiguration:(CNSharingProfileAvatarItemProviderConfiguration *)arg1 ;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)setVariantsManager:(CNPhotoPickerVariantsManager *)arg1 ;
-(void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2 ;
-(void)photoPickerVariantListControllerDidCancel:(id)arg1 ;
-(void)avatarPosePickerManager:(id)arg1 didFinishWithProviderItem:(id)arg2 ;
-(void)onboardingVariantControllerDidTapContinue:(id)arg1 ;
-(void)onboardingVariantControllerDidTapPose:(id)arg1 ;
-(void)audienceViewController:(id)arg1 didFinishWithContact:(id)arg2 sharingAudience:(unsigned long long)arg3 ;
-(void)photoSelectionViewControllerDidFinishWithResult:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4 ;
-(id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4 logger:(id)arg5 ;
-(void)startFlow;
-(id)prepareVariantsControllerForResult:(id)arg1 ;
-(id)providerItemForPhotoResult:(id)arg1 ;
-(void)presentMeCardPersistanceAlertWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)imageTypeForAvatarType:(long long)arg1 ;
-(void)saveCurrentInfoToMeCard;
-(void)presentNameAndAudienceControllerForContact:(id)arg1 ;
-(void)presentAnimojiPoseCapture;
-(BOOL)isRunningFlow;
-(void)setIsRunningFlow:(BOOL)arg1 ;
-(BOOL)didPersistToMeCard;
-(void)setDidPersistToMeCard:(BOOL)arg1 ;
-(CNSharingProfileOnboardingPhotoSelectionViewController *)photoSelectionController;
-(void)setPhotoSelectionController:(CNSharingProfileOnboardingPhotoSelectionViewController *)arg1 ;
-(CNSharingProfileOnboardingVariantViewController *)variantController;
-(void)setVariantController:(CNSharingProfileOnboardingVariantViewController *)arg1 ;
-(CNSharingProfileOnboardingAudienceViewController *)audienceViewController;
-(void)setAudienceViewController:(CNSharingProfileOnboardingAudienceViewController *)arg1 ;
-(CNSharingProfileOnboardingPhotoSelectionResult *)photoSelectionResult;
-(void)setPhotoSelectionResult:(CNSharingProfileOnboardingPhotoSelectionResult *)arg1 ;
-(CNPhotoPickerProviderItem *)selectedVariantItem;
-(void)setSelectedVariantItem:(CNPhotoPickerProviderItem *)arg1 ;
-(CNAvatarEditingManager *)avatarEditingManager;
-(void)setAvatarEditingManager:(CNAvatarEditingManager *)arg1 ;
@end

