/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


@protocol WebGeolocationCoreLocationUpdateListener
@required
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPositionData*)arg1;
-(void)errorOccurred:(id)arg1;
-(void)resetGeolocation;

@end

