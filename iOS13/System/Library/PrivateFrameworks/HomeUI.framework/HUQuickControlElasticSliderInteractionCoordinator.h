/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlInteractionCoordinator.h>
#import <libobjc.A.dylib/HUQuickControlSliderGestureTransformerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class HUQuickControlSliderGestureTransformer, UILongPressGestureRecognizer, UITapGestureRecognizer, HUElasticApplier, HUDisplayLinkApplier, NSDate, NSString;

@interface HUQuickControlElasticSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlSliderGestureTransformerDelegate, UIGestureRecognizerDelegate> {

	BOOL _userInteractionActive;
	BOOL _hasSecondaryValue;
	BOOL _firstTouchDown;
	HUQuickControlSliderGestureTransformer* _gestureTransformer;
	UILongPressGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	HUElasticApplier* _primaryValueSmoothingApplier;
	HUElasticApplier* _secondaryValueSmoothingApplier;
	HUDisplayLinkApplier* _controlVerticalStretchingApplier;
	HUElasticApplier* _controlHorizontalCompressionApplier;
	double _activeGestureValue;
	unsigned long long _activeGestureValueType;
	NSDate* _interactableStartTime;
	CGSize _modelValue;

}

@property (nonatomic,retain) HUQuickControlSliderGestureTransformer * gestureTransformer;                                        //@synthesize gestureTransformer=_gestureTransformer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * panGestureRecognizer;                                                //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                                      //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) HUElasticApplier * primaryValueSmoothingApplier;                                                    //@synthesize primaryValueSmoothingApplier=_primaryValueSmoothingApplier - In the implementation block
@property (nonatomic,retain) HUElasticApplier * secondaryValueSmoothingApplier;                                                  //@synthesize secondaryValueSmoothingApplier=_secondaryValueSmoothingApplier - In the implementation block
@property (nonatomic,retain) HUDisplayLinkApplier * controlVerticalStretchingApplier;                                            //@synthesize controlVerticalStretchingApplier=_controlVerticalStretchingApplier - In the implementation block
@property (nonatomic,retain) HUElasticApplier * controlHorizontalCompressionApplier;                                             //@synthesize controlHorizontalCompressionApplier=_controlHorizontalCompressionApplier - In the implementation block
@property (assign,nonatomic) double activeGestureValue;                                                                          //@synthesize activeGestureValue=_activeGestureValue - In the implementation block
@property (assign,nonatomic) unsigned long long activeGestureValueType;                                                          //@synthesize activeGestureValueType=_activeGestureValueType - In the implementation block
@property (assign,nonatomic) CGSize modelValue;                                                                                  //@synthesize modelValue=_modelValue - In the implementation block
@property (nonatomic,readonly) HUQuickControlViewProfile*<HUQuickControlIncrementalConvertibleProfile> viewProfile; 
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                          //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,getter=isFirstTouchDown,nonatomic) BOOL firstTouchDown;                                                        //@synthesize firstTouchDown=_firstTouchDown - In the implementation block
@property (nonatomic,retain) NSDate * interactableStartTime;                                                                     //@synthesize interactableStartTime=_interactableStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryValue;                                                                             //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setViewVisible:(BOOL)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(HUQuickControlViewProfile*<HUQuickControlIncrementalConvertibleProfile>)viewProfile;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(CGSize)modelValue;
-(void)recordInteractionStart;
-(BOOL)hasSecondaryValue;
-(void)setFirstTouchDown:(BOOL)arg1 ;
-(void)_updateModelValue:(CGSize)arg1 roundValue:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)_updateControlViewValueOfType:(unsigned long long)arg1 withValue:(double)arg2 ;
-(BOOL)isFirstTouchDown;
-(void)setModelValue:(CGSize)arg1 ;
-(void)_handleControlPanGesture:(id)arg1 ;
-(void)_handleControlTapGesture:(id)arg1 ;
-(id)_allAppliers;
-(void)_beginReceivingTouchesWithGestureRecognizer:(id)arg1 isTouchContinuation:(BOOL)arg2 ;
-(void)setInteractableStartTime:(NSDate *)arg1 ;
-(HUQuickControlSliderGestureTransformer *)gestureTransformer;
-(id)_valueNormalizerWithOptions:(id)arg1 ;
-(void)_setupAllValueAppliersIfNecessary;
-(HUElasticApplier *)secondaryValueSmoothingApplier;
-(void)setSecondaryValueSmoothingApplier:(HUElasticApplier *)arg1 ;
-(HUElasticApplier *)primaryValueSmoothingApplier;
-(void)_updatePropertiesForControlValueSmoothingApplier:(id)arg1 ofType:(unsigned long long)arg2 ;
-(unsigned long long)_findClosestValueFromTouchLocation:(CGPoint)arg1 ;
-(double)_sliderValueForLocation:(CGPoint)arg1 ;
-(void)setActiveGestureValueType:(unsigned long long)arg1 ;
-(unsigned long long)activeGestureValueType;
-(void)setActiveGestureValue:(double)arg1 ;
-(double)activeGestureValue;
-(void)setGestureTransformer:(HUQuickControlSliderGestureTransformer *)arg1 ;
-(id)_rubberBandingValueNormalizer;
-(HUElasticApplier *)controlHorizontalCompressionApplier;
-(HUDisplayLinkApplier *)controlVerticalStretchingApplier;
-(id)_setupValueApplierForValueType:(unsigned long long)arg1 ;
-(void)setPrimaryValueSmoothingApplier:(HUElasticApplier *)arg1 ;
-(void)_setupStretchingAppliers;
-(CGSize)_rawViewValueRange;
-(double)_rubberBandedStretchProgress;
-(void)setControlHorizontalCompressionApplier:(HUElasticApplier *)arg1 ;
-(void)setControlVerticalStretchingApplier:(HUDisplayLinkApplier *)arg1 ;
-(void)gestureTransformer:(id)arg1 sliderValueDidChange:(double)arg2 ;
-(void)gestureDidEndForGestureTransformer:(id)arg1 ;
-(NSDate *)interactableStartTime;
@end

