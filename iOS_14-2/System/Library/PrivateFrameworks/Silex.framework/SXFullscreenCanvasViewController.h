/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol SXFullscreenCanvasViewControllerDelegate;
@interface SXFullscreenCanvasViewController : UIViewController {

	BOOL _isTransitioning;
	long long _statusBarStyle;
	id<SXFullscreenCanvasViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long statusBarStyle;                                                  //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL isTransitioning;                                                      //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenCanvasViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)keyCommands;
-(id<SXFullscreenCanvasViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setIsTransitioning:(BOOL)arg1 ;
-(void)setStatusBarStyle:(long long)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<SXFullscreenCanvasViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)isTransitioning;
-(long long)preferredStatusBarStyle;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)statusBarStyle;
-(void)dismiss;
@end

