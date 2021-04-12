/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned long long _displayStyle;
	UIVisualEffectView* _effectView;
	HUIconContentView* _currentIconContentView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;                         //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) HUIconContentView * currentIconContentView;              //@synthesize currentIconContentView=_currentIconContentView - In the implementation block
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
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(UIVisualEffectView *)effectView;
-(id)_defaultVibrancyEffect;
-(unsigned long long)displayContext;
-(long long)contentMode;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(unsigned long long)iconSize;
-(void)setIconSize:(unsigned long long)arg1 ;
-(unsigned long long)displayStyle;
-(void)setDisplayContext:(unsigned long long)arg1 ;
-(id)contentContainerView;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)vibrancyEffect;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setDisableContinuousAnimation:(BOOL)arg1 ;
-(BOOL)disableContinuousAnimation;
-(void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 contentMode:(long long)arg2 ;
-(HUIconContentView *)currentIconContentView;
-(void)setCurrentIconContentView:(HUIconContentView *)arg1 ;
-(void)_updateVisualEffectStateForVibrancyEffectChange:(BOOL)arg1 ;
@end

