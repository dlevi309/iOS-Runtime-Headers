/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIStepperControl.h>

@protocol UIStepperVisualElement;
@class NSMutableDictionary, UIView;

@interface UIStepper : UIControl <UIStepperControl> {

	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _incrementImages;
	NSMutableDictionary* _decrementImages;
	NSMutableDictionary* _backgroundImages;
	BOOL _continuous;
	BOOL _autorepeat;
	BOOL _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;
	UIView*<UIStepperVisualElement> _visualElement;

}

@property (nonatomic,retain) UIView*<UIStepperVisualElement> visualElement;              //@synthesize visualElement=_visualElement - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                        //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                            //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                                 //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                                        //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                                        //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                           //@synthesize stepValue=_stepValue - In the implementation block
+(Class)_fallbackVisualElementClass;
+(Class)visualElementClassForTraitCollection:(id)arg1 ;
+(id)visualElementForTraitCollection:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_emitValueChanged;
-(double)minimumValue;
-(double)maximumValue;
-(void)_commonStepperInit;
-(void)_refreshVisualElement;
-(UIView*<UIStepperVisualElement>)visualElement;
-(void)setStepValue:(double)arg1 ;
-(void)setAutorepeat:(BOOL)arg1 ;
-(void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2 ;
-(void)setVisualElement:(UIView*<UIStepperVisualElement>)arg1 ;
-(double)stepValue;
-(BOOL)autorepeat;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(void)visualElementDidSetValue:(id)arg1 ;
-(void)visualElementSendValueChangedEvent:(id)arg1 ;
@end

