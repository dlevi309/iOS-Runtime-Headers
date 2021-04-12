/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HULayeredContentEffect, HULayeredBackgroundEffect, UIVisualEffectView, UIView;

@interface HULayeredVisualEffectView : UIView {

	HULayeredContentEffect* _contentEffect;
	HULayeredBackgroundEffect* _backgroundEffect;
	double _contentEffectAlpha;
	double _backgroundEffectAlpha;
	double _cornerRadius;
	UIVisualEffectView* _contentEffectView;
	UIVisualEffectView* _backgroundEffectView;
	UIView* _backgroundFillView;

}

@property (nonatomic,retain) UIVisualEffectView * contentEffectView;                    //@synthesize contentEffectView=_contentEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                 //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,retain) UIView * backgroundFillView;                               //@synthesize backgroundFillView=_backgroundFillView - In the implementation block
@property (nonatomic,retain) HULayeredContentEffect * contentEffect;                    //@synthesize contentEffect=_contentEffect - In the implementation block
@property (nonatomic,retain) HULayeredBackgroundEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (assign,nonatomic) double contentEffectAlpha;                                 //@synthesize contentEffectAlpha=_contentEffectAlpha - In the implementation block
@property (assign,nonatomic) double backgroundEffectAlpha;                              //@synthesize backgroundEffectAlpha=_backgroundEffectAlpha - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) double cornerRadius;                                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)cornerRadius;
-(void)setBackgroundEffect:(HULayeredBackgroundEffect *)arg1 ;
-(void)_updateSubviewOrder;
-(void)_applyCornerRadius;
-(UIVisualEffectView *)contentEffectView;
-(void)setContentEffectView:(UIVisualEffectView *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)contentView;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(void)_updateBackgroundEffects;
-(HULayeredBackgroundEffect *)backgroundEffect;
-(HULayeredContentEffect *)contentEffect;
-(void)_updateContentEffects;
-(double)contentEffectAlpha;
-(UIView *)backgroundFillView;
-(void)setBackgroundFillView:(UIView *)arg1 ;
-(double)backgroundEffectAlpha;
-(id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2 ;
-(void)setContentEffect:(HULayeredContentEffect *)arg1 ;
-(void)setContentEffectAlpha:(double)arg1 ;
-(void)setBackgroundEffectAlpha:(double)arg1 ;
@end

