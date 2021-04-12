/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFView.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@class SBAppSwitcherSettings, SBMedusaSettings, SBFView, UIView, NSString;

@interface SBAppSwitcherPageShadowView : SBFView <PTSettingsKeyObserver> {

	SBAppSwitcherSettings* _switcherSettings;
	SBMedusaSettings* _medusaSettings;
	SBFView* _diffuseShadowView;
	SBFView* _rimShadowView;
	double _rimShadowRadius;
	double _rimShadowOpacity;
	double _diffuseShadowRadius;
	double _diffuseShadowOpacity;
	CGSize _diffuseShadowOffset;
	double _diffuseShadowRadiusWhileTouched;
	double _diffuseShadowOpacityWhileTouched;
	CGSize _diffuseShadowOffsetWhileTouched;
	double _diffuseShadowRadiusWhileCursorHovered;
	double _diffuseShadowOpacityWhileCursorHovered;
	CGSize _diffuseShadowOffsetWhileCursorHovered;
	double _switcherCardScale;
	long long _style;
	unsigned long long _highlightType;
	double _shadowOffset;

}

@property (nonatomic,readonly) UIView * _diffuseShadowView; 
@property (nonatomic,readonly) UIView * _rimShadowView; 
@property (assign,nonatomic) double switcherCardScale;                      //@synthesize switcherCardScale=_switcherCardScale - In the implementation block
@property (assign,nonatomic) long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long highlightType;              //@synthesize highlightType=_highlightType - In the implementation block
@property (assign,nonatomic) double shadowOffset;                           //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShadowOffset:(double)arg1 ;
-(double)switcherCardScale;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)shadowOffset;
-(unsigned long long)highlightType;
-(UIView *)_rimShadowView;
-(UIView *)_diffuseShadowView;
-(void)_applyPrototypeSettingsToConstants;
-(void)setHighlightType:(unsigned long long)arg1 ;
-(void)setSwitcherCardScale:(double)arg1 ;
-(void)_updateShadowViews;
-(void)_updateShadowParameters;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)style;
@end

