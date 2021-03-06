/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDGradient.h>
#import <TSReading/TSDMixing.h>

@interface TSDAngleGradient : TSDGradient <TSDMixing> {

	double mAngle;

}

@property (assign,nonatomic) double gradientAngle; 
@property (nonatomic,readonly) double gradientAngleInDegrees; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)gradientAngle;
-(void)setGradientType:(unsigned long long)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3 angle:(double)arg4 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 atAngle:(double)arg3 ;
-(CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ;
-(void)insertGradientStop:(id)arg1 ;
-(id)insertStopAtFraction:(double)arg1 ;
-(void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2 ;
-(id)insertStopAtFraction:(double)arg1 withColor:(id)arg2 ;
-(void)removeStop:(id)arg1 ;
-(id)removeStopAtIndex:(unsigned long long)arg1 ;
-(void)reverseStopOrder;
-(void)evenlyDistributeStops;
-(void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2 ;
-(void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2 ;
-(void)setGradientStops:(id)arg1 ;
-(void)setFirstColor:(id)arg1 ;
-(void)setLastColor:(id)arg1 ;
-(CGAffineTransform)p_shadingTransformForBounds:(CGRect)arg1 ;
-(double)p_bestGradientLengthForRect:(CGRect)arg1 atAngle:(double)arg2 ;
-(void)p_paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3 angle:(double)arg4 ;
-(double)gradientAngleInDegrees;
-(void)setGradientAngle:(double)arg1 ;
@end

