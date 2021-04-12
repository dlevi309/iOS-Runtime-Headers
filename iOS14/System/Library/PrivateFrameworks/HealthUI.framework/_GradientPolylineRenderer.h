/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {

	HKRouteMapGenerator* _generator;

}
-(CGPoint)_originMapPoint;
-(void)drawMapRect:(SCD_Struct_Gr17)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_Gr17)arg1 zoomScale:(double)arg2 ;
-(id)initWithOverlay:(id)arg1 locationReadings:(id)arg2 ;
@end

