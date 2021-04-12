/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAnnotationContainerViewDelegate <NSObject>
@optional
-(void)annotationContainerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CGRect*)visibleRectInView:(id)arg1;
-(BOOL)annotationContainerIsRotated:(id)arg1;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1;
-(id)annotationContainer:(id)arg1 requestAddingClusterForAnnotationViews:(id)arg2;
-(void)annotationContainerWillDropPins:(id)arg1;
-(void)annotationContainer:(id)arg1 requestRemovingClusterAnnotationView:(id)arg2 updateVisible:(BOOL)arg3;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(CGRect*)visibleCenteringRectInView:(id)arg1;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2;
-(void)annotationContainer:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2;
-(void)annotationContainerWillAnimateBubble:(id)arg1;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CLLocationCoordinate2D)arg3 completionHandler:(/*^block*/id)arg4;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CLLocationCoordinate2D)arg2 maxDistance:(double*)arg3;
-(void)annotationContainerDidAnimateBubble:(id)arg1;
-(void)annotationContainerDidDropPins:(id)arg1;
-(CGRect*)annotationContainerVisibleRect:(id)arg1;
-(BOOL)annotationContainer:(id)arg1 isAnnotationView:(id)arg2 validForDisplayAtPoint:(CGPoint)arg3;
-(CGPoint*)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
-(CLLocationCoordinate2D*)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2;

@end

