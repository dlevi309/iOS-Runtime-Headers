/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {

	long long _touchInterfaceOrientationWhenGestureBegan;
	SBFluidSwitcherViewController* _switcherViewController;

}

@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
-(void)reset;
-(void)setState:(long long)arg1 ;
-(long long)_touchInterfaceOrientation;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(id)viewForTouchHistory;
@end

