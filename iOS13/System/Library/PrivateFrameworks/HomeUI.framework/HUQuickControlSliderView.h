/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlControllableView.h>

@class HUQuickControlSliderViewProfile, UIView, HUQuickControlSliderValueOverlayView, NSLayoutConstraint, HUIconView, UIImpactFeedbackGenerator, NSString;

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView> {

	BOOL _showOffState;
	HUQuickControlSliderViewProfile* _profile;
	unsigned long long _reachabilityState;
	double _sliderValue;
	double _secondarySliderValue;
	double _rawSliderValue;
	UIView* _backgroundView;
	UIView* _borderView;
	HUQuickControlSliderValueOverlayView* _valueOverlayView;
	NSLayoutConstraint* _overlayTopConstraint;
	HUIconView* _decorationIconView;
	double _primaryNormalizedValue;
	double _secondaryNormalizedValue;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (assign,nonatomic) BOOL showOffState;                                                    //@synthesize showOffState=_showOffState - In the implementation block
@property (assign,nonatomic) double rawSliderValue;                                                //@synthesize rawSliderValue=_rawSliderValue - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * borderView;                                                  //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) HUQuickControlSliderValueOverlayView * valueOverlayView;              //@synthesize valueOverlayView=_valueOverlayView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * overlayTopConstraint;                            //@synthesize overlayTopConstraint=_overlayTopConstraint - In the implementation block
@property (nonatomic,retain) HUIconView * decorationIconView;                                      //@synthesize decorationIconView=_decorationIconView - In the implementation block
@property (assign,nonatomic) double primaryNormalizedValue;                                        //@synthesize primaryNormalizedValue=_primaryNormalizedValue - In the implementation block
@property (assign,nonatomic) double secondaryNormalizedValue;                                      //@synthesize secondaryNormalizedValue=_secondaryNormalizedValue - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                        //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) double sliderValue;                                                   //@synthesize sliderValue=_sliderValue - In the implementation block
@property (assign,nonatomic) double secondarySliderValue;                                          //@synthesize secondarySliderValue=_secondarySliderValue - In the implementation block
@property (nonatomic,copy) HUQuickControlSliderViewProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                 //@synthesize reachabilityState=_reachabilityState - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlSliderViewProfile *)profile;
-(void)setProfile:(HUQuickControlSliderViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setBorderView:(UIView *)arg1 ;
-(UIView *)borderView;
-(void)setSecondaryValue:(id)arg1 ;
-(id)secondaryValue;
-(double)sliderValue;
-(void)setSliderValue:(double)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(BOOL)showOffState;
-(void)_prepareForTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(void)setShowOffState:(BOOL)arg1 ;
-(void)setDecorationIconView:(HUIconView *)arg1 ;
-(HUIconView *)decorationIconView;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg1 ;
-(void)_actuateTapticFeedback;
-(BOOL)_createDecorationIconViewIfNecessary;
-(CGSize)_permittedValueRange;
-(void)setValueOverlayView:(HUQuickControlSliderValueOverlayView *)arg1 ;
-(HUQuickControlSliderValueOverlayView *)valueOverlayView;
-(void)_updateOffState;
-(void)setRawSliderValue:(double)arg1 ;
-(double)primaryNormalizedValue;
-(void)setPrimaryNormalizedValue:(double)arg1 ;
-(double)secondaryNormalizedValue;
-(void)setSecondaryNormalizedValue:(double)arg1 ;
-(double)secondarySliderValue;
-(double)rawSliderValue;
-(void)setSecondarySliderValue:(double)arg1 ;
-(NSLayoutConstraint *)overlayTopConstraint;
-(void)setOverlayTopConstraint:(NSLayoutConstraint *)arg1 ;
@end
