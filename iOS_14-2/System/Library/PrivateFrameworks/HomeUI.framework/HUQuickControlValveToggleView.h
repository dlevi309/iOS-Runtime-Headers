/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) id value;                                                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) HUQuickControlViewProfile * profile;                                                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)intrinsicSizeDescriptor;
-(void)setProfile:(HUQuickControlViewProfile *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)open;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)updateConstraints;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(HUQuickControlViewProfile *)profile;
-(void)_updateAppearance;
-(id)value;
-(BOOL)isUserInteractionActive;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(HUCircleView *)circleView;
-(void)setCircleView:(HUCircleView *)arg1 ;
-(void)_setupIconView;
-(void)_updateIconDescriptor;
-(UIColor *)backgroundOnColor;
-(UIColor *)backgroundOffColor;
@end

