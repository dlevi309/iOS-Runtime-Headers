/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPhotoPickerVariantListController.h>
#import <libobjc.A.dylib/_UIScrollViewLayoutObserver.h>

@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;
@class OBHeaderView, OBButtonTray, OBBoldTrayButton, OBLinkTrayButton, UINavigationController, OBNavigationBarDisplayState;

@interface CNSharingProfileOnboardingVariantViewController : CNPhotoPickerVariantListController <_UIScrollViewLayoutObserver> {

	BOOL _shouldShowPoseButton;
	id<CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
	OBHeaderView* _onboardingHeaderView;
	OBButtonTray* _buttonTray;
	OBBoldTrayButton* _continueButton;
	OBLinkTrayButton* _poseButton;
	UINavigationController* _retainedNavigationController;
	OBNavigationBarDisplayState* _cachedBarState;

}

@property (nonatomic,retain) OBHeaderView * onboardingHeaderView;                                                                //@synthesize onboardingHeaderView=_onboardingHeaderView - In the implementation block
@property (nonatomic,retain) OBButtonTray * buttonTray;                                                                          //@synthesize buttonTray=_buttonTray - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * continueButton;                                                                  //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * poseButton;                                                                      //@synthesize poseButton=_poseButton - In the implementation block
@property (nonatomic,retain) UINavigationController * retainedNavigationController;                                              //@synthesize retainedNavigationController=_retainedNavigationController - In the implementation block
@property (nonatomic,retain) OBNavigationBarDisplayState * cachedBarState;                                                       //@synthesize cachedBarState=_cachedBarState - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate;              //@synthesize onboardingDelegate=_onboardingDelegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPoseButton;                                                                          //@synthesize shouldShowPoseButton=_shouldShowPoseButton - In the implementation block
+(BOOL)_navigationBarTitleShouldShowForHeaderView:(id)arg1 inScrollView:(id)arg2 ;
+(void)updateNavigationBarWithNavigationItem:(id)arg1 forHeaderView:(id)arg2 inScrollView:(id)arg3 animated:(BOOL)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)navigationItem;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(OBBoldTrayButton *)continueButton;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_scrollViewDidLayoutSubviews:(id)arg1 ;
-(OBButtonTray *)buttonTray;
-(void)setButtonTray:(OBButtonTray *)arg1 ;
-(void)restoreNavigationBarAppearance;
-(void)setRetainedNavigationController:(UINavigationController *)arg1 ;
-(OBNavigationBarDisplayState *)cachedBarState;
-(void)setCachedBarState:(OBNavigationBarDisplayState *)arg1 ;
-(UINavigationController *)retainedNavigationController;
-(void)applyAutomaticScrollToEdgeBehaviorToNavigationItem:(id)arg1 withDistance:(double)arg2 ;
-(void)updateContentInsets:(UIEdgeInsets)arg1 ;
-(void)didTapContinue:(id)arg1 ;
-(void)didTapPose:(id)arg1 ;
-(void)updateTrayBackgroundForScrollView:(id)arg1 ;
-(BOOL)_scrollViewContentIsUnderTrayForScrollView:(id)arg1 ;
-(id<CNSharingProfileOnboardingVariantViewControllerDelegate>)onboardingDelegate;
-(void)setOnboardingDelegate:(id<CNSharingProfileOnboardingVariantViewControllerDelegate>)arg1 ;
-(BOOL)shouldShowPoseButton;
-(void)setShouldShowPoseButton:(BOOL)arg1 ;
-(OBHeaderView *)onboardingHeaderView;
-(void)setOnboardingHeaderView:(OBHeaderView *)arg1 ;
-(OBLinkTrayButton *)poseButton;
-(void)setPoseButton:(OBLinkTrayButton *)arg1 ;
@end

