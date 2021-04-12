/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMapView:(VKMapView *)arg1 ;
-(VKMapView *)mapView;
@end

