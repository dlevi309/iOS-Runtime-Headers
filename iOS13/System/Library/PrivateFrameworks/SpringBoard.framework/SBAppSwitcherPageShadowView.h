/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	double _diffuseShadowRadius;
	double _diffuseShadowOpacity;
	CGSize _diffuseShadowOffset;
	double _rimShadowRadius;
	double _rimShadowOpacity;
	double _highlightedDiffuseShadowRadius;
	double _highlightedDiffuseShadowOpacity;
	CGSize _highlightedDiffuseShadowOffset;
	BOOL _highlighted;
	double _switcherCardScale;
	long long _style;
	double _shadowOffset;

}

@property (nonatomic,readonly) UIView * _diffuseShadowView; 
@property (nonatomic,readonly) UIView * _rimShadowView; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double switcherCardScale;                           //@synthesize switcherCardScale=_switcherCardScale - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double shadowOffset;                                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(double)shadowOffset;
-(void)setShadowOffset:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)_diffuseShadowView;
-(UIView *)_rimShadowView;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_updateShadowViews;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_applyPrototypeSettingsToConstants;
-(void)_updateShadowParameters;
-(void)setSwitcherCardScale:(double)arg1 ;
-(double)switcherCardScale;
@end

