/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathView.h>

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView

@property (nonatomic,readonly) MKPolyline * polyline; 
-(id)initWithPolyline:(id)arg1 ;
-(MKPolyline *)polyline;
-(void)createPath;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
@end

