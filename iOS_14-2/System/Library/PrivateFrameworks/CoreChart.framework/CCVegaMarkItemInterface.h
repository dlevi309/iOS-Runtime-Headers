/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

@class NSString, NSArray, CALayer;


@protocol CCVegaMarkItemInterface
@property (readonly) double cornerRadius; 
@property (readonly) NSString * shape; 
@property (readonly) NSString * orient; 
@property (readonly) double size; 
@property (readonly) NSString * baseline; 
@property (readonly) double radius; 
@property (readonly) double theta; 
@property (readonly) NSString * fontStyle; 
@property (readonly) double fontSize; 
@property (readonly) NSString * fontWeight; 
@property (readonly) NSString * font; 
@property (readonly) NSString * align; 
@property (readonly) double x; 
@property (readonly) double x2; 
@property (readonly) double dx; 
@property (readonly) double width; 
@property (readonly) double y; 
@property (readonly) double y2; 
@property (readonly) double dy; 
@property (readonly) double angle; 
@property (readonly) double height; 
@property (readonly) double opacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> fill; 
@property (readonly) double fillOpacity; 
@property (readonly) NSObject*<CCVegaColorOrGradientInterface> stroke; 
@property (readonly) double strokeOpacity; 
@property (readonly) double strokeWidth; 
@property (readonly) NSString * strokeCap; 
@property (readonly) NSArray * strokeDash; 
@property (readonly) NSString * strokeJoin; 
@property (readonly) NSString * interpolate; 
@property (readonly) double strokeMiterLimit; 
@property (readonly) NSString * path; 
@property (readonly) double zindex; 
@property (readonly) BOOL clip; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
@required
-(NSObject*<CCVegaColorOrGradientInterface>)fill;
-(double)fontSize;
-(BOOL)clip;
-(double)x2;
-(double)dx;
-(double)y2;
-(double)dy;
-(NSString *)shape;
-(CGRect*)bounds;
-(double)x;
-(double)angle;
-(NSObject*<CCVegaColorOrGradientInterface>)stroke;
-(id)itemAtIndex:(unsigned long long)arg1;
-(double)width;
-(BOOL)isDirty;
-(NSString *)baseline;
-(double)y;
-(double)theta;
-(NSString *)align;
-(double)size;
-(double)opacity;
-(NSString *)orient;
-(NSString *)path;
-(double)height;
-(unsigned long long)itemCount;
-(double)cornerRadius;
-(double)radius;
-(NSString *)fontStyle;
-(double)zindex;
-(double)fillOpacity;
-(CALayer *)caLayer;
-(NSString *)fontWeight;
-(double)strokeWidth;
-(BOOL)defined;
-(id)getText;
-(void)setIsDirty:(BOOL)arg1;
-(BOOL)isEqual:(id)arg1;
-(NSString *)font;
-(void)setCaLayer:(id)arg1;
-(double)getDouble:(id)arg1 defaultValue:(double)arg2;
-(CGPathRef)newPathByCallingShapeFunction;
-(id)getString:(id)arg1 defaultValue:(id)arg2;
-(id)getObject:(id)arg1 defaultValue:(id)arg2;
-(BOOL)getBoolean:(id)arg1 defaultValue:(BOOL)arg2;
-(double)strokeOpacity;
-(NSString *)strokeCap;
-(NSArray *)strokeDash;
-(NSString *)strokeJoin;
-(NSString *)interpolate;
-(double)strokeMiterLimit;

@end

