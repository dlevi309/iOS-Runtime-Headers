/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>
#import <libobjc.A.dylib/VKRouteMatchedAnnotationPresentation.h>

@class GEORouteMatch, MKAnnotationView, NSHashTable, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {

	MKAnnotationView* _annotationView;
	NSHashTable* _presentationCoordinateObservers;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) BOOL tracking; 
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
-(void)setTracking:(BOOL)arg1 ;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(BOOL)tracking;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(double)presentationCourse;
-(CGSize)presentationCoordinate;
-(void)addPresentationCoordinateChangedObserver:(id)arg1 ;
-(void)removePresentationCoordinateChangedObserver:(id)arg1 ;
@end

