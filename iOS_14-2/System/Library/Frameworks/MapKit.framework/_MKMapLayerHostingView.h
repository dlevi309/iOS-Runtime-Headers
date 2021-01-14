/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class VKMapView;

@interface _MKMapLayerHostingView : UIView {

	VKMapView* _mapView;

}

@property (nonatomic,retain) VKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMapView:(VKMapView *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(VKMapView *)mapView;
-(void)dealloc;
@end

