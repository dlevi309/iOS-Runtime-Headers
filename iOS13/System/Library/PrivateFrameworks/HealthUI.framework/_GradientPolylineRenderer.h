/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {

	HKRouteMapGenerator* _generator;

}
-(void)drawMapRect:(SCD_Struct_HK17)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_HK17)arg1 zoomScale:(double)arg2 ;
-(CGPoint)_originMapPoint;
-(id)initWithOverlay:(id)arg1 locationReadings:(id)arg2 ;
@end

