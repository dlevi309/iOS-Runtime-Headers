/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDSmartPathSource
@property (readonly) unsigned long long numberOfControlKnobs; 
@optional
-(CGPoint*)fixedPointForControlKnobChange;

@required
-(void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(CGPoint)arg2;
-(CGPoint*)getControlKnobPosition:(unsigned long long)arg1;
-(id)getFeedbackStringForKnob:(unsigned long long)arg1;
-(CGPathRef)newFeedbackPathForKnob:(unsigned long long)arg1;
-(unsigned long long)numberOfControlKnobs;

@end

