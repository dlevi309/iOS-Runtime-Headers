/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlViewProfile, HUIconView, HUCircleView, UIColor, NSString;

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView> {

	BOOL _open;
	BOOL _userInteractionActive;
	id _value;
	HUQuickControlViewProfile* _profile;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	unsigned long long _reachabilityState;
	HUIconView* _iconView;
	HUCircleView* _circleView;

}

@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundOnColor; 
@property (nonatomic,readonly) UIColor * backgroundOffColor; 
@property (nonatomic,retain) HUIconView * iconView;                                                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUCircleView * circleView;                                                         //@synthesize circleView=_circleView - In the implementation block
@property (assign,nonatomic) BOOL open;                                                                         //@synthesize open=_open - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value;                                                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) HUQuickControlViewProfile * profile;                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
+(id)intrinsicSizeDescriptor;
-(BOOL)open;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(void)_updateAppearance;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)setOpen:(BOOL)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)_setupIconView;
-(HUCircleView *)circleView;
-(void)setCircleView:(HUCircleView *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)_updateIconDescriptor;
-(UIColor *)backgroundOnColor;
-(UIColor *)backgroundOffColor;
@end

