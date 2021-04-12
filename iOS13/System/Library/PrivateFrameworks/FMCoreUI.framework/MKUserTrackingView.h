/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/


@protocol MKUserTrackingView <NSObject>
@optional
-(BOOL)hasRenderedSomething;
-(BOOL)postsMapViewInitialRenderingNotification;

@required
-(BOOL)hasUserLocation;
-(long long)userTrackingMode;
-(BOOL)canRotateForHeading;
-(void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
-(BOOL)isCurrentlyRotated;

@end

