/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {

	UIView* _cameraViewSnapshot;
	UIView* _cameraOverlaySnapshot;

}

@property (nonatomic,readonly) UIView * cameraViewSnapshot;                 //@synthesize cameraViewSnapshot=_cameraViewSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * cameraOverlaySnapshot;              //@synthesize cameraOverlaySnapshot=_cameraOverlaySnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)cameraViewSnapshot;
-(UIView *)cameraOverlaySnapshot;
-(id)initWithSourceCameraCell:(id)arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3 ;
@end

