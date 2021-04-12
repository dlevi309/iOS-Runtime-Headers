/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>

@class UIView, SBWallpaperEffectView, SBHomeGrabberView, CAShapeLayer, UIViewFloatAnimatableProperty, NSString;

@interface SBReachabilityBackgroundView : UIView <SBHomeGrabberDelegate> {

	UIView* _wallpaperContainerView;
	SBWallpaperEffectView* _topWallpaperEffectView;
	SBWallpaperEffectView* _bottomWallpaperEffectView;
	UIView* _hitTestBlockerView;
	long long _wallpaperVariant;
	SBHomeGrabberView* _homeGrabberView;
	CAShapeLayer* _chevronLayer;
	UIViewFloatAnimatableProperty* _chevronShapeAnimatableProperty;
	double _containerViewYOffset;
	double _homeGrabberAdditionalOffset;

}

@property (assign,nonatomic) long long wallpaperVariant;                      //@synthesize wallpaperVariant=_wallpaperVariant - In the implementation block
@property (assign,nonatomic) double containerViewYOffset;                     //@synthesize containerViewYOffset=_containerViewYOffset - In the implementation block
@property (assign,nonatomic) double homeGrabberAdditionalOffset;              //@synthesize homeGrabberAdditionalOffset=_homeGrabberAdditionalOffset - In the implementation block
@property (assign,nonatomic) double homeGrabberAlpha; 
@property (assign,nonatomic) double chevronAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(double)chevronAlpha;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setChevronAlpha:(double)arg1 ;
-(double)_displayCornerRadius;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(void)setWallpaperVariant:(long long)arg1 ;
-(void)setContainerViewYOffset:(double)arg1 ;
-(void)setHomeGrabberAdditionalOffset:(double)arg1 ;
-(void)setHomeGrabberAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperVariant:(long long)arg2 ;
-(long long)wallpaperVariant;
-(void)_setupHomeGrabberView;
-(void)_updateWallpaperEffectViewAnimated:(BOOL)arg1 ;
-(void)_setupChevron;
-(void)_setupHitTestBlockerView;
-(id)_newWallpaperEffectViewForVariant:(long long)arg1 ;
-(void)_setupCornerContentsImageForWallpaperEffectView:(id)arg1 ;
-(void)_updateChevronPathForUpFraction:(double)arg1 ;
-(double)homeGrabberAlpha;
-(double)containerViewYOffset;
-(double)homeGrabberAdditionalOffset;
@end

