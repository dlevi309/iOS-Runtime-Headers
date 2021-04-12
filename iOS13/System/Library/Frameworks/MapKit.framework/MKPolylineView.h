/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathView.h>

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView

@property (nonatomic,readonly) MKPolyline * polyline; 
-(MKPolyline *)polyline;
-(void)createPath;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithPolyline:(id)arg1 ;
@end

