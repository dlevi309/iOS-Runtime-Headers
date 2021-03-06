/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class MKMapView, HKLocationReadings, UIButton, NSString;

@interface HKRouteView : UIView <MKMapViewDelegate> {

	MKMapView* _mapView;
	HKLocationReadings* _locationReadings;
	UIButton* _toggleMapTypeButton;

}

@property (nonatomic,retain) UIButton * toggleMapTypeButton;              //@synthesize toggleMapTypeButton=_toggleMapTypeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)layoutSubviews;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)setLocationReadings:(id)arg1 ;
-(void)_clearMapViewIfNeeded;
-(void)_setRouteMapType:(unsigned long long)arg1 ;
-(void)_addAnnotation:(id)arg1 isStartPoint:(BOOL)arg2 ;
-(void)_displayMapRouteForLocationReadings;
-(id)routeImageForSharing;
-(void)_toggleMapType;
-(UIButton *)toggleMapTypeButton;
-(void)setToggleMapTypeButton:(UIButton *)arg1 ;
@end

