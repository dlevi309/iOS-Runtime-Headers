/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDBezierPathSource.h>
#import <TSReading/TSDSmartPathSource.h>

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {

	int mType;
	double mOutsetFrom;
	double mOutsetTo;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double outsetFrom; 
@property (assign,nonatomic) double outsetTo; 
@property (readonly) unsigned long long numberOfControlKnobs; 
+(id)pathSourceAtAngleOfSize:(CGSize)arg1 forType:(int)arg2 ;
+(id)pathSourceOfLength:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)bezierPath;
-(BOOL)isCircular;
-(BOOL)isRectangular;
-(void)bend;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(BOOL)isLineSegment;
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGPoint)fixedPointForControlKnobChange;
-(id)initWithBezierPath:(id)arg1 ;
-(void)p_setBezierPath:(id)arg1 ;
-(double)outsetFrom;
-(double)outsetTo;
-(void)setOutsetFrom:(double)arg1 ;
-(void)setOutsetTo:(double)arg1 ;
-(long long)pathElementIndexForKnobTag:(unsigned long long)arg1 ;
@end

