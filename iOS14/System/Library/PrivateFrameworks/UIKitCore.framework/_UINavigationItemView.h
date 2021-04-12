/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UINavigationItem, UIView, UILabel;

@interface _UINavigationItemView : UIView {

	UINavigationItem* _item;
	CGSize _titleSize;
	UIView* _topCrossView;
	UIView* _bottomCrossView;
	BOOL _isCrossFading;
	BOOL _customFontSet;
	UILabel* _label;
	BOOL __isFadingInFromCustomAlpha;

}

@property (assign,setter=_setFadingInFromCustomAlpha:,nonatomic) BOOL _isFadingInFromCustomAlpha;              //@synthesize _isFadingInFromCustomAlpha=__isFadingInFromCustomAlpha - In the implementation block
-(id)navigationItem;
-(double)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(id)_defaultFont;
-(void)setFont:(id)arg1 ;
-(void)_setFont:(id)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)_titleSize;
-(CGRect)_labelFrame;
-(void)_setFadingInFromCustomAlpha:(BOOL)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(void)_updateLabelColor;
-(BOOL)_isFadingInFromCustomAlpha;
-(void)_setLineBreakMode:(long long)arg1 ;
-(void)_updateLabelContents;
-(void)_cleanUpCrossView;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(BOOL)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(void)_resetTitleSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(id)title;
-(id)font;
@end

