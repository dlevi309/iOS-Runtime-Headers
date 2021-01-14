/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;
	double _strokeStart;
	double _strokeEnd;

}

@property (nonatomic,readonly) MKCircle * circle; 
@property (assign,nonatomic) double strokeStart; 
@property (assign,nonatomic) double strokeEnd; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(MKCircle *)circle;
-(void)createPath;
-(double)strokeEnd;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorData;
-(void)setStrokeColor:(id)arg1 ;
-(double)strokeStart;
-(void)setStrokeStart:(double)arg1 ;
-(id)initWithCircle:(id)arg1 ;
-(void)_performInitialConfiguration;
-(void)setAlpha:(double)arg1 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(void)_updateRenderColors;
-(void)setStrokeEnd:(double)arg1 ;
@end

