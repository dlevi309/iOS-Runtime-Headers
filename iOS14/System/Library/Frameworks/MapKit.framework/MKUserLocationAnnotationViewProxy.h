/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>
#import <libobjc.A.dylib/VKRouteMatchedAnnotationPresentation.h>

@class GEORouteMatch, MKAnnotationView, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;                       //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) BOOL tracking; 
@property (assign,getter=isAnimatingAccuracy,nonatomic) BOOL animatingAccuracy; 
@property (assign,nonatomic) double presentationAccuracy; 
@property (nonatomic,readonly) double minimumAccuracy; 
@property (nonatomic,readonly) VKEdgeInsets annotationTrackingEdgeInsets; 
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
-(void)setTracking:(BOOL)arg1 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(double)minimumAccuracy;
-(BOOL)tracking;
-(MKAnnotationView *)annotationView;
-(void)setPresentationAccuracy:(double)arg1 ;
-(GEORouteMatch *)routeMatch;
-(double)presentationAccuracy;
-(void)setAnimatingAccuracy:(BOOL)arg1 ;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(BOOL)isAnimatingAccuracy;
-(VKEdgeInsets)annotationTrackingEdgeInsets;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(double)presentationCourse;
-(CGSize)presentationCoordinate;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
@end

