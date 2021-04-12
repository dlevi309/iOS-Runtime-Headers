/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIStepperVisualElement <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double minimumValue; 
@property (assign,nonatomic) double maximumValue; 
@property (assign,nonatomic) double stepValue; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (assign,nonatomic) BOOL wraps; 
@property (assign,nonatomic) BOOL autorepeat; 
@property (assign,nonatomic,__weak) id<UIStepperControl> stepperControl; 
@required
+(id)new;
+(CGSize*)initialSize;
+(CGSize*)initialIntrinsicSize;
+(UIEdgeInsets*)initialAlignmentRectInsets;
-(void)setEnabled:(BOOL)arg1;
-(double)value;
-(void)setValue:(double)arg1;
-(BOOL)isEnabled;
-(id)backgroundImageForState:(unsigned long long)arg1;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)cancelTrackingWithEvent:(id)arg1;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1;
-(void)setMinimumValue:(double)arg1;
-(void)setMaximumValue:(double)arg1;
-(double)minimumValue;
-(double)maximumValue;
-(void)setStepValue:(double)arg1;
-(CGSize*)sizeThatFits:(CGSize)arg1 forControl:(id)arg2;
-(CGSize*)intrinsicSizeWithinSize:(CGSize)arg1 forControl:(id)arg2;
-(UIEdgeInsets*)alignmentRectInsetsForControl:(id)arg1;
-(void)setAutorepeat:(BOOL)arg1;
-(void)setStepperControl:(id)arg1;
-(double)stepValue;
-(BOOL)autorepeat;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
-(id)incrementImageForState:(unsigned long long)arg1;
-(id)decrementImageForState:(unsigned long long)arg1;
-(id<UIStepperControl>)stepperControl;

@end

