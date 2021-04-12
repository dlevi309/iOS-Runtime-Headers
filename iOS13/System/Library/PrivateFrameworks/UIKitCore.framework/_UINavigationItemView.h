/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)title;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)font;
-(void)_setFont:(id)arg1 ;
-(void)_updateLabelColor;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(void)_resetTitleSize;
-(void)_setLineBreakMode:(long long)arg1 ;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)navigationItem;
-(CGRect)_labelFrame;
-(id)_defaultFont;
-(CGSize)_titleSize;
-(void)_setFadingInFromCustomAlpha:(BOOL)arg1 ;
-(BOOL)_isFadingInFromCustomAlpha;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(double)_titleYAdjustmentCustomization;
-(void)_updateLabel;
-(void)_updateLabelContents;
-(void)_cleanUpCrossView;
-(void)_prepareCrossViewsForNewSize:(CGSize)arg1 ;
-(void)_crossFadeHiddingButton:(BOOL)arg1 ;
@end

