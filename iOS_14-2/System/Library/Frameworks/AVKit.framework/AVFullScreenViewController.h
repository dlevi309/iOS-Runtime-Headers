/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)prefersStatusBarHidden;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)keyCommands;
-(long long)preferredInterfaceOrientationForPresentation;
-(UIViewController*<AVFullScreenViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)avkit_isEffectivelyFullScreen;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(UIViewController*<AVFullScreenViewControllerDelegate>)arg1 ;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)attachContentView;
-(AVFullScreenViewController *)associatedFullScreenViewController;
-(void)setAssociatedFullScreenViewController:(AVFullScreenViewController *)arg1 ;
-(AVFullScreenViewController *)sourceFullScreenViewController;
-(void)setSourceFullScreenViewController:(AVFullScreenViewController *)arg1 ;
-(UIView *)contentView;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
@end

