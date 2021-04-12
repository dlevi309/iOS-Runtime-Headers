/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol VKMapViewCameraDelegate <NSObject>
@optional
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg1;
-(void)mapLayerDidFinishInitialTrackingAnimation;
-(id)mapLayerPresentationForAnnotation:(id)arg1;
-(void)mapLayerDidBecomePitched:(BOOL)arg1;
-(void)mapLayerCanEnter3DModeDidChange:(BOOL)arg1;
-(void)mapLayerMuninAvailabilityDidChange:(long long)arg1;
-(void)mapLayerCanZoomInDidChange:(BOOL)arg1;
-(void)mapLayerCanZoomOutDidChange:(BOOL)arg1;
-(void)mapLayerNavigationCameraHasStartedPanning;
-(void)mapLayerNavigationCameraHasStoppedPanning;
-(void)mapLayerNavigationCameraDidLeaveDefaultZoom;
-(void)mapLayerNavigationCameraDidReturnToDefaultZoom;
-(void)mapLayerWillAnimateToLocation:(CGSize)arg1;
-(void)mapLayerWasUnableToAnimate;

@end

