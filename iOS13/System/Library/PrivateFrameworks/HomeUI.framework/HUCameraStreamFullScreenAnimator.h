/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class HUGridCameraCell;

@interface HUCameraStreamFullScreenAnimator : NSObject {

	HUGridCameraCell* _sourceCameraCell;

}

@property (nonatomic,readonly) HUGridCameraCell * sourceCameraCell;              //@synthesize sourceCameraCell=_sourceCameraCell - In the implementation block
-(double)transitionDuration:(id)arg1 ;
-(id)initWithSourceCameraCell:(id)arg1 ;
-(CGRect)_toViewFinalFrame:(id)arg1 ;
-(CGRect)_adjustPresentedViewFrame:(CGRect)arg1 forTransitionContext:(id)arg2 ;
-(HUGridCameraCell *)sourceCameraCell;
@end

