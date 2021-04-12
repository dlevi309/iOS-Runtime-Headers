/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTSplashScreenLayoutDelegate.h>

@protocol AVTSplashScreenViewControllerDelegate;
@class UILabel, UIButton, UIScrollView, AVTSplashScreenConfiguration, AVTUIStyle, AVPlayerLooper, AVQueuePlayer, AVPlayerViewController, AVTSplashScreenLayout;

@interface AVTSplashScreenViewController : UIViewController <AVTSplashScreenLayoutDelegate> {

	id<AVTSplashScreenViewControllerDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _continueButton;
	UIScrollView* _scrollView;
	AVTSplashScreenConfiguration* _configuration;
	AVTUIStyle* _styleProvider;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _queuePlayer;
	AVPlayerViewController* _playerViewController;
	AVPlayerLooper* _secondaryPlayerLooper;
	AVQueuePlayer* _secondaryQueuePlayer;
	AVPlayerViewController* _secondaryPlayerViewController;
	AVTSplashScreenLayout* _currentLayout;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) AVTSplashScreenConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) AVTUIStyle * styleProvider;                                             //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * playerLooper;                                          //@synthesize playerLooper=_playerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                            //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                          //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * secondaryPlayerLooper;                                 //@synthesize secondaryPlayerLooper=_secondaryPlayerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * secondaryQueuePlayer;                                   //@synthesize secondaryQueuePlayer=_secondaryQueuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * secondaryPlayerViewController;                 //@synthesize secondaryPlayerViewController=_secondaryPlayerViewController - In the implementation block
@property (nonatomic,retain) AVTSplashScreenLayout * currentLayout;                                  //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic,__weak) id<AVTSplashScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AVTSplashScreenViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AVTSplashScreenViewControllerDelegate>)arg1 ;
-(void)setConfiguration:(AVTSplashScreenConfiguration *)arg1 ;
-(AVTSplashScreenConfiguration *)configuration;
-(UILabel *)titleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UIButton *)continueButton;
-(AVTSplashScreenLayout *)currentLayout;
-(void)setCurrentLayout:(AVTSplashScreenLayout *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)applyLayout:(id)arg1 ;
-(void)setStyleProvider:(AVTUIStyle *)arg1 ;
-(AVTUIStyle *)styleProvider;
-(AVQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2 ;
-(void)didTapContinueButton:(id)arg1 ;
-(void)setPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryQueuePlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)secondaryQueuePlayer;
-(void)setSecondaryPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerViewController *)secondaryPlayerViewController;
-(void)splashScreenLayoutDidChange:(id)arg1 ;
-(AVPlayerLooper *)playerLooper;
-(AVPlayerLooper *)secondaryPlayerLooper;
@end

