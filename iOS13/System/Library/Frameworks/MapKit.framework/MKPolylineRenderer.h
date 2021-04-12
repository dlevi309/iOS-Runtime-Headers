/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKPolyline;

@interface MKPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;

}

@property (nonatomic,readonly) MKPolyline * polyline; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(MKPolyline *)polyline;
-(void)createPath;
-(void)_updateRenderColors;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(id)initWithPolyline:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorGeometry;
@end

