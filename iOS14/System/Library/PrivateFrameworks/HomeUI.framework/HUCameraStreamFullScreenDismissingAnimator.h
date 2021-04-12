/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)animateTransition:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIView *)cameraViewSnapshot;
-(UIView *)cameraOverlaySnapshot;
-(id)initWithSourceCameraCell:(id)arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3 ;
@end

