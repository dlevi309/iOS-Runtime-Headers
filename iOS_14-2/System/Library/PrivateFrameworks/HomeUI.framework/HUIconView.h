/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUIconContentViewDelegate.h>

@class UIVisualEffect, UIVisualEffectView, HUIconContentView, NSString;

@interface HUIconView : UIView <HUIconContentViewDelegate> {

	BOOL _disableContinuousAnimation;
	UIVisualEffect* _vibrancyEffect;
	long long _contentMode;
	unsigned long long _iconSize;
	unsigned long long _displayContext;
	double _vibrancyEffectAnimationDuration;
	unsigned long long _displayStyle;
	UIVisualEffectView* _effectView;
	HUIconContentView* _currentIconContentView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                         //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) HUIconContentView * currentIconContentView;              //@synthesize currentIconContentView=_currentIconContentView - In the implementation block
@property (assign,nonatomic) double vibrancyEffectAnimationDuration;                  //@synthesize vibrancyEffectAnimationDuration=_vibrancyEffectAnimationDuration - In the implementation block
@property (assign,nonatomic) long long contentMode;                                   //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) unsigned long long iconSize;                             //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) unsigned long long displayContext;                       //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) BOOL disableContinuousAnimation;                         //@synthesize disableContinuousAnimation=_disableContinuousAnimation - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                         //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
@property (nonatomic,readonly) unsigned long long displayStyle;                       //@synthesize displayStyle=_displayStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIVisualEffectView *)effectView;
-(long long)contentMode;
-(unsigned long long)displayContext;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)contentContainerView;
-(UIVisualEffect *)vibrancyEffect;
-(unsigned long long)iconSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setDisplayContext:(unsigned long long)arg1 ;
-(id)_defaultVibrancyEffect;
-(unsigned long long)displayStyle;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setDisableContinuousAnimation:(BOOL)arg1 ;
-(void)setVibrancyEffect:(id)arg1 animated:(BOOL)arg2 ;
-(double)vibrancyEffectAnimationDuration;
-(BOOL)disableContinuousAnimation;
-(void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 contentMode:(long long)arg2 ;
-(HUIconContentView *)currentIconContentView;
-(void)setCurrentIconContentView:(HUIconContentView *)arg1 ;
-(void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg1 ;
-(void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setVibrancyEffectAnimationDuration:(double)arg1 ;
@end

