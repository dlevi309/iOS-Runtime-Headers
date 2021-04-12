/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIViewController.h>

@protocol CFXCameraControlsViewControllerDelegate;
@class CAMCreativeCameraButton, CAMFlipButton, UIView, NSLayoutConstraint, CFXFeedbackController, CAMBottomBar, CUShutterButton, UIColor;

@interface CFXCameraControlsViewController : UIViewController {

	BOOL _dockIsMagnified;
	CAMCreativeCameraButton* _effectButton;
	CAMFlipButton* _flipButton;
	id<CFXCameraControlsViewControllerDelegate> _delegate;
	UIView* _appStripBackgroundView;
	UIView* _backgroundView;
	UIView* _effectButtonContainerPad;
	UIView* _shutterButtonContainerPad;
	UIView* _flipButtonContainerPad;
	UIView* _bottomBlackView;
	UIView* _appStripBackgroundContainerView;
	NSLayoutConstraint* _backgroundViewHeightConstraint;
	NSLayoutConstraint* _bottomBlackViewHeightConstraint;
	NSLayoutConstraint* _bottomBlackViewTopConstraint;
	NSLayoutConstraint* _bottomBlackViewWidthConstraint;
	NSLayoutConstraint* _bottomBlackViewTrailingConstraint;
	NSLayoutConstraint* _appStripBackgroundContainerViewTopConstraint;
	NSLayoutConstraint* _appStripBackgroundContainerViewBottomConstraint;
	NSLayoutConstraint* _appStripBackgroundContainerViewHeightConstraint;
	NSLayoutConstraint* _appStripBackgroundContainerViewLeadingConstraint;
	NSLayoutConstraint* _appStripBackgroundContainerViewTrailingConstraint;
	CFXFeedbackController* _feedbackController;
	long long _captureMode;
	CAMBottomBar* _bottomBar;
	CUShutterButton* _shutterButton;
	double _dockMagnifiedHeightDelta;

}

@property (assign,nonatomic,__weak) UIView * effectButtonContainerPad;                                                   //@synthesize effectButtonContainerPad=_effectButtonContainerPad - In the implementation block
@property (assign,nonatomic,__weak) UIView * shutterButtonContainerPad;                                                  //@synthesize shutterButtonContainerPad=_shutterButtonContainerPad - In the implementation block
@property (assign,nonatomic,__weak) UIView * flipButtonContainerPad;                                                     //@synthesize flipButtonContainerPad=_flipButtonContainerPad - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundView;                                                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomBlackView;                                                            //@synthesize bottomBlackView=_bottomBlackView - In the implementation block
@property (nonatomic,retain) UIView * appStripBackgroundView;                                                            //@synthesize appStripBackgroundView=_appStripBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * appStripBackgroundContainerView;                                            //@synthesize appStripBackgroundContainerView=_appStripBackgroundContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * backgroundViewHeightConstraint;                                 //@synthesize backgroundViewHeightConstraint=_backgroundViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomBlackViewHeightConstraint;                                //@synthesize bottomBlackViewHeightConstraint=_bottomBlackViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomBlackViewTopConstraint;                                   //@synthesize bottomBlackViewTopConstraint=_bottomBlackViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomBlackViewWidthConstraint;                                 //@synthesize bottomBlackViewWidthConstraint=_bottomBlackViewWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * bottomBlackViewTrailingConstraint;                              //@synthesize bottomBlackViewTrailingConstraint=_bottomBlackViewTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * appStripBackgroundContainerViewTopConstraint;                   //@synthesize appStripBackgroundContainerViewTopConstraint=_appStripBackgroundContainerViewTopConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * appStripBackgroundContainerViewBottomConstraint;                //@synthesize appStripBackgroundContainerViewBottomConstraint=_appStripBackgroundContainerViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * appStripBackgroundContainerViewHeightConstraint;                //@synthesize appStripBackgroundContainerViewHeightConstraint=_appStripBackgroundContainerViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * appStripBackgroundContainerViewLeadingConstraint;               //@synthesize appStripBackgroundContainerViewLeadingConstraint=_appStripBackgroundContainerViewLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * appStripBackgroundContainerViewTrailingConstraint;              //@synthesize appStripBackgroundContainerViewTrailingConstraint=_appStripBackgroundContainerViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) CFXFeedbackController * feedbackController;                                                 //@synthesize feedbackController=_feedbackController - In the implementation block
@property (assign,nonatomic) long long captureMode;                                                                      //@synthesize captureMode=_captureMode - In the implementation block
@property (nonatomic,retain) CAMBottomBar * bottomBar;                                                                   //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                                            //@synthesize shutterButton=_shutterButton - In the implementation block
@property (assign,nonatomic) BOOL dockIsMagnified;                                                                       //@synthesize dockIsMagnified=_dockIsMagnified - In the implementation block
@property (assign,nonatomic) double dockMagnifiedHeightDelta;                                                            //@synthesize dockMagnifiedHeightDelta=_dockMagnifiedHeightDelta - In the implementation block
@property (nonatomic,retain) CAMCreativeCameraButton * effectButton;                                                     //@synthesize effectButton=_effectButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                 //@synthesize flipButton=_flipButton - In the implementation block
@property (assign,nonatomic,__weak) id<CFXCameraControlsViewControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIColor * backgroundColor; 
-(id)init;
-(id<CFXCameraControlsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXCameraControlsViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIView *)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(CUShutterButton *)shutterButton;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(void)setBottomBar:(CAMBottomBar *)arg1 ;
-(CAMBottomBar *)bottomBar;
-(CFXFeedbackController *)feedbackController;
-(void)setFeedbackController:(CFXFeedbackController *)arg1 ;
-(CAMFlipButton *)flipButton;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(long long)captureMode;
-(id)initWithDelegate:(id)arg1 captureMode:(long long)arg2 ;
-(void)configureUIForOrientation;
-(void)setShutterButtonAlpha:(double)arg1 ;
-(void)updateUIForDockMagnify:(BOOL)arg1 dockHeightDelta:(double)arg2 ;
-(void)updateUIForVideoRecording:(BOOL)arg1 ;
-(void)setEffectButton:(CAMCreativeCameraButton *)arg1 ;
-(CAMCreativeCameraButton *)effectButton;
-(void)effectsButtonTapped:(id)arg1 ;
-(void)shutterButtonTapped:(id)arg1 ;
-(void)switchCameraButtonTapped:(id)arg1 ;
-(UIView *)bottomBlackView;
-(UIView *)appStripBackgroundView;
-(void)setAppStripBackgroundView:(UIView *)arg1 ;
-(UIView *)appStripBackgroundContainerView;
-(double)CFX_smallPhoneDockHeightAdjustment;
-(BOOL)dockIsMagnified;
-(NSLayoutConstraint *)appStripBackgroundContainerViewTopConstraint;
-(NSLayoutConstraint *)appStripBackgroundContainerViewHeightConstraint;
-(NSLayoutConstraint *)appStripBackgroundContainerViewBottomConstraint;
-(NSLayoutConstraint *)appStripBackgroundContainerViewLeadingConstraint;
-(NSLayoutConstraint *)appStripBackgroundContainerViewTrailingConstraint;
-(void)setDockIsMagnified:(BOOL)arg1 ;
-(void)setDockMagnifiedHeightDelta:(double)arg1 ;
-(void)setShutterButtonEnabled:(BOOL)arg1 ;
-(UIView *)effectButtonContainerPad;
-(void)setEffectButtonContainerPad:(UIView *)arg1 ;
-(UIView *)shutterButtonContainerPad;
-(void)setShutterButtonContainerPad:(UIView *)arg1 ;
-(UIView *)flipButtonContainerPad;
-(void)setFlipButtonContainerPad:(UIView *)arg1 ;
-(void)setBottomBlackView:(UIView *)arg1 ;
-(void)setAppStripBackgroundContainerView:(UIView *)arg1 ;
-(NSLayoutConstraint *)backgroundViewHeightConstraint;
-(void)setBackgroundViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomBlackViewHeightConstraint;
-(void)setBottomBlackViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomBlackViewTopConstraint;
-(void)setBottomBlackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomBlackViewWidthConstraint;
-(void)setBottomBlackViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomBlackViewTrailingConstraint;
-(void)setBottomBlackViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppStripBackgroundContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppStripBackgroundContainerViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppStripBackgroundContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppStripBackgroundContainerViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAppStripBackgroundContainerViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(double)dockMagnifiedHeightDelta;
@end

