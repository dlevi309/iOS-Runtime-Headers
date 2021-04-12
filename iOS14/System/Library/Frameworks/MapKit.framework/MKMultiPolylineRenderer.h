/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolylineGroup, MKMultiPolyline;

@interface MKMultiPolylineRenderer : MKOverlayPathRenderer {

	VKVectorOverlayPolylineGroup* _vectorGeometry;
	double _strokeStart;
	double _strokeEnd;

}

@property (assign,setter=_setStrokeStart:,getter=_strokeStart,nonatomic) double strokeStart; 
@property (assign,setter=_setStrokeEnd:,getter=_strokeEnd,nonatomic) double strokeEnd; 
@property (nonatomic,readonly) MKMultiPolyline * multiPolyline; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)createPath;
-(BOOL)_canProvideVectorGeometry;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(double)_strokeStart;
-(double)_strokeEnd;
-(id)_vectorGeometry;
-(void)_setStrokeEnd:(double)arg1 ;
-(void)_setStrokeStart:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(void)setAlpha:(double)arg1 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
-(id)initWithMultiPolyline:(id)arg1 ;
-(MKMultiPolyline *)multiPolyline;
@end

