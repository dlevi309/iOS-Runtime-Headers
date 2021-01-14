/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UILabelContent, NSMutableDictionary, UIColor, _UIVectorTextLayout, NSString, UIFont, NSAttributedString;

@interface UIVectorLabel : UIView {

	_UILabelContent* _content;
	NSMutableDictionary* _defaultAttributes;
	UIColor* _textColor;
	_UIVectorTextLayout* _sizingLayout;
	_UIVectorTextLayout* _visualLayout;
	SCD_Struct_UI34 _labelFlags;
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
+(id)_defaultFont;
+(id)_defaultAttributes;
+(Class)layerClass;
-(void)_setTextColor:(id)arg1 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(_UILabelContent *)_content;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)setText:(NSString *)arg1 ;
-(double)_baselineOffsetFromBottom;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)_defaultAttributes;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)preferredMaxLayoutWidth;
-(NSString *)text;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(id)_labelLayer;
-(void)_setContent:(id)arg1 ;
-(NSAttributedString *)_attributedText;
-(void)_setNeedsUpdateLayerIfNeeded;
-(id)_materializedAttributedText;
-(void)_ensureSizingLayout;
-(id)_layoutParametersWithinSize:(CGSize)arg1 forSizing:(BOOL)arg2 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)_ensureVisualLayout;
-(id)_attributedTextCompatibleForSizing;
-(void)_generateDeferredAnimations:(id)arg1 ;
-(void)_mergeDefaultAttributesForDowngradingContent:(id)arg1 ;
-(void)_setAttributedText:(id)arg1 ;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(unsigned long long)numberOfLines;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(double)_firstBaselineOffsetFromTop;
-(double)_preferredMaxLayoutWidth;
-(UIFont *)font;
-(double)_multilineContextWidth;
@end

