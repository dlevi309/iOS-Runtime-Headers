/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)snapshotView;
-(void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(id)customAnimator;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setSnapshotHostWindow:(UIWindow *)arg1 ;
-(void)setSnapshotCorrectiveTransform:(CGAffineTransform)arg1 ;
-(UIWindow *)snapshotHostWindow;
-(CGAffineTransform)snapshotCorrectiveTransform;
@end

