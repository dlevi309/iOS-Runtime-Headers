/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <OnBoardingKit/OBWelcomeController.h>

@protocol OS_os_log, BKUIEmbeddedEnrollmentSelectionType;
@class NSObject, OBTrayButton, UIImageView, OBAnimationController, BKUIAnimationView, NSLayoutConstraint, BKUIFingerPrintPosedVideoPlayerView, NSTimer;

@interface BKUIFingerPrintEnrollTutorialViewController : OBWelcomeController {

	NSObject*<OS_os_log> bkui_animation_view_log;
	BOOL _inBuddy;
	BOOL _showDisclaimer;
	BOOL _showFollowUpEnrollmentUpSellContent;
	BOOL _isSecondEnrollment;
	id<BKUIEmbeddedEnrollmentSelectionType> _delegate;
	unsigned long long _enrollViewState;
	long long _initialInterfaceOrientation;
	OBTrayButton* _skipButton;
	OBTrayButton* _continueButton;
	UIImageView* _enrollTutorialImageView;
	OBAnimationController* _animationController;
	BKUIAnimationView* _animationView;
	NSLayoutConstraint* _contentViewTopConstraint;
	BKUIFingerPrintPosedVideoPlayerView* _posedVideoPlayerView;
	NSTimer* _animationTimer;
	CGRect _displayRect;

}

@property (nonatomic,retain) OBTrayButton * skipButton;                                               //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) OBTrayButton * continueButton;                                           //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic) CGRect displayRect;                                                      //@synthesize displayRect=_displayRect - In the implementation block
@property (nonatomic,retain) UIImageView * enrollTutorialImageView;                                   //@synthesize enrollTutorialImageView=_enrollTutorialImageView - In the implementation block
@property (nonatomic,retain) OBAnimationController * animationController;                             //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) BKUIAnimationView * animationView;                                       //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewTopConstraint;                           //@synthesize contentViewTopConstraint=_contentViewTopConstraint - In the implementation block
@property (nonatomic,retain) BKUIFingerPrintPosedVideoPlayerView * posedVideoPlayerView;              //@synthesize posedVideoPlayerView=_posedVideoPlayerView - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;                                                //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic,__weak) id<BKUIEmbeddedEnrollmentSelectionType> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long enrollViewState;                                      //@synthesize enrollViewState=_enrollViewState - In the implementation block
@property (assign,nonatomic) BOOL inBuddy;                                                            //@synthesize inBuddy=_inBuddy - In the implementation block
@property (assign,nonatomic) BOOL showDisclaimer;                                                     //@synthesize showDisclaimer=_showDisclaimer - In the implementation block
@property (assign,nonatomic) BOOL showFollowUpEnrollmentUpSellContent;                                //@synthesize showFollowUpEnrollmentUpSellContent=_showFollowUpEnrollmentUpSellContent - In the implementation block
@property (assign,nonatomic) BOOL isSecondEnrollment;                                                 //@synthesize isSecondEnrollment=_isSecondEnrollment - In the implementation block
@property (assign,nonatomic) long long initialInterfaceOrientation;                                   //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(OBAnimationController *)animationController;
-(id<BKUIEmbeddedEnrollmentSelectionType>)delegate;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(void)_continuePressed:(id)arg1 ;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(double)_contentViewHeight;
-(void)setDelegate:(id<BKUIEmbeddedEnrollmentSelectionType>)arg1 ;
-(long long)initialInterfaceOrientation;
-(NSTimer *)animationTimer;
-(void)viewDidLoad;
-(void)setAnimationController:(OBAnimationController *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(OBTrayButton *)continueButton;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setContentViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewTopConstraint;
-(BOOL)inBuddy;
-(BOOL)_isJ307;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(OBTrayButton *)skipButton;
-(void)setSkipButton:(OBTrayButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BKUIAnimationView *)animationView;
-(void)setAnimationView:(BKUIAnimationView *)arg1 ;
-(void)setInBuddy:(BOOL)arg1 ;
-(id)initInBuddy:(BOOL)arg1 showDisclaimer:(BOOL)arg2 displayRect:(CGRect)arg3 ;
-(void)setShowFollowUpEnrollmentUpSellContent:(BOOL)arg1 ;
-(unsigned long long)enrollViewState;
-(void)setIsSecondEnrollment:(BOOL)arg1 ;
-(void)setEnrollViewState:(unsigned long long)arg1 ;
-(BOOL)showFollowUpEnrollmentUpSellContent;
-(BOOL)isSecondEnrollment;
-(void)loadAVPlayer;
-(void)setShowDisclaimer:(BOOL)arg1 ;
-(BOOL)showDisclaimer;
-(id)tutorialImage;
-(UIImageView *)enrollTutorialImageView;
-(void)_enrollSkipped:(id)arg1 ;
-(id)_videoAssetNames;
-(void)setPosedVideoPlayerView:(BKUIFingerPrintPosedVideoPlayerView *)arg1 ;
-(BKUIFingerPrintPosedVideoPlayerView *)posedVideoPlayerView;
-(double)_contentViewTopOffset;
-(void)_setupTouchIDAnimation;
-(void)_performInitialAnimationSetup;
-(void)_restartAnimation;
-(id)tutorialText;
-(id)_headerTitlePhase1;
-(id)_detailTextPhase1;
-(id)combinedTutorialText;
-(id)_headerTitlePhase2;
-(CGRect)displayRect;
-(void)setDisplayRect:(CGRect)arg1 ;
-(void)setEnrollTutorialImageView:(UIImageView *)arg1 ;
@end

