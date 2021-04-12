/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SXFullscreenCanvasViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SXFullscreenCanvasViewControllerDelegate>)arg1 ;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)isTransitioning;
-(void)setIsTransitioning:(BOOL)arg1 ;
@end

