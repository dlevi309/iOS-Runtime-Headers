/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayView.h>

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	double _lineWidth;
	int _lineJoin;
	int _lineCap;
	double _miterLimit;
	double _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) double lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) double miterLimit; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) CGPathRef path; 
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(UIColor *)fillColor;
-(int)lineCap;
-(void)setPath:(CGPathRef)arg1 ;
-(CGPathRef)path;
-(void)setLineCap:(int)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(int)lineJoin;
-(void)createPath;
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(double)miterLimit;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(id)initWithOverlay:(id)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(void)_performInitialConfiguration;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(double)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)invalidatePath;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(void)dealloc;
@end

