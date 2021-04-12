/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIMorphingLabelGlyphSet, NSMutableArray, UIView, _UIViewAnimationAttributes, NSString, UIFont, UIColor;

@interface UIMorphingLabel : UIView {

	UIMorphingLabelGlyphSet* _srcGlyphSet;
	UIMorphingLabelGlyphSet* _dstGlyphSet;
	NSMutableArray* _hiddenGlyphViews;
	UIView* _colorView;
	unsigned long long _alignmentSrc[100];
	unsigned long long _alignmentDst[100];
	BOOL _alignmentIsEqual[100];
	unsigned long long _alignmentSize;
	double _alignmentDelays[100];
	_UIViewAnimationAttributes* _textAnimationAttributes;
	_UIViewAnimationAttributes* _textColorAnimationAttributes;
	double _lastUpdateTime;
	double _slowdown;
	double _rippleFactor;
	double _scaleFactor;
	BOOL _isDoingFastAnimation;
	BOOL _textDidChange;
	BOOL _textColorDidChange;
	BOOL _suppressLayoutSubviews;
	BOOL _enableAnimation;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _textAlignment;
	double _initialScale;
	double _glyphScaleAnimationSpeed;
	double _rippleDuration;
	CGRect _visibleRect;

}

@property (nonatomic,copy) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;                      //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) BOOL suppressLayoutSubviews;                  //@synthesize suppressLayoutSubviews=_suppressLayoutSubviews - In the implementation block
@property (assign,nonatomic) BOOL enableAnimation;                         //@synthesize enableAnimation=_enableAnimation - In the implementation block
@property (assign,nonatomic) double initialScale;                          //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) double glyphScaleAnimationSpeed;              //@synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed - In the implementation block
@property (assign,nonatomic) double rippleDuration;                        //@synthesize rippleDuration=_rippleDuration - In the implementation block
+(id)preferredFontWithSize:(double)arg1 ;
-(void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(UIColor *)textColor;
-(void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)animateGlyph:(id)arg1 toPosition:(CGPoint)arg2 delay:(double)arg3 ;
-(CGRect)visibleRect;
-(BOOL)_isRTL;
-(void)setRippleDuration:(double)arg1 ;
-(void)setInitialScale:(double)arg1 ;
-(void)setSuppressLayoutSubviews:(BOOL)arg1 ;
-(void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)canFitText:(id)arg1 ;
-(unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(NSRange)arg2 toGlyphsInRange:(NSRange)arg3 ;
-(id)attributedString;
-(void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3 ;
-(void)setText:(NSString *)arg1 ;
-(void)initAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)requiredWidthForText:(id)arg1 ;
-(long long)textAlignment;
-(void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)baseInit;
-(void)layoutSubviews;
-(void)hideGlyph:(id)arg1 ;
-(id)uniqueStringWithPrefix:(id)arg1 ;
-(BOOL)enableAnimation;
-(void)animateAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)animateTextColor;
-(NSString *)text;
-(void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4 ;
-(id)glyphViewWithImage:(id)arg1 isColorGlyph:(BOOL)arg2 ;
-(id)attributedStringForText:(id)arg1 ;
-(void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)setGlyphScaleAnimationSpeed:(double)arg1 ;
-(double)alphaForFrame:(CGRect)arg1 ;
-(void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)currentMediaTime;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnableAnimation:(BOOL)arg1 ;
-(double)rippleDuration;
-(void)animateGlyphs;
-(BOOL)suppressLayoutSubviews;
-(double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)contentSizeDidChange:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4 ;
-(double)initialScale;
-(void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(double)flushAmount;
-(double)glyphScaleAnimationSpeed;
-(void)animateGlyphsInRange:(NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4 ;
-(void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2 ;
-(void)dealloc;
-(UIFont *)font;
-(double)_rippleDurationForEndInsertion:(BOOL)arg1 ;
-(NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1 ;
-(void)calculateGlyphAlignment;
@end

