/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, NSString;

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate> {

	MKMapView* _mapView;

}

@property (retain) MKMapView * mapView;                             //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultReuseIdentifier;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)setupSubviews;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)setUpConstraints;
-(MKMapView *)mapView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

