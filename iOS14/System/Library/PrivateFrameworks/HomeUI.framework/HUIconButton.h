/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class HUIconView, UIVisualEffectView;

@interface HUIconButton : UIControl {

	HUIconView* _iconView;
	UIVisualEffectView* _backgroundEffectView;

}

@property (nonatomic,retain) HUIconView * iconView;                                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;              //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor; 
-(long long)contentMode;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)vibrancyEffect;
-(void)setSelected:(BOOL)arg1 ;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconSize:(unsigned long long)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)setIconTintColor:(id)arg1 ;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setVibrancyEffect:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateWithIconDescriptor:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundVisualEffect:(id)arg1 animated:(BOOL)arg2 ;
-(void)setBackgroundVisualEffectViewCornerRaduis:(double)arg1 ;
@end

