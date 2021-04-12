/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

@class CCUIStatusBarStyleSnapshot;


@protocol CCUIOverlayMetricsProvider <NSObject>
@property (nonatomic,readonly) CGRect overlayBackgroundFrame; 
@property (nonatomic,readonly) CGRect overlayContainerFrame; 
@property (nonatomic,readonly) long long overlayInterfaceOrientation; 
@property (nonatomic,copy,readonly) CCUIStatusBarStyleSnapshot * overlayStatusBarStyle; 
@property (nonatomic,readonly) double overlayReachabilityHeight; 
@required
-(long long)overlayInterfaceOrientation;
-(double)overlayReachabilityHeight;
-(CGRect)overlayBackgroundFrame;
-(CGRect)overlayContainerFrame;
-(CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;

@end

