/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayPolygonGroup, MKMultiPolygon;

@interface MKMultiPolygonRenderer : MKOverlayPathRenderer {

	const CGPath* _paths;
	unsigned long long _pathsCount;
	VKVectorOverlayPolygonGroup* _vectorData;

}

@property (nonatomic,readonly) MKMultiPolygon * multiPolygon; 
+(Class)_mapkitLeafClass;
-(void)dealloc;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)createPath;
-(void)_updateRenderColors;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorGeometry;
-(id)initWithMultiPolygon:(id)arg1 ;
-(MKMultiPolygon *)multiPolygon;
@end

