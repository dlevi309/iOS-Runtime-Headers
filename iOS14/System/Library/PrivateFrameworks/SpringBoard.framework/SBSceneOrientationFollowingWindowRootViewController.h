/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SBIsolatedSceneOrientationFollowingWrapperViewController, UIView;

@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController {

	SBIsolatedSceneOrientationFollowingWrapperViewController* _hostingViewController;
	UIView* _overlayContentView;

}

@property (assign,nonatomic,__weak) SBIsolatedSceneOrientationFollowingWrapperViewController * hostingViewController;              //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (nonatomic,retain) UIView * overlayContentView;                                                                          //@synthesize overlayContentView=_overlayContentView - In the implementation block
-(void)viewWillLayoutSubviews;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(SBIsolatedSceneOrientationFollowingWrapperViewController *)hostingViewController;
-(void)setHostingViewController:(SBIsolatedSceneOrientationFollowingWrapperViewController *)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIView *)overlayContentView;
-(BOOL)_canShowWhileLocked;
-(id)initWithHostingViewController:(id)arg1 ;
-(void)setOverlayContentView:(UIView *)arg1 ;
@end

