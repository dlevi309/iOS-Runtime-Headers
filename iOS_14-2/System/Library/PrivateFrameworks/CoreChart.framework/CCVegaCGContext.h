/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaCGContextInterface.h>

@class JSValue, NSString, CCVegaJSFont, CCVegaRenderer;

@interface CCVegaCGContext : NSObject <CCVegaCGContextInterface> {

	JSValue* _fillStyle;
	double _globalAlpha;
	NSString* _lineCap;
	NSString* _lineJoin;
	double _lineWidth;
	double _miterLimit;
	NSString* _strokeStyle;
	NSString* _textAlign;
	CGAffineTransform _currentTransform;
	double _lineDashOffset;
	NSString* _font;
	NSString* _globalCompositeOperation;
	CGContextRef _bitmapContext;
	double _width;
	double _height;
	CCVegaJSFont* _internalFont;
	CCVegaRenderer* renderer;
	double pixelRatio;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer; 
@property (readonly) CGContextRef context; 
@property (assign) double width; 
@property (assign) double height; 
@property (retain) JSValue * fillStyle; 
@property (assign) double globalAlpha; 
@property (retain) NSString * lineCap; 
@property (retain) NSString * lineJoin; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (assign,nonatomic) double pixelRatio; 
@property (retain) NSString * strokeStyle; 
@property (retain) NSString * textAlign; 
@property (retain) NSString * font; 
@property (assign) double lineDashOffset; 
@property (retain) NSString * globalCompositeOperation; 
+(CGAffineTransform)flipYAxisWithHeight:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)fill;
-(void)clip;
-(double)lineWidth;
-(void)stroke;
-(double)globalAlpha;
-(double)width;
-(id)init;
-(void)save;
-(void)restore;
-(void)setFont:(NSString *)arg1 ;
-(NSString *)textAlign;
-(void)setTextAlign:(NSString *)arg1 ;
-(NSString *)lineCap;
-(void)setWidth:(double)arg1 ;
-(double)height;
-(void)setLineCap:(NSString *)arg1 ;
-(CGContextRef)context;
-(double)pixelRatio;
-(void)closePath;
-(void)setPixelRatio:(double)arg1 ;
-(void)setGlobalAlpha:(double)arg1 ;
-(CCVegaRenderer *)renderer;
-(void)setMiterLimit:(double)arg1 ;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(NSString *)lineJoin;
-(double)miterLimit;
-(void)setLineJoin:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)font;
-(JSValue *)fillStyle;
-(void)setStrokeStyle:(NSString *)arg1 ;
-(void)setFillStyle:(JSValue *)arg1 ;
-(NSString *)strokeStyle;
-(void)beginPath;
-(void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2 ;
-(void)lineToX:(double)arg1 y:(double)arg2 ;
-(void)moveToX:(double)arg1 y:(double)arg2 ;
-(void)rotateWithAngle:(double)arg1 ;
-(void)translateWithX:(double)arg1 y:(double)arg2 ;
-(NSString *)globalCompositeOperation;
-(void)setGlobalCompositeOperation:(NSString *)arg1 ;
-(id)measureText:(id)arg1 ;
-(CGColorRef)newColorFromString:(id)arg1 ;
-(void)resizeBitmapContext;
-(void)textWithString:(id)arg1 x:(double)arg2 y:(double)arg3 drawingMode:(int)arg4 ;
-(void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 ;
-(double)lineDashOffset;
-(void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(BOOL)arg6 ;
-(void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6 ;
-(void)quadraticCurveToCP1x:(double)arg1 cp1y:(double)arg2 x:(double)arg3 y:(double)arg4 ;
-(void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 ;
-(id)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(void)fillTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)strokeTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setLineDashWithSegments:(id)arg1 ;
-(void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6 ;
-(void)setLineDashOffset:(double)arg1 ;
-(void)invalidateBitmapContext;
@end

