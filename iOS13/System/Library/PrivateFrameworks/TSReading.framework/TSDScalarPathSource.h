/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathSource.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSDSmartPathSource.h>

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	double mScalar;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double scalar; 
@property (nonatomic,readonly) double maxScalar; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)roundedRectangleWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
+(id)regularPolygonWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 ;
+(id)rectangleWithNaturalSize:(CGSize)arg1 ;
+(id)chevronWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(void)setScalar:(double)arg1 ;
-(double)scalar;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGSize)scaleFactorForInscribedRectangle;
-(id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 ;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(CGPoint)p_getControlKnobPointForRegularPolygon;
-(CGPoint)p_getControlKnobPointForChevron;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForRegularPolygon:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForChevron:(CGPoint)arg1 ;
-(void)setScalarValue:(id)arg1 ;
-(CGPathRef)p_newRoundedRectPath;
-(CGPathRef)p_newRegularPolygonPath;
-(CGPathRef)p_newChevronPath;
-(double)maxScalar;
@end

