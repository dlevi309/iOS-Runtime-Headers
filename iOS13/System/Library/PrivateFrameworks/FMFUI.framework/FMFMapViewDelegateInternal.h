/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol FMFMapViewDelegateInternalDelegate;
@class FMFWildcardGestureRecognizer, FMAnnotationView, MKMapView, NSString;

@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate> {

	BOOL _isMapCenteringDisabled;
	BOOL _respondingToUserTouch;
	id<FMFMapViewDelegateInternalDelegate> _delegate;
	FMFWildcardGestureRecognizer* _gr;
	FMAnnotationView* _selectedAnnotationView;
	MKMapView* _mapView;
	CLLocationCoordinate2D _lastUserLocationCoordinate;

}

@property (assign,nonatomic,__weak) id<FMFMapViewDelegateInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL respondingToUserTouch;                                          //@synthesize respondingToUserTouch=_respondingToUserTouch - In the implementation block
@property (nonatomic,retain) FMFWildcardGestureRecognizer * gr;                                   //@synthesize gr=_gr - In the implementation block
@property (assign,nonatomic) FMAnnotationView * selectedAnnotationView;                           //@synthesize selectedAnnotationView=_selectedAnnotationView - In the implementation block
@property (assign,nonatomic) MKMapView * mapView;                                                 //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D lastUserLocationCoordinate;                   //@synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate - In the implementation block
@property (assign,nonatomic) BOOL isMapCenteringDisabled;                                         //@synthesize isMapCenteringDisabled=_isMapCenteringDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FMFMapViewDelegateInternalDelegate>)delegate;
-(void)setDelegate:(id<FMFMapViewDelegateInternalDelegate>)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)endTouches;
-(BOOL)canSelectAnnotation:(id)arg1 ;
-(void)setSelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(FMAnnotationView *)selectedAnnotationView;
-(SCD_Struct_FM6)mapRectMakeWithRadialDistanceForCoordinate:(CLLocationCoordinate2D)arg1 andRadius:(double)arg2 ;
-(void)selectAnnotation:(id)arg1 ;
-(void)setIsMapCenteringDisabled:(BOOL)arg1 ;
-(void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3 ;
-(id)initWithDelegate:(id)arg1 mapView:(id)arg2 ;
-(BOOL)isMapCenteringDisabled;
-(void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2 ;
-(void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2 ;
-(void)setGr:(FMFWildcardGestureRecognizer *)arg1 ;
-(void)setRespondingToUserTouch:(BOOL)arg1 ;
-(id)accuracyCircleForLocation:(id)arg1 ;
-(void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2 ;
-(BOOL)respondingToUserTouch;
-(void)setLastUserLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)fmfOverlayColorSatellite;
-(id)fmfOverlayColor;
-(void)_moveCenterByOffset:(CGPoint)arg1 from:(CLLocationCoordinate2D)arg2 mapView:(id)arg3 ;
-(BOOL)regionIsValid:(SCD_Struct_FM6)arg1 ;
-(UIEdgeInsets)edgeInsetsWithMinApplied:(UIEdgeInsets)arg1 ;
-(FMFWildcardGestureRecognizer *)gr;
-(CLLocationCoordinate2D)lastUserLocationCoordinate;
@end
