/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlPushButtonViewProfile, NSString, UILongPressGestureRecognizer, UIImpactFeedbackGenerator, HUQuickControlRoundButton, HUIconView, UILabel;

@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	unsigned long long _reachabilityState;
	HUQuickControlPushButtonViewProfile* _profile;
	NSString* _descriptionText;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	HUQuickControlRoundButton* _roundButton;
	HUIconView* _decorationIconView;
	UILabel* _buttonLabel;
	unsigned long long _controlState;

}

@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                         //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                     //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) HUQuickControlRoundButton * roundButton;                                           //@synthesize roundButton=_roundButton - In the implementation block
@property (nonatomic,retain) HUIconView * decorationIconView;                                                   //@synthesize decorationIconView=_decorationIconView - In the implementation block
@property (nonatomic,retain) UILabel * buttonLabel;                                                             //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                                                   //@synthesize controlState=_controlState - In the implementation block
@property (nonatomic,copy) HUQuickControlPushButtonViewProfile * profile;                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlPushButtonViewProfile *)profile;
-(void)setProfile:(HUQuickControlPushButtonViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(unsigned long long)controlState;
-(void)setControlState:(unsigned long long)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)handleTap:(id)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(UILabel *)buttonLabel;
-(NSString *)descriptionText;
-(void)setButtonLabel:(UILabel *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)_updateUI;
-(void)_contentSizeCategoryDidChange;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setRoundButton:(HUQuickControlRoundButton *)arg1 ;
-(HUQuickControlRoundButton *)roundButton;
-(void)setDecorationIconView:(HUIconView *)arg1 ;
-(HUIconView *)decorationIconView;
-(void)_animateToEnlargeView;
-(void)_actuateTapticFeedbackWithIntensity:(double)arg1 ;
-(void)_animateToShrinkView;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg1 ;
@end

