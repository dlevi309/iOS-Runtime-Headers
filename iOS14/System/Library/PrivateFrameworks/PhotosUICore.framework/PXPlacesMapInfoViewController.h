/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController {

	PXPlacesMapView* _mapView;

}

@property (__weak) PXPlacesMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
-(void)setMapView:(PXPlacesMapView *)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(void)tappedDone:(id)arg1 ;
-(void)tappedDimView:(id)arg1 ;
-(void)tapped3dButton:(id)arg1 ;
-(void)mapTypeChanged:(id)arg1 ;
-(long long)segmentIndexFor:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(PXPlacesMapView *)mapView;
@end

