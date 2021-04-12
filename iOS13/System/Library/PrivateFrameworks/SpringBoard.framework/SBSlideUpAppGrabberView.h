/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_SBFVibrantView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _SBFVibrantSettings, _UILegibilitySettings, UIView, SBUILegibilityView, SBSaturatedIconView, UIImage, NSString;

@interface SBSlideUpAppGrabberView : UIView <_SBFVibrantView, SBUILegibility> {

	double _strength;
	_UILegibilitySettings* _legibilitySettings;
	UIEdgeInsets _hitTestEdgeInsets;
	UIView* _tintView;
	UIView* _backgroundView;
	SBUILegibilityView* _legibilityView;
	SBSaturatedIconView* _saturatedIconView;
	UIImage* _grabberImage;
	BOOL _vibrancyAllowed;
	_SBFVibrantSettings* _vibrantSettings;

}

@property (nonatomic,readonly) UIEdgeInsets hitTestEdgeInsets;                           //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,getter=isVibrancyAllowed,nonatomic) BOOL vibrancyAllowed;              //@synthesize vibrancyAllowed=_vibrancyAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                            //@synthesize strength=_strength - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(id)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(UIEdgeInsets)hitTestEdgeInsets;
-(BOOL)_shouldUseVibrancy;
-(BOOL)isVibrancyAllowed;
-(void)setVibrancyAllowed:(BOOL)arg1 ;
-(void)setAppStyleGrabberImage:(id)arg1 ;
-(id)_lazyLegibilityView;
-(id)initWithAdditionalTopPadding:(BOOL)arg1 invertVerticalInsets:(BOOL)arg2 ;
-(void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1 ;
@end

