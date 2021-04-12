/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double strength;                                            //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setBackgroundView:(id)arg1 ;
-(BOOL)_shouldUseVibrancy;
-(BOOL)isVibrancyAllowed;
-(void)setVibrancyAllowed:(BOOL)arg1 ;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setAppStyleGrabberImage:(id)arg1 ;
-(id)_lazyLegibilityView;
-(id)initWithAdditionalTopPadding:(BOOL)arg1 invertVerticalInsets:(BOOL)arg2 ;
-(void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1 ;
@end

