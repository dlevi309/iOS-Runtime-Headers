/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKMapView.h>

@interface PXPlacesMapView : MKMapView {

	double _currentScale;

}

@property (assign) unsigned long long pkMapType; 
@property (assign) double pitch; 
+(id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(CGRect)arg3 ;
+(SCD_Struct_PX2)mapRectForNearbyQueriesFromRect:(SCD_Struct_PX2)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3 ;
+(SCD_Struct_PX2)MKMapRectForCoordinateRegion:(SCD_Struct_PX2)arg1 ;
+(SCD_Struct_PX2)canonicalMapRect:(SCD_Struct_PX2)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(double)zoomLevel;
-(void)setPkMapType:(unsigned long long)arg1 ;
-(unsigned long long)pkMapType;
-(void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)currentViewPort;
-(double)_sampleMapDistanceFromViewPoint:(CGPoint)arg1 toViewPoint:(CGPoint)arg2 ;
-(double)_radiansFromDegrees:(double)arg1 ;
-(id)currentViewPortWithThumbnailOverscan;
-(void)deselectAllAnnotationsAnimated:(BOOL)arg1 ;
-(SCD_Struct_PX2)ppt_cityMapRect;
-(/*^block*/id)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2 ;
@end

