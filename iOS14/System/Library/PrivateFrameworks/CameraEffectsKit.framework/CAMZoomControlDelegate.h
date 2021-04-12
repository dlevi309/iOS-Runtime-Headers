/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol CAMZoomControlDelegate <NSObject>
@optional
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(BOOL)zoomControlCanPlayHaptics:(id)arg1;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg1;
-(void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
-(BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(id)arg1;
-(void)zoomControl:(id)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3;

@end

