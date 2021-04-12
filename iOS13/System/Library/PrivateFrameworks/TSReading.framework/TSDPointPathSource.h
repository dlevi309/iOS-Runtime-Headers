/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathSource.h>
#import <TSReading/TSDMixing.h>
#import <TSReading/TSDSmartPathSource.h>

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	CGPoint mPoint;
	CGSize mNaturalSize;

}

@property (assign) int type; 
@property (assign) CGPoint point; 
@property (assign) CGSize naturalSize; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)rightSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)doubleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)starWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
+(id)leftSingleArrowWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
+(id)plusWithPoint:(CGPoint)arg1 naturalSize:(CGSize)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(void)setPointValue:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(id)initWithType:(int)arg1 point:(CGPoint)arg2 naturalSize:(CGSize)arg3 ;
-(CGPoint)p_getControlKnobPointForArrow;
-(CGPoint)p_getControlKnobPointForStarPoints;
-(CGPoint)p_getControlKnobPointForStarInnerRadius;
-(CGPoint)p_getControlKnobPointForPlus;
-(void)p_setControlKnobPointForArrow:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarPoints:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForStarInnerRadius:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForPlus:(CGPoint)arg1 ;
-(CGPathRef)p_newArrowPath;
-(CGPathRef)p_newStarPath;
-(CGPathRef)p_newPlusPath;
-(BOOL)p_isRightFacingArrow;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGPoint)minPointValue;
-(CGPoint)maxPointValue;
-(CGSize)scaleFactorForInscribedRectangle;
-(BOOL)p_isFlippedDoubleArrow;
@end

