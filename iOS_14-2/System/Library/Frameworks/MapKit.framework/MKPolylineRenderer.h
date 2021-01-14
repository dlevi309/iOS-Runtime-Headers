/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKPolyline;

@interface MKPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;
	double _strokeStart;
	double _strokeEnd;

}

@property (nonatomic,readonly) MKPolyline * polyline; 
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(id)initWithPolyline:(id)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(MKPolyline *)polyline;
-(void)createPath;
-(double)strokeEnd;
-(BOOL)_canProvideVectorGeometry;
-(void)_updateVectorGeometry:(id)arg1 ;
-(void)_setNeedsVectorGeometryUpdate;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(id)_vectorGeometry;
-(void)setStrokeColor:(id)arg1 ;
-(double)strokeStart;
-(void)setStrokeStart:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
-(void)setStrokeEnd:(double)arg1 ;
@end

