/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HULayeredContentEffect, HULayeredBackgroundEffect, UIVisualEffectView, UIView;

@interface HULayeredVisualEffectView : UIView {

	HULayeredContentEffect* _contentEffect;
	HULayeredBackgroundEffect* _backgroundEffect;
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
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic) double cornerRadius;                                       //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)cornerRadius;
-(HULayeredBackgroundEffect *)backgroundEffect;
-(void)setBackgroundEffect:(HULayeredBackgroundEffect *)arg1 ;
-(void)_updateSubviewOrder;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(void)setContentEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)contentEffectView;
-(void)_updateBackgroundEffects;
-(void)_applyCornerRadius;
-(HULayeredContentEffect *)contentEffect;
-(void)setContentEffect:(HULayeredContentEffect *)arg1 ;
-(void)_updateContentEffects;
-(UIView *)backgroundFillView;
-(void)setBackgroundFillView:(UIView *)arg1 ;
-(id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2 ;
@end

