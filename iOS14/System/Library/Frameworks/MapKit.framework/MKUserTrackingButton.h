/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class _MKUserTrackingButton, MKMapView;

@interface MKUserTrackingButton : UIView {

	_MKUserTrackingButton* _button;

}

@property (assign,nonatomic,__weak) MKMapView * mapView; 
+(id)userTrackingButtonWithMapView:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setMapView:(MKMapView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeInteraction:(id)arg1 ;
-(void)addInteraction:(id)arg1 ;
-(MKMapView *)mapView;
@end

