/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDPathSource.h>
#import <TSReading/TSDSmartPathSource.h>
#import <TSReading/TSDMixing.h>

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {

	double mCornerRadius;
	double mTailSize;
	CGPoint mTailPosition;
	CGSize mNaturalSize;
	BOOL mIsTailAtCenter;

}

@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) double maxCornerRadius; 
@property (assign,nonatomic) CGPoint tailKnobPosition; 
@property (assign,nonatomic) double tailSize; 
@property (nonatomic,readonly) double maxTailSize; 
@property (assign,nonatomic) CGPoint tailSizeKnobPosition; 
@property (nonatomic,readonly) CGPoint tailCenter; 
@property (nonatomic,readonly) BOOL isTailAtCenter; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)quoteBubbleWithTailPosition:(CGPoint)arg1 tailSize:(double)arg2 naturalSize:(CGSize)arg3 ;
+(id)calloutWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(double)maxCornerRadius;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(id)interiorWrapPath;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(void)p_setNaturalSize:(CGSize)arg1 ;
-(void)p_setCornerRadius:(double)arg1 ;
-(void)p_setTailPosition:(CGPoint)arg1 ;
-(void)p_setTailSize:(double)arg1 ;
-(void)p_setTailAtCenter:(BOOL)arg1 ;
-(id)initWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4 tailAtCenter:(BOOL)arg5 ;
-(CGPoint)p_tailPosition;
-(double)tailSize;
-(CGPoint)tailKnobPosition;
-(CGPoint)tailSizeKnobPosition;
-(void)setTailKnobPosition:(CGPoint)arg1 ;
-(void)setTailSizeKnobPosition:(CGPoint)arg1 ;
-(id)p_basePath;
-(void)p_getTailPath:(id)arg1 center:(CGPoint*)arg2 tailSize:(double*)arg3 intersections:(CGPoint)arg4 ;
-(CGPoint)p_adjustedCenterForPath:(id)arg1 ;
-(BOOL)isOval;
-(id)p_buildPath;
-(CGPoint)tailCenter;
-(double)maxTailSize;
-(void)setTailSize:(double)arg1 ;
-(BOOL)isTailAtCenter;
@end

