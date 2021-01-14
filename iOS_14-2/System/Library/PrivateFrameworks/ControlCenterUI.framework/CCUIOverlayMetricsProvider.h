/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)overlayReachabilityHeight;
-(long long)overlayInterfaceOrientation;
-(CGRect)overlayContainerFrame;
-(CGRect)overlayBackgroundFrame;
-(CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;

@end

