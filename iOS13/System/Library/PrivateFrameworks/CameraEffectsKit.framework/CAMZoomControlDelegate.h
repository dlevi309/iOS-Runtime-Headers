/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CAMZoomControlDelegate <NSObject>
@optional
-(void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(BOOL)zoomControlCanPlayHaptics:(id)arg1;
-(BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(id)arg1;
-(void)zoomControl:(id)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3;

@end

