/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathView.h>

@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView

@property (nonatomic,readonly) MKPolygon * polygon; 
-(MKPolygon *)polygon;
-(void)createPath;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPolygon:(id)arg1 ;
@end

