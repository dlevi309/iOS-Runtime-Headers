/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

@class JSValue, NSString;


@protocol CCVegaCGContextInterface <JSExport>
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
@optional
-(void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(BOOL)arg6 __JS_EXPORT_AS__arc:(id)arg7;
-(void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6 __JS_EXPORT_AS__bezierCurveTo:(id)arg7;
-(void)quadraticCurveToCP1x:(double)arg1 cp1y:(double)arg2 x:(double)arg3 y:(double)arg4 __JS_EXPORT_AS__quadraticCurveTo:(id)arg5;
-(void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 __JS_EXPORT_AS__clearRect:(id)arg5;
-(id)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 __JS_EXPORT_AS__createLinearGradient:(id)arg5;
-(void)fillTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__fillText:(id)arg4;
-(void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__fillRect:(id)arg5;
-(void)lineToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__lineTo:(id)arg3;
-(void)moveToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__moveTo:(id)arg3;
-(void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__rect:(id)arg5;
-(void)strokeTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__strokeText:(id)arg4;
-(void)setLineDashWithSegments:(id)arg1 __JS_EXPORT_AS__setLineDash:(id)arg2;
-(void)rotateWithAngle:(double)arg1 __JS_EXPORT_AS__rotate:(id)arg2;
-(void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6 __JS_EXPORT_AS__setTransform:(id)arg7;
-(void)translateWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__translate:(id)arg3;
-(BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__isPointInPath:(id)arg3;

@required
-(void)setLineWidth:(double)arg1;
-(void)fill;
-(void)clip;
-(double)lineWidth;
-(void)stroke;
-(double)globalAlpha;
-(void)save;
-(void)restore;
-(void)setFont:(id)arg1;
-(NSString *)textAlign;
-(void)setTextAlign:(id)arg1;
-(NSString *)lineCap;
-(void)setLineCap:(id)arg1;
-(double)pixelRatio;
-(void)closePath;
-(void)setPixelRatio:(double)arg1;
-(void)setGlobalAlpha:(double)arg1;
-(void)setMiterLimit:(double)arg1;
-(NSString *)lineJoin;
-(double)miterLimit;
-(void)setLineJoin:(id)arg1;
-(NSString *)font;
-(JSValue *)fillStyle;
-(void)setStrokeStyle:(id)arg1;
-(void)setFillStyle:(id)arg1;
-(NSString *)strokeStyle;
-(void)beginPath;
-(void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
-(BOOL)isPointInPathWithX:(double)arg1 y:(double)arg2;
-(void)lineToX:(double)arg1 y:(double)arg2;
-(void)moveToX:(double)arg1 y:(double)arg2;
-(void)rotateWithAngle:(double)arg1;
-(void)translateWithX:(double)arg1 y:(double)arg2;
-(NSString *)globalCompositeOperation;
-(void)setGlobalCompositeOperation:(id)arg1;
-(id)measureText:(id)arg1;
-(void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
-(double)lineDashOffset;
-(void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(BOOL)arg6;
-(void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
-(void)quadraticCurveToCP1x:(double)arg1 cp1y:(double)arg2 x:(double)arg3 y:(double)arg4;
-(void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4;
-(id)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
-(void)fillTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3;
-(void)strokeTextWithString:(id)arg1 x:(double)arg2 y:(double)arg3;
-(void)setLineDashWithSegments:(id)arg1;
-(void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
-(void)setLineDashOffset:(double)arg1;

@end

