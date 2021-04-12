/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol AVFullScreenViewControllerDelegate;
@class UIViewController, UIView;

@interface AVFullScreenViewController : UIViewController {

	UIViewController*<AVFullScreenViewControllerDelegate> _delegate;
	AVFullScreenViewController* _associatedFullScreenViewController;
	AVFullScreenViewController* _sourceFullScreenViewController;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<AVFullScreenViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) AVFullScreenViewController * associatedFullScreenViewController;              //@synthesize associatedFullScreenViewController=_associatedFullScreenViewController - In the implementation block
@property (assign,nonatomic,__weak) AVFullScreenViewController * sourceFullScreenViewController;                  //@synthesize sourceFullScreenViewController=_sourceFullScreenViewController - In the implementation block
-(UIViewController*<AVFullScreenViewControllerDelegate>)delegate;
-(void)setDelegate:(UIViewController*<AVFullScreenViewControllerDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)canBecomeFirstResponder;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(long long)preferredWhitePointAdaptivityStyle;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)prefersStatusBarHidden;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(id)keyCommands;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)avkit_isEffectivelyFullScreen;
-(void)attachContentView;
-(AVFullScreenViewController *)associatedFullScreenViewController;
-(void)setAssociatedFullScreenViewController:(AVFullScreenViewController *)arg1 ;
-(AVFullScreenViewController *)sourceFullScreenViewController;
-(void)setSourceFullScreenViewController:(AVFullScreenViewController *)arg1 ;
@end

