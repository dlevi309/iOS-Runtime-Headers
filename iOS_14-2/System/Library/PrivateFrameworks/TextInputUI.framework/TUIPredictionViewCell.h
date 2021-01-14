/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class TIKeyboardCandidate, UIKBRenderConfig, UIScrollView, UIColor, UIView, UIImageView, UILabel, UIMorphingLabel, UIImage, NSString;

@interface TUIPredictionViewCell : UIView <UIScrollViewDelegate> {

	BOOL _highlighted;
	BOOL _labelTruncated;
	double _highlightMargin;
	unsigned long long _visibleSeparatorEdges;
	double _separatorMargin;
	TIKeyboardCandidate* _candidate;
	UIKBRenderConfig* _renderConfig;
	UIScrollView* _maskingScrollView;
	UIColor* _textColor;
	UIColor* _imageTintColor;
	UIView* _backgroundView;
	UIColor* _backgroundViewHighlightColor;
	UIView* _leftSeparatorView;
	UIView* _rightSeparatorView;
	UIImageView* _imageView;
	UILabel* _normalLabel;
	UIMorphingLabel* _morphingLabel;
	UIView* _secureCandidateLabel;

}

@property (nonatomic,retain) UIView * backgroundView;                                  //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundViewHighlightColor;                   //@synthesize backgroundViewHighlightColor=_backgroundViewHighlightColor - In the implementation block
@property (nonatomic,retain) UIView * leftSeparatorView;                               //@synthesize leftSeparatorView=_leftSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * rightSeparatorView;                              //@synthesize rightSeparatorView=_rightSeparatorView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,getter=isLabelTruncated,nonatomic) BOOL labelTruncated;              //@synthesize labelTruncated=_labelTruncated - In the implementation block
@property (nonatomic,retain) UILabel * normalLabel;                                    //@synthesize normalLabel=_normalLabel - In the implementation block
@property (nonatomic,retain) UIMorphingLabel * morphingLabel;                          //@synthesize morphingLabel=_morphingLabel - In the implementation block
@property (nonatomic,retain) UIView * secureCandidateLabel;                            //@synthesize secureCandidateLabel=_secureCandidateLabel - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                         //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double highlightMargin;                                   //@synthesize highlightMargin=_highlightMargin - In the implementation block
@property (assign,nonatomic) unsigned long long visibleSeparatorEdges;                 //@synthesize visibleSeparatorEdges=_visibleSeparatorEdges - In the implementation block
@property (assign,nonatomic) double separatorMargin;                                   //@synthesize separatorMargin=_separatorMargin - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;                          //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) long long layoutType; 
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                          //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIScrollView * maskingScrollView;                         //@synthesize maskingScrollView=_maskingScrollView - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * imageTintColor;                                 //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellHighlightColorForDarkStyle:(BOOL)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIView *)secureCandidateLabel;
-(long long)layoutType;
-(BOOL)_isPad;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(void)setImage:(UIImage *)arg1 ;
-(UIColor *)imageTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)normalLabel;
-(void)setLabelTruncated:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)highlighted;
-(void)setVisibleSeparatorEdges:(unsigned long long)arg1 ;
-(void)setCandidate:(id)arg1 animated:(BOOL)arg2 ;
-(id)_displayLabelForCandidate:(id)arg1 ;
-(BOOL)isLabelTruncated;
-(BOOL)_isEmojiCandidate:(id)arg1 ;
-(void)setHighlightMargin:(double)arg1 ;
-(BOOL)candidateRequiresTruncationForBoundingWidth:(double)arg1 ;
-(unsigned long long)visibleSeparatorEdges;
-(UIKBRenderConfig *)renderConfig;
-(UIImage *)image;
-(UIView *)leftSeparatorView;
-(UIColor *)backgroundViewHighlightColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)displayTextAttributesForMultiline:(BOOL)arg1 ;
-(double)separatorMargin;
-(void)layoutSubviews;
-(void)setSecureCandidateLabel:(UIView *)arg1 ;
-(UIMorphingLabel *)morphingLabel;
-(void)setImageTintColor:(UIColor *)arg1 ;
-(void)_updateColorsForRenderConfig:(id)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_renderConfigUsesDarkStyle:(id)arg1 ;
-(void)setLeftSeparatorView:(UIView *)arg1 ;
-(void)setRightSeparatorView:(UIView *)arg1 ;
-(void)setMaskingScrollView:(UIScrollView *)arg1 ;
-(BOOL)_isSecureCandidate:(id)arg1 ;
-(id)headerTextAttributes;
-(id)centerTruncatedStringForString:(id)arg1 withAttributes:(id)arg2 fittingWidth:(double)arg3 ;
-(UIView *)rightSeparatorView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)labelViewForCandidate:(id)arg1 ;
-(void)setMorphingLabel:(UIMorphingLabel *)arg1 ;
-(void)setNormalLabel:(UILabel *)arg1 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(id)currentTextSuggestion;
-(CGSize)labelTextSizeForCandidate:(id)arg1 ;
-(id)attributedStringRepresentationOfCandidate:(id)arg1 ;
-(double)highlightMargin;
-(TIKeyboardCandidate *)candidate;
-(void)setSeparatorMargin:(double)arg1 ;
-(UIScrollView *)maskingScrollView;
-(void)setBackgroundViewHighlightColor:(UIColor *)arg1 ;
-(BOOL)useAutofillStyle;
-(BOOL)_usesMorphingLabelForCandidate:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

