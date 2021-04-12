/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray, NSMutableDictionary;

@interface MKOverlayPathRenderer : MKOverlayRenderer {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	double _lineWidth;
	int _lineJoin;
	int _lineCap;
	double _miterLimit;
	double _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;
	BOOL _shouldRasterize;
	os_unfair_lock_s _runningVectorGeometryAnimationsLock;
	NSMutableDictionary* _runningVectorGeometryAnimations;
	BOOL _externalSubclassOverridesDrawingMethods;

}

@property (getter=_externalSubclassOverridesDrawingMethods,nonatomic,readonly) BOOL externalSubclassOverridesDrawingMethods;              //@synthesize externalSubclassOverridesDrawingMethods=_externalSubclassOverridesDrawingMethods - In the implementation block
@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) double lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) double miterLimit; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign,nonatomic) BOOL shouldRasterize;                                                                                        //@synthesize shouldRasterize=_shouldRasterize - In the implementation block
@property (assign) const CGPathRef path; 
+(Class)_mapkitLeafClass;
+(BOOL)_externalSubclassOverridesDrawingMethods;
-(void)dealloc;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(UIColor *)fillColor;
-(BOOL)shouldRasterize;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(UIColor *)strokeColor;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(int)lineJoin;
-(int)lineCap;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)createPath;
-(void)_performInitialConfiguration;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)invalidatePath;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)_externalSubclassOverridesDrawingMethods;
-(BOOL)_canProvideVectorGeometry;
-(void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(/*^block*/id)arg2 ;
@end

