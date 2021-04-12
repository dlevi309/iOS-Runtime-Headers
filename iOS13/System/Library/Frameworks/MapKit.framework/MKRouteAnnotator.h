/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class GEOComposedRoute;

@interface MKRouteAnnotator : NSObject {

	SCD_Struct_MK13 _boundingRegion;
	GEOComposedRoute* _composedRoute;
	CGSize* _mapPoints;
	CGSize _topLeftCorner;
	CGSize _snapshotSize;
	double _zoomLevel;

}
-(void)dealloc;
-(void)_generateMapPoints;
-(SCD_Struct_MK8)_calculateBoundingRegionForRoute;
-(double)_zoomLevelForCoordinateRegion:(SCD_Struct_MK8)arg1 contentRect:(CGRect)arg2 ;
-(CGAffineTransform)_overviewAffineTransformForRect:(CGRect)arg1 zoomLevel:(double)arg2 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(double)arg2 transform:(CGAffineTransform)arg3 inImage:(id)arg4 ;
-(id)_createSnapshotter;
-(id)_drawRouteInImage:(id)arg1 ;
-(id)initWithComposedRoute:(id)arg1 contentSize:(CGSize)arg2 ;
-(void)createSnapshotOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

