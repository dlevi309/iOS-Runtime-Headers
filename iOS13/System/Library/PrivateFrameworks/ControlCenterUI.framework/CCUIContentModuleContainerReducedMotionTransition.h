/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIWindow, UIView;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition {

	UIWindow* _snapshotHostWindow;
	UIView* _snapshotView;
	CGAffineTransform _snapshotCorrectiveTransform;

}

@property (assign,nonatomic,__weak) UIWindow * snapshotHostWindow;                       //@synthesize snapshotHostWindow=_snapshotHostWindow - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                      //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) CGAffineTransform snapshotCorrectiveTransform;              //@synthesize snapshotCorrectiveTransform=_snapshotCorrectiveTransform - In the implementation block
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)customAnimator;
-(void)setSnapshotHostWindow:(UIWindow *)arg1 ;
-(void)setSnapshotCorrectiveTransform:(CGAffineTransform)arg1 ;
-(UIWindow *)snapshotHostWindow;
-(CGAffineTransform)snapshotCorrectiveTransform;
@end

