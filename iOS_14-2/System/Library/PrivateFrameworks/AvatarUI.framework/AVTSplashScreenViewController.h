/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <OnBoardingKit/OBWelcomeFullCenterContentController.h>

@protocol AVTSplashScreenViewControllerDelegate;
@class OBBoldTrayButton, UIView, AVTSplashScreenConfiguration, AVPlayerLooper, AVQueuePlayer, AVPlayerViewController, NSLayoutConstraint;

@interface AVTSplashScreenViewController : OBWelcomeFullCenterContentController {

	BOOL _isPlayingVideos;
	id<AVTSplashScreenViewControllerDelegate> _delegate;
	OBBoldTrayButton* _continueButton;
	UIView* _videoContentView;
	AVTSplashScreenConfiguration* _configuration;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _queuePlayer;
	AVPlayerViewController* _playerViewController;
	AVPlayerLooper* _secondaryPlayerLooper;
	AVQueuePlayer* _secondaryQueuePlayer;
	AVPlayerViewController* _secondaryPlayerViewController;
	NSLayoutConstraint* _videoContentWidthConstraint;
	NSLayoutConstraint* _videoContentHeightConstraint;

}

@property (nonatomic,retain) OBBoldTrayButton * continueButton;                                      //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIView * videoContentView;                                              //@synthesize videoContentView=_videoContentView - In the implementation block
@property (nonatomic,retain) AVTSplashScreenConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL isPlayingVideos;                                                   //@synthesize isPlayingVideos=_isPlayingVideos - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * playerLooper;                                          //@synthesize playerLooper=_playerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                            //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                          //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * secondaryPlayerLooper;                                 //@synthesize secondaryPlayerLooper=_secondaryPlayerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * secondaryQueuePlayer;                                   //@synthesize secondaryQueuePlayer=_secondaryQueuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * secondaryPlayerViewController;                 //@synthesize secondaryPlayerViewController=_secondaryPlayerViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoContentWidthConstraint;                       //@synthesize videoContentWidthConstraint=_videoContentWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoContentHeightConstraint;                      //@synthesize videoContentHeightConstraint=_videoContentHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<AVTSplashScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVPlayerViewController * primaryVideoController; 
@property (nonatomic,readonly) AVPlayerLooper * primaryVideoLooper; 
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<AVTSplashScreenViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setDelegate:(id<AVTSplashScreenViewControllerDelegate>)arg1 ;
-(AVTSplashScreenConfiguration *)configuration;
-(void)setVideoContentView:(UIView *)arg1 ;
-(UIView *)videoContentView;
-(void)didTapContinueButton:(id)arg1 ;
-(void)setPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryQueuePlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)secondaryQueuePlayer;
-(void)setSecondaryPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerViewController *)secondaryPlayerViewController;
-(double)desiredHeightForVideoContent;
-(void)setVideoContentWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)stopPlayingVideos;
-(void)setVideoContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)videoContentWidthConstraint;
-(NSLayoutConstraint *)videoContentHeightConstraint;
-(void)startPlayingVideos;
-(AVPlayerLooper *)playerLooper;
-(AVPlayerViewController *)primaryVideoController;
-(BOOL)isPlayingVideos;
-(void)setIsPlayingVideos:(BOOL)arg1 ;
-(id)initWithDefaultConfiguration;
-(id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2 ;
-(AVPlayerLooper *)primaryVideoLooper;
-(void)detachVideoControllerAndLooper;
-(AVPlayerLooper *)secondaryPlayerLooper;
-(void)viewDidLoad;
-(AVQueuePlayer *)queuePlayer;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(OBBoldTrayButton *)continueButton;
-(void)setContinueButton:(OBBoldTrayButton *)arg1 ;
-(void)setConfiguration:(AVTSplashScreenConfiguration *)arg1 ;
@end

