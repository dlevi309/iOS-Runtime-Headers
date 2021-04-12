/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)stepValue;
-(BOOL)wraps;
-(double)maximumValue;
-(void)setStepValue:(double)arg1;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(id<UIStepperControl>)stepperControl;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setContinuous:(BOOL)arg1;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setMinimumValue:(double)arg1;
-(void)cancelTrackingWithEvent:(id)arg1;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
-(void)setEnabled:(BOOL)arg1;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(id)incrementImageForState:(unsigned long long)arg1;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(id)decrementImageForState:(unsigned long long)arg1;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
-(void)setWraps:(BOOL)arg1;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
-(void)setValue:(double)arg1;
-(BOOL)isContinuous;
-(BOOL)autorepeat;
-(id)backgroundImageForState:(unsigned long long)arg1;
-(BOOL)isEnabled;
-(double)minimumValue;
-(void)setMaximumValue:(double)arg1;
-(void)setAutorepeat:(BOOL)arg1;
-(double)value;
-(CGSize*)sizeThatFits:(CGSize)arg1 forControl:(id)arg2;
-(CGSize*)intrinsicSizeWithinSize:(CGSize)arg1 forControl:(id)arg2;
-(UIEdgeInsets*)alignmentRectInsetsForControl:(id)arg1;
-(void)setStepperControl:(id)arg1;

@end

