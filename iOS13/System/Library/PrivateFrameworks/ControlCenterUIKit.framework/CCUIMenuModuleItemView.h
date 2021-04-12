/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class BSUIEmojiLabelView, UIView, CCUIMenuModuleItem, MTVisualStylingProvider, NSString;

@interface CCUIMenuModuleItemView : UIControl <_UICursorInteractionDelegate> {

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
	double _preferredMaxLayoutWidth;
	unsigned long long _indentation;

}

@property (assign,nonatomic) BOOL separatorVisible;                        //@synthesize separatorVisible=_separatorVisible - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;               //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,nonatomic) BOOL useTallLayout;                           //@synthesize useTallLayout=_useTallLayout - In the implementation block
@property (assign,nonatomic) BOOL useTrailingCheckmarkLayout;              //@synthesize useTrailingCheckmarkLayout=_useTrailingCheckmarkLayout - In the implementation block
@property (assign,nonatomic) BOOL useTrailingInset;                        //@synthesize useTrailingInset=_useTrailingInset - In the implementation block
@property (assign,nonatomic) unsigned long long indentation;               //@synthesize indentation=_indentation - In the implementation block
@property (nonatomic,retain) CCUIMenuModuleItem * menuItem;                //@synthesize menuItem=_menuItem - In the implementation block
@property (nonatomic,retain) UIView * leadingView;                         //@synthesize leadingView=_leadingView - In the implementation block
@property (nonatomic,retain) UIView * trailingView;                        //@synthesize trailingView=_trailingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultMenuItemHeightForContentSizeCategory:(id)arg1 useTallLayout:(BOOL)arg2 ;
+(BOOL)_shouldLimitContentSizeCategory:(id)arg1 ;
+(id)_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3 ;
+(id)_titleFontForContentSizeCategory:(id)arg1 ;
+(id)_subtitleFontForContentSizeCategory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setEnabled:(BOOL)arg1 ;
-(id)title;
-(void)_setSubtitle:(id)arg1 ;
-(id)subtitle;
-(CGSize)intrinsicContentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)_titleFont;
-(void)_setTitle:(id)arg1 ;
-(void)didMoveToWindow;
-(void)setSelected:(BOOL)arg1 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(double)_separatorHeight;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)_subtitleFont;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(UIView *)trailingView;
-(double)preferredMaxLayoutWidth;
-(unsigned long long)indentation;
-(void)_contentSizeCategoryDidChange;
-(UIView *)leadingView;
-(void)setLeadingView:(UIView *)arg1 ;
-(void)setTrailingView:(UIView *)arg1 ;
-(void)_updateForStateChange;
-(CCUIMenuModuleItem *)menuItem;
-(id)initWithMenuItem:(id)arg1 ;
-(void)setIndentation:(unsigned long long)arg1 ;
-(void)setUseTrailingCheckmarkLayout:(BOOL)arg1 ;
-(void)setUseTrailingInset:(BOOL)arg1 ;
-(void)updateSubviewsAlpha:(double)arg1 ;
-(void)setMenuItem:(CCUIMenuModuleItem *)arg1 ;
-(BOOL)useTrailingCheckmarkLayout;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(void)setUseTallLayout:(BOOL)arg1 ;
-(BOOL)useTallLayout;
-(BOOL)useTrailingInset;
-(void)_stopAutomaticallyUpdatingView:(id)arg1 recursivelyIfNeeded:(BOOL)arg2 ;
-(void)_updateVisualStyleOfView:(id)arg1 withStyle:(long long)arg2 recursivelyIfNeeded:(BOOL)arg3 ;
-(void)_layoutLeadingCustomView;
-(void)_layoutTrailingCustomViews;
-(NSDirectionalEdgeInsets)_labelInsets;
-(double)_textHeightForEmojiLabel:(id)arg1 width:(double)arg2 ;
-(double)_titleBaselineToTop;
-(double)_titleBaselineToBottom;
-(BOOL)_shouldHorizontallyCenterText;
-(BOOL)_shouldUseTallLayout;
-(double)_trailingWidthForCustomViews;
-(double)_labelLeadingInset;
-(double)_labelTrailingInset;
-(BOOL)separatorVisible;
@end

