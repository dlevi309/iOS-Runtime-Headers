/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSBaseEntityContentViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/CPSPointsOfInterestMapDelegate.h>
#import <libobjc.A.dylib/CPSPointsOfInterestPickerDelegate.h>
#import <libobjc.A.dylib/CPSPanEventDelegate.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CPSPointsOfInterestPickerViewController, CPSPointsOfInterestMapControlsViewController, MKMapView, UILayoutGuide, NSArray, NSMutableDictionary, CPSPanViewController, CPSActionButton, NSTimer, CLLocationManager, CLLocation, NSString;

@interface CPSPointsOfInterestMapViewController : CPSBaseEntityContentViewController <MKMapViewDelegate, CPSPointsOfInterestMapDelegate, CPSPointsOfInterestPickerDelegate, CPSPanEventDelegate, CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding, CLLocationManagerDelegate> {

	BOOL _centerMapPending;
	BOOL _hasPerformedInitialAnnotationLayout;
	CPSPointsOfInterestPickerViewController* _pickerViewController;
	CPSPointsOfInterestMapControlsViewController* _mapControlsViewController;
	MKMapView* _mapView;
	UILayoutGuide* _mapVisibleRegionGuide;
	NSArray* _pickerModeConstraints;
	NSArray* _panModeConstraints;
	NSMutableDictionary* _annotations;
	NSMutableDictionary* _clusterAnnotations;
	CPSPanViewController* _panViewController;
	/*^block*/id _panCompletionHandler;
	CPSActionButton* _donePanningButton;
	NSTimer* _panTimer;
	CLLocationManager* _locationManager;

}

@property (nonatomic,retain) CPSPointsOfInterestPickerViewController * pickerViewController;                        //@synthesize pickerViewController=_pickerViewController - In the implementation block
@property (nonatomic,retain) CPSPointsOfInterestMapControlsViewController * mapControlsViewController;              //@synthesize mapControlsViewController=_mapControlsViewController - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                                   //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) UILayoutGuide * mapVisibleRegionGuide;                                                 //@synthesize mapVisibleRegionGuide=_mapVisibleRegionGuide - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CP5 mapVisibleRegion; 
@property (assign,nonatomic) BOOL centerMapPending;                                                                 //@synthesize centerMapPending=_centerMapPending - In the implementation block
@property (nonatomic,retain) NSArray * pickerModeConstraints;                                                       //@synthesize pickerModeConstraints=_pickerModeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * panModeConstraints;                                                          //@synthesize panModeConstraints=_panModeConstraints - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * annotations;                                                   //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clusterAnnotations;                                              //@synthesize clusterAnnotations=_clusterAnnotations - In the implementation block
@property (nonatomic,retain) CPSPanViewController * panViewController;                                              //@synthesize panViewController=_panViewController - In the implementation block
@property (nonatomic,copy) id panCompletionHandler;                                                                 //@synthesize panCompletionHandler=_panCompletionHandler - In the implementation block
@property (nonatomic,retain) CPSActionButton * donePanningButton;                                                   //@synthesize donePanningButton=_donePanningButton - In the implementation block
@property (nonatomic,retain) NSTimer * panTimer;                                                                    //@synthesize panTimer=_panTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                                   //@synthesize locationManager=_locationManager - In the implementation block
@property (getter=isLocationAuthorized,nonatomic,readonly) BOOL locationAuthorized; 
@property (nonatomic,readonly) CLLocation * userLocation; 
@property (assign,nonatomic) BOOL hasPerformedInitialAnnotationLayout;                                              //@synthesize hasPerformedInitialAnnotationLayout=_hasPerformedInitialAnnotationLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
-(NSMutableDictionary *)annotations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(id)preferredFocusEnvironments;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)zoomIn;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)zoomOut;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)template;
-(CGSize)buttonSize;
-(id)mapView:(id)arg1 clusterAnnotationForMemberAnnotations:(id)arg2 ;
-(id)_linearFocusMovementSequences;
-(void)viewDidLoad;
-(CPSPointsOfInterestPickerViewController *)pickerViewController;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)setupViews;
-(CLLocation *)userLocation;
-(id)buttonBackgroundColor;
-(void)setPickerViewController:(CPSPointsOfInterestPickerViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(MKMapView *)mapView;
-(id)font;
-(void)didSelectButton:(id)arg1 ;
-(BOOL)isLocationAuthorized;
-(id)pointsOfInterest;
-(id)initWithEntity:(id)arg1 resourceProvider:(id)arg2 ;
-(void)didUpdateEntity:(id)arg1 ;
-(id)_linearFocusItems;
-(BOOL)useRightHandDriveFocusGuide;
-(void)picker:(id)arg1 didUnhighlightModel:(id)arg2 ;
-(void)picker:(id)arg1 didHighlightModel:(id)arg2 ;
-(void)picker:(id)arg1 didSelectModel:(id)arg2 ;
-(void)picker:(id)arg1 didDeselectModel:(id)arg2 ;
-(double)buttonRadius;
-(void)panWithDirection:(long long)arg1 ;
-(void)panBeganWithDirection:(long long)arg1 ;
-(void)panEndedWithDirection:(long long)arg1 ;
-(void)reloadAnnotations:(BOOL)arg1 ;
-(void)updateMapViewEdgeInsetsFittingAnnotations:(BOOL)arg1 ;
-(BOOL)hasPerformedInitialAnnotationLayout;
-(void)setHasPerformedInitialAnnotationLayout:(BOOL)arg1 ;
-(void)setUpLocationManager;
-(void)setUpMapView;
-(void)setMapVisibleRegionGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)mapVisibleRegionGuide;
-(void)setMapControlsViewController:(CPSPointsOfInterestMapControlsViewController *)arg1 ;
-(CPSPointsOfInterestMapControlsViewController *)mapControlsViewController;
-(void)setPanModeConstraints:(NSArray *)arg1 ;
-(void)setPickerModeConstraints:(NSArray *)arg1 ;
-(NSArray *)pickerModeConstraints;
-(SCD_Struct_CP5)mapVisibleRegion;
-(NSMutableDictionary *)clusterAnnotations;
-(void)_notifyRegionDidChange;
-(NSTimer *)panTimer;
-(CPSPanViewController *)panViewController;
-(void)setUpPanView;
-(void)setPanCompletionHandler:(id)arg1 ;
-(CPSActionButton *)donePanningButton;
-(NSArray *)panModeConstraints;
-(void)_updateFocusedItem;
-(void)setCenterMapPending:(BOOL)arg1 ;
-(BOOL)centerMapPending;
-(void)centerMap;
-(void)setPanViewController:(CPSPanViewController *)arg1 ;
-(void)setDonePanningButton:(CPSActionButton *)arg1 ;
-(void)dismissPanView:(id)arg1 ;
-(void)setPanTimer:(NSTimer *)arg1 ;
-(id)panCompletionHandler;
-(void)highlightModel:(id)arg1 ;
-(void)unhighlightModel:(id)arg1 ;
-(void)beginPanningWithCompletion:(/*^block*/id)arg1 ;
-(void)zoomToLocation:(id)arg1 ;
-(void)setClusterAnnotations:(NSMutableDictionary *)arg1 ;
@end

