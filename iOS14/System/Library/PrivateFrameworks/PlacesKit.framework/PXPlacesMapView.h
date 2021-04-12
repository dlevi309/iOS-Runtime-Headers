/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKMapView.h>

@interface PXPlacesMapView : MKMapView {

	double _currentScale;

}

@property (assign) unsigned long long pkMapType; 
@property (assign) double pitch; 
+(SCD_Struct_PX2)mapRectForNearbyQueriesFromRect:(SCD_Struct_PX2)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3 ;
+(SCD_Struct_PX2)MKMapRectForCoordinateRegion:(SCD_Struct_PX2)arg1 ;
+(SCD_Struct_PX2)canonicalMapRect:(SCD_Struct_PX2)arg1 ;
+(id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(CGRect)arg3 ;
-(double)zoomLevel;
-(double)pitch;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)pkMapType;
-(void)setPkMapType:(unsigned long long)arg1 ;
-(void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)_commonInit;
-(void)setPitch:(double)arg1 ;
-(id)currentViewPort;
-(double)_sampleMapDistanceFromViewPoint:(CGPoint)arg1 toViewPoint:(CGPoint)arg2 ;
-(double)_radiansFromDegrees:(double)arg1 ;
-(id)currentViewPortWithThumbnailOverscan;
-(void)deselectAllAnnotationsAnimated:(BOOL)arg1 ;
-(SCD_Struct_PX2)ppt_cityMapRect;
-(/*^block*/id)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2 ;
@end

