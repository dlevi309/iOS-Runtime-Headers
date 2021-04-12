/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKAnnotationContainerViewDelegate.h>
#import <libobjc.A.dylib/MKAnnotationMarkerContainer.h>
#import <libobjc.A.dylib/MKAnnotationManagerDelegate.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@protocol _MKStaticMapViewDelegate;
@class MKMapSnapshotOptions, UIImageView, MKMapSnapshotter, MKMapSnapshot, MKAnnotationManager, MKAnnotationContainerView, MKUserLocation, MKAnnotationView, NSMutableArray, MKMapCamera, NSArray, NSString;

@interface _MKStaticMapView : UIView <MKAnnotationContainerViewDelegate, MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKLocationManagerObserver> {

	id<_MKStaticMapViewDelegate> _delegate;
	MKMapSnapshotOptions* _snapshotOptions;
	UIImageView* _imageView;
	MKMapSnapshotter* _currentSnapshotter;
	MKMapSnapshot* _gridSnapshot;
	MKMapSnapshot* _snapshot;
	MKAnnotationManager* _annotationManager;
	MKAnnotationContainerView* _annotationContainer;
	BOOL _showsUserLocation;
	MKUserLocation* _userLocation;
	MKAnnotationView* _userLocationView;
	NSMutableArray* _currentUpdateAddedAnnotations;
	BOOL _currentUpdateRemovedCustomFeatureAnnotation;
	unsigned long long _snapshotGeneration;
	BOOL _loading;

}

@property (assign,nonatomic) SCD_Struct_MK9 region; 
@property (assign,nonatomic) SCD_Struct_MK6 visibleMapRect; 
@property (nonatomic,copy) MKMapCamera * camera; 
@property (nonatomic,readonly) NSArray * annotations; 
@property (assign,nonatomic) BOOL showsUserLocation;                     //@synthesize showsUserLocation=_showsUserLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(/*^block*/id)annotationRectTest;
-(/*^block*/id)annotationCoordinateTest;
-(NSArray *)annotations;
-(MKMapCamera *)camera;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(SCD_Struct_MK9)region;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)setRegion:(SCD_Struct_MK9)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(BOOL)showsUserLocation;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(void)removeAnnotation:(id)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)_hideAllAnnotations;
-(void)_showAllAnnotations;
-(unsigned long long)_incrementSnapshotGeneration;
-(void)_startSnapshotRequest;
-(void)_displayGridWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)locationManagerUpdatedLimitsPrecisionState:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(SCD_Struct_MK6)visibleMapRect;
-(void)removeAnnotations:(id)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(void)selectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)visibleRectInView:(id)arg1 ;
-(void)addAnnotationRepresentation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationRepresentation:(id)arg1 ;
-(void)deselectAnnotationRepresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)moveAnnotationRepresentation:(id)arg1 fromCoordinate:(CLLocationCoordinate2D)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2 ;
-(void)annotationManager:(id)arg1 didRemoveAnnotationRepresentations:(id)arg2 ;
-(void)annotationManagerDidChangeVisibleAnnotationRepresentations:(id)arg1 ;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2 ;
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2 ;
-(BOOL)annotationManager:(id)arg1 canSelectAnnotationRepresentation:(id)arg2 ;
-(BOOL)annotationContainerIsRotated:(id)arg1 ;
-(BOOL)annotationContainerShouldAlignToPixels:(id)arg1 ;
-(id)annotationContainer:(id)arg1 requestAddingClusterForAnnotationViews:(id)arg2 ;
-(void)annotationContainerWillDropPins:(id)arg1 ;
-(void)annotationContainer:(id)arg1 requestRemovingClusterAnnotationView:(id)arg2 updateVisible:(BOOL)arg3 ;
-(void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(CGRect)visibleCenteringRectInView:(id)arg1 ;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inContainer:(id)arg2 ;
-(void)annotationContainer:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2 ;
-(void)annotationContainerWillAnimateBubble:(id)arg1 ;
-(void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CLLocationCoordinate2D)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)annotationContainer:(id)arg1 pinDropDistanceForCoordinate:(CLLocationCoordinate2D)arg2 maxDistance:(double*)arg3 ;
-(void)annotationContainerDidAnimateBubble:(id)arg1 ;
-(void)annotationContainerDidDropPins:(id)arg1 ;
-(CGRect)annotationContainerVisibleRect:(id)arg1 ;
-(BOOL)annotationContainer:(id)arg1 isAnnotationView:(id)arg2 validForDisplayAtPoint:(CGPoint)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)_updateSnapshot:(BOOL)arg1 ;
-(void)setVisibleMapRect:(SCD_Struct_MK6)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2 ;
-(CLLocationCoordinate2D)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(void)addAnnotations:(id)arg1 ;
@end

