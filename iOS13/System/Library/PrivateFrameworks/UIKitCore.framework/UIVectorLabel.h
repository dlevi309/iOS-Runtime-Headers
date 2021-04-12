/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UILabelContentAttributesProvider.h>

@class _UILabelContent, NSMutableDictionary, UIColor, _UIVectorTextLayout, NSString, UIFont, NSAttributedString;

@interface UIVectorLabel : UIView <_UILabelContentAttributesProvider> {

	_UILabelContent* _content;
	NSMutableDictionary* _defaultAttributes;
	UIColor* _textColor;
	_UIVectorTextLayout* _sizingLayout;
	_UIVectorTextLayout* _visualLayout;
	SCD_Struct_UI30 _labelFlags;
	double _multilineContextWidth;
	unsigned long long _numberOfLines;
	double _preferredMaxLayoutWidth;

}

@property (setter=_setContent:,getter=_content,nonatomic,retain) _UILabelContent * _content; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long numberOfLines;                                            //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (setter=_setAttributedText:,nonatomic,copy) NSAttributedString * _attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
+(id)_defaultFont;
+(id)_defaultAttributes;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(unsigned long long)numberOfLines;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_generateDeferredAnimations:(id)arg1 ;
-(NSAttributedString *)_attributedText;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(double)_baselineOffsetFromBottom;
-(UIColor *)textColor;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(double)_firstBaselineOffsetFromTop;
-(id)_defaultAttributes;
-(_UILabelContent *)_content;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(double)_preferredMaxLayoutWidth;
-(double)_multilineContextWidth;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(void)_setContent:(id)arg1 ;
-(id)_defaultAttributesForUpgradingString:(id)arg1 ;
-(void)_mergeDefaultAttributesForDowngradingContent:(id)arg1 ;
-(double)preferredMaxLayoutWidth;
-(void)_setNeedsUpdateLayerIfNeeded;
-(id)_materializedAttributedText;
-(void)_ensureSizingLayout;
-(id)_layoutParametersWithinSize:(CGSize)arg1 forSizing:(BOOL)arg2 ;
-(id)_attributedTextCompatibleForSizing;
-(void)_ensureVisualLayout;
-(id)_labelLayer;
-(void)_setAttributedText:(id)arg1 ;
@end

