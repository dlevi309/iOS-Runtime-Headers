/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class BSUIEmojiLabelView, UIView, CCUIMenuModuleItem, MTVisualStylingProvider, NSString;

@interface CCUIMenuModuleItemView : UIControl <UIPointerInteractionDelegate> {

	BSUIEmojiLabelView* _titleLabel;
	BSUIEmojiLabelView* _subtitleLabel;
	UIView* _separatorView;
	UIView* _highlightedBackgroundView;
	UIView* _leadingView;
	UIView* _trailingView;
	CCUIMenuModuleItem* _menuItem;
	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _separatorVisible;
	BOOL _useTallLayout;
	BOOL _useTrailingCheckmarkLayout;
	BOOL _useTrailingInset;
	BOOL _shouldLimitContentSizeCategory;
	double _preferredMaxLayoutWidth;
	unsigned long long _indentation;

}

@property (assign,nonatomic) BOOL separatorVisible;                            //@synthesize separatorVisible=_separatorVisible - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                   //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL useTallLayout;                               //@synthesize useTallLayout=_useTallLayout - In the implementation block
@property (assign,nonatomic) BOOL useTrailingCheckmarkLayout;                  //@synthesize useTrailingCheckmarkLayout=_useTrailingCheckmarkLayout - In the implementation block
@property (assign,nonatomic) BOOL useTrailingInset;                            //@synthesize useTrailingInset=_useTrailingInset - In the implementation block
@property (assign,nonatomic) unsigned long long indentation;                   //@synthesize indentation=_indentation - In the implementation block
@property (nonatomic,retain) CCUIMenuModuleItem * menuItem;                    //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) UIView * leadingView;                             //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,retain) UIView * trailingView;                            //@synthesize trailingView=_trailingView - In the implementation block
@property (assign,nonatomic) BOOL shouldLimitContentSizeCategory;              //@synthesize shouldLimitContentSizeCategory=_shouldLimitContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3 shouldLimitContentSizeCategory:(BOOL)arg4 ;
+(id)_subtitleFontForContentSizeCategory:(id)arg1 shouldLimitContentSizeCategory:(BOOL)arg2 ;
+(id)_titleFontForContentSizeCategory:(id)arg1 shouldLimitContentSizeCategory:(BOOL)arg2 ;
+(BOOL)_shouldLimitContentSizeCategory:(id)arg1 forceLimitContentSizeCategory:(BOOL)arg2 ;
+(id)_titleFontForContentSizeCategory:(id)arg1 ;
+(double)defaultMenuItemHeightForContentSizeCategory:(id)arg1 ;
+(id)_subtitleFontForContentSizeCategory:(id)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setShouldLimitContentSizeCategory:(BOOL)arg1 ;
-(double)_separatorHeight;
-(double)_labelTrailingInset;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setMenuItem:(CCUIMenuModuleItem *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)subtitle;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(BOOL)shouldLimitContentSizeCategory;
-(id)_titleFont;
-(unsigned long long)indentation;
-(BOOL)useTallLayout;
-(double)_titleBaselineToTop;
-(void)setSelected:(BOOL)arg1 ;
-(void)setUseTallLayout:(BOOL)arg1 ;
-(void)_setSubtitle:(id)arg1 ;
-(BOOL)_shouldHorizontallyCenterText;
-(id)initWithMenuItem:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(UIView *)trailingView;
-(UIView *)leadingView;
-(double)_textHeightForEmojiLabel:(id)arg1 width:(double)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)preferredMaxLayoutWidth;
-(NSDirectionalEdgeInsets)_labelInsets;
-(BOOL)separatorVisible;
-(CCUIMenuModuleItem *)menuItem;
-(unsigned long long)hash;
-(double)_titleBaselineToBottom;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setLeadingView:(UIView *)arg1 ;
-(double)_labelLeadingInset;
-(BOOL)useTrailingInset;
-(void)_layoutTrailingCustomViews;
-(void)_updateForStateChange;
-(void)updateSubviewsAlpha:(double)arg1 ;
-(void)setUseTrailingInset:(BOOL)arg1 ;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_stopAutomaticallyUpdatingView:(id)arg1 recursivelyIfNeeded:(BOOL)arg2 ;
-(void)setTrailingView:(UIView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setUseTrailingCheckmarkLayout:(BOOL)arg1 ;
-(id)_subtitleFont;
-(BOOL)useTrailingCheckmarkLayout;
-(double)_trailingWidthForCustomViews;
-(id)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)_layoutLeadingCustomView;
-(void)setIndentation:(unsigned long long)arg1 ;
-(void)_updateVisualStyleOfView:(id)arg1 withStyle:(long long)arg2 recursivelyIfNeeded:(BOOL)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

