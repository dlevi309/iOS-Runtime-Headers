/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolygonGroup, MKMultiPolygon;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {

	const CGPath* _paths;
	unsigned long long _pathsCount;
	VKVectorOverlayPolygonGroup* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (assign,setter=_setStrokeStart:,getter=_strokeStart,nonatomic) double strokeStart; 
@property (assign,setter=_setStrokeEnd:,getter=_strokeEnd,nonatomic) double strokeEnd; 
@property (nonatomic,readonly) MKMultiPolygon * multiPolygon; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)createPath;
-(BOOL)_canProvideVectorGeometry;
-(double)_strokeStart;
-(double)_strokeEnd;
-(id)_vectorGeometry;
-(id)initWithMultiPolygon:(id)arg1 ;
-(MKMultiPolygon *)multiPolygon;
-(void)_setStrokeEnd:(double)arg1 ;
-(void)_setStrokeStart:(double)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)_performInitialConfiguration;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)setAlpha:(double)arg1 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
-(void)dealloc;
@end

