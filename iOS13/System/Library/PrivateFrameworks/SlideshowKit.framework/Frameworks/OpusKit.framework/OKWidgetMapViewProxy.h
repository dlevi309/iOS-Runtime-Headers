/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetMapViewProxyExports.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class OKMKMapView, MKMapView, NSString;

@interface OKWidgetMapViewProxy : OKWidgetView <OKWidgetMapViewProxyExports, UIGestureRecognizerDelegate, MKMapViewDelegate> {

	OKMKMapView* _mapView;
	SCD_Struct_OK15 _region;
	BOOL _zoomToFitAnnotations;

}

@property (nonatomic,retain,readonly) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(MKMapView *)mapView;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(BOOL)supportsReadiness;
-(void)setAntialiasing:(BOOL)arg1 ;
-(BOOL)settingScrollEnabled;
-(void)setSettingScrollEnabled:(BOOL)arg1 ;
-(void)selectAnnotationWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)zoomToAnnotationsWithIdentifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSettingShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)settingShowsPointsOfInterest;
-(void)setSettingShowsBuildings:(BOOL)arg1 ;
-(BOOL)settingShowsBuildings;
-(unsigned long long)settingMapType;
-(void)setSettingMapType:(unsigned long long)arg1 ;
-(BOOL)settingZoomEnabled;
-(void)setSettingZoomEnabled:(BOOL)arg1 ;
-(BOOL)settingScrollWheelEnabled;
-(void)setSettingScrollWheelEnabled:(BOOL)arg1 ;
-(BOOL)settingShowsUserLocation;
-(void)setSettingShowsUserLocation:(BOOL)arg1 ;
-(SCD_Struct_OK16)settingRegion;
-(void)setSettingRegion:(SCD_Struct_OK16)arg1 ;
-(CLLocationCoordinate2D)settingCenterCoordinate;
-(void)setSettingCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setSettingAnnotations:(id)arg1 ;
-(void)setSettingZoomToFitAnnotations:(BOOL)arg1 ;
@end

