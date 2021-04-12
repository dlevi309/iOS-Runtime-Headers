/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUIconContentView.h>

@class NSString, UIVisualEffectView, HUAnimatableFilterImageView;

@interface HULightbulbIconContentView : HUIconContentView {

	BOOL _on;
	double _brightness;
	NSString* _lastUsedIconIdentifier;
	UIVisualEffectView* _vibrantBaseEffectView;
	UIVisualEffectView* _vibrantOutlineEffectView;
	HUAnimatableFilterImageView* _vibrantBulbView;
	HUAnimatableFilterImageView* _coloredBulbView;
	HUAnimatableFilterImageView* _vibrantBaseView;
	HUAnimatableFilterImageView* _coloredBaseView;

}

@property (assign,nonatomic) double brightness;                                          //@synthesize brightness=_brightness - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                                        //@synthesize on=_on - In the implementation block
@property (nonatomic,copy) NSString * lastUsedIconIdentifier;                            //@synthesize lastUsedIconIdentifier=_lastUsedIconIdentifier - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantBaseEffectView;                 //@synthesize vibrantBaseEffectView=_vibrantBaseEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantOutlineEffectView;              //@synthesize vibrantOutlineEffectView=_vibrantOutlineEffectView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * vibrantBulbView;              //@synthesize vibrantBulbView=_vibrantBulbView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * coloredBulbView;              //@synthesize coloredBulbView=_coloredBulbView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * vibrantBaseView;              //@synthesize vibrantBaseView=_vibrantBaseView - In the implementation block
@property (nonatomic,retain) HUAnimatableFilterImageView * coloredBaseView;              //@synthesize coloredBaseView=_coloredBaseView - In the implementation block
-(double)brightness;
-(void)setBrightness:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)_updateImages;
-(void)setIconSize:(unsigned long long)arg1 ;
-(void)setDisplayContext:(unsigned long long)arg1 ;
-(void)setVibrancyEffect:(id)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setVibrantBaseEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantBaseEffectView;
-(void)setVibrantOutlineEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)vibrantOutlineEffectView;
-(void)setVibrantBaseView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)vibrantBaseView;
-(void)setVibrantBulbView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)vibrantBulbView;
-(void)setColoredBaseView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)coloredBaseView;
-(void)setColoredBulbView:(HUAnimatableFilterImageView *)arg1 ;
-(HUAnimatableFilterImageView *)coloredBulbView;
-(id)_allImageViews;
-(void)_updateDisplayContextState;
-(void)_updateBulbState;
-(void)_updateVisualEffect;
-(long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2 ;
-(NSString *)lastUsedIconIdentifier;
-(void)setLastUsedIconIdentifier:(NSString *)arg1 ;
@end

