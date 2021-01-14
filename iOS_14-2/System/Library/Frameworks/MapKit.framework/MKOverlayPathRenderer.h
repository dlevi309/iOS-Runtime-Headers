/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray, NSMutableDictionary, MKUsageCounter;

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
	MKUsageCounter* _usageCounter;

}

@property (getter=_externalSubclassOverridesDrawingMethods,nonatomic,readonly) BOOL externalSubclassOverridesDrawingMethods;              //@synthesize externalSubclassOverridesDrawingMethods=_externalSubclassOverridesDrawingMethods - In the implementation block
@property (assign,setter=_setUsageCounter:,getter=_usageCounter,nonatomic,__weak) MKUsageCounter * usageCounter;                          //@synthesize usageCounter=_usageCounter - In the implementation block
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
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(UIColor *)fillColor;
-(int)lineCap;
-(void)_animateVectorGeometryIfNecessaryForKey:(id)arg1 withStepHandler:(/*^block*/id)arg2 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(const CGPathRef)path;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(int)lineJoin;
-(void)_setUsageCounter:(id)arg1 ;
-(void)createPath;
-(BOOL)shouldRasterize;
-(BOOL)_canProvideVectorGeometry;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(double)miterLimit;
-(BOOL)_externalSubclassOverridesDrawingMethods;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(id)_usageCounter;
-(void)_performInitialConfiguration;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)invalidatePath;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(void)dealloc;
@end

