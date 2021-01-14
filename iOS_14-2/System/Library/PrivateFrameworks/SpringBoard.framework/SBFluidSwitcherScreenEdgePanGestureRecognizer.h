/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {

	long long _touchInterfaceOrientationWhenGestureBegan;
	SBFluidSwitcherViewController* _switcherViewController;

}

@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
-(id)viewForTouchHistory;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(long long)_touchInterfaceOrientation;
-(void)setState:(long long)arg1 ;
-(void)reset;
@end

