/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)removeInteraction:(id)arg1 ;
-(void)addInteraction:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 button:(id)arg2 ;
@end

