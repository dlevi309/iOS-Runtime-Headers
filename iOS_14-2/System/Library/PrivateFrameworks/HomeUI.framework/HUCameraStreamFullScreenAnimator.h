/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

