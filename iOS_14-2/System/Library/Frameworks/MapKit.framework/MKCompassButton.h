/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MKCompassView;
@class UIView, MKMapView;

@interface MKCompassButton : UIView {

	UIView*<MKCompassView> _compassView;
	BOOL _visible;
	MKMapView* _mapView;
	long long _compassVisibility;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;               //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) long long compassVisibility;              //@synthesize compassVisibility=_compassVisibility - In the implementation block
+(id)compassButtonWithMapView:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 mapView:(id)arg2 ;
-(void)didTapCompassGesture:(id)arg1 ;
-(void)mapViewDidUpdateYawNotification:(id)arg1 ;
-(void)setCompassVisibility:(long long)arg1 ;
-(long long)compassVisibility;
-(void)setMapView:(MKMapView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeInteraction:(id)arg1 ;
-(void)addInteraction:(id)arg1 ;
-(void)_updateVisibility;
-(MKMapView *)mapView;
@end

