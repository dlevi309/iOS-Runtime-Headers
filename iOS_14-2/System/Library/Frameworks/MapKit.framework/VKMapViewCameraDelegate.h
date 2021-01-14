/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKMapViewCameraDelegate <NSObject>
@optional
-(void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerNavigationCameraDidReturnToDefaultZoom;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
-(id)mapLayerPresentationForAnnotation:(id)arg1;
-(void)mapLayerNavigationCameraDidLeaveDefaultZoom;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerNavigationCameraHasStoppedPanning;
-(void)mapLayerDidFinishInitialTrackingAnimation;
-(void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
-(void)mapLayerNavigationCameraHasStartedPanning;
-(void)mapLayerDidBecomePitched:(BOOL)arg1;
-(void)mapLayerCanZoomInDidChange:(BOOL)arg1;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1;
-(void)mapLayerDidChangeVisibleRegion;

@end

