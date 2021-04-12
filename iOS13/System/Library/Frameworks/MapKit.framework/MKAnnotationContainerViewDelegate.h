/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CLLocationCoordinate2D*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;
-(CGPoint*)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
-(BOOL)annotationContainerIsRotated:(id)arg1;
-(id)annotationContainer:(id)arg1 requestAddingClusterForAnnotationViews:(id)arg2;
-(void)annotationContainer:(id)arg1 requestRemovingClusterAnnotationView:(id)arg2 updateVisible:(BOOL)arg3;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
-(void)annotationContainer:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CLLocationCoordinate2D)arg3 completionHandler:(/*^block*/id)arg4;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CLLocationCoordinate2D)arg2 maxDistance:(double*)arg3;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerWillDropPins:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(CGRect*)visibleRectInView:(id)arg1;
-(double)annotationContainerZoomScale:(id)arg1;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;
-(BOOL)annotationContainer:(id)arg1 isAnnotationView:(id)arg2 validForDisplayAtPoint:(CGPoint)arg3;

@end

