/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView {

	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(BOOL)_followsTerrain;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setAnnotation:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowCallout;
-(void)_deregisterObserver;
-(void)_registerObserver;
-(void)_updateAnchorOffset;
@end

