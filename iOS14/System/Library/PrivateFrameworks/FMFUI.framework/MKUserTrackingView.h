/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@protocol MKUserTrackingView <NSObject>
@optional
-(BOOL)hasRenderedSomething;
-(BOOL)postsMapViewInitialRenderingNotification;

@required
-(BOOL)canRotateForHeading;
-(void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
-(long long)userTrackingMode;
-(BOOL)isCurrentlyRotated;
-(BOOL)hasUserLocation;

@end

