/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView {

	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(BOOL)_followsTerrain;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldShowCallout;
-(void)_deregisterObserver;
-(void)_registerObserver;
-(void)_updateAnchorOffset;
-(MKMapView *)mapView;
-(void)dealloc;
@end

