/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class GEORouteMatch;


@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
@required
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(id)arg1;
-(void)addPresentationCoordinateChangedObserver:(id)arg1;
-(void)removePresentationCoordinateChangedObserver:(id)arg1;

@end

