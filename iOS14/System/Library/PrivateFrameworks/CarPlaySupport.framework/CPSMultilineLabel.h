/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CPSMultilineLabelDelegate;
@class NSString, UIColor, UIFont, UILayoutGuide, CPSMultilineLabelConfig, NSArray, UIView, NSLayoutConstraint, NSAttributedString;

@interface CPSMultilineLabel : UIView {

	BOOL _prefersFewerLines;
	BOOL _debug;
	id<CPSMultilineLabelDelegate> _delegate;
	NSString* _text;
	UIColor* _textColor;
	double _lineSpacing;
	UIFont* _font;
	double _minimumScaleFactor;
	double _minimumFontSize;
	unsigned long long _numberOfLines;
	long long _textAlignment;
	UILayoutGuide* _textLayoutGuide;
	CPSMultilineLabelConfig* _currentConfiguration;
	NSArray* _baselineOffsets;
	UIView* _baselineView;
	NSLayoutConstraint* _baselineViewTopAnchor;
	NSLayoutConstraint* _baselineViewBottomAnchor;
	NSArray* _leadingOffsets;
	NSLayoutConstraint* _textLayoutGuideLeadingConstraint;
	NSLayoutConstraint* _textLayoutGuideTrailingConstraint;
	UIView* _debugFirstBaselineView;
	UIView* _debugLastBaselineView;

}

@property (assign,nonatomic) BOOL debug;                                                          //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) NSArray * baselineOffsets;                                           //@synthesize baselineOffsets=_baselineOffsets - In the implementation block
@property (nonatomic,retain) UIView * baselineView;                                               //@synthesize baselineView=_baselineView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * baselineViewTopAnchor;                          //@synthesize baselineViewTopAnchor=_baselineViewTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * baselineViewBottomAnchor;                       //@synthesize baselineViewBottomAnchor=_baselineViewBottomAnchor - In the implementation block
@property (assign,nonatomic) NSArray * leadingOffsets;                                            //@synthesize leadingOffsets=_leadingOffsets - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLayoutGuideLeadingConstraint;               //@synthesize textLayoutGuideLeadingConstraint=_textLayoutGuideLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLayoutGuideTrailingConstraint;              //@synthesize textLayoutGuideTrailingConstraint=_textLayoutGuideTrailingConstraint - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) unsigned long long effectiveNumberOfLines; 
@property (nonatomic,retain) UIView * debugFirstBaselineView;                                     //@synthesize debugFirstBaselineView=_debugFirstBaselineView - In the implementation block
@property (nonatomic,retain) UIView * debugLastBaselineView;                                      //@synthesize debugLastBaselineView=_debugLastBaselineView - In the implementation block
@property (assign,nonatomic,__weak) id<CPSMultilineLabelDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                 //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double lineSpacing;                                                  //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                                           //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) double minimumFontSize;                                              //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLines;                                    //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                             //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL prefersFewerLines;                                              //@synthesize prefersFewerLines=_prefersFewerLines - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * textLayoutGuide;                                   //@synthesize textLayoutGuide=_textLayoutGuide - In the implementation block
@property (nonatomic,readonly) CPSMultilineLabelConfig * currentConfiguration;                    //@synthesize currentConfiguration=_currentConfiguration - In the implementation block
-(void)_updateLayout;
-(NSAttributedString *)attributedText;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(id<CPSMultilineLabelDelegate>)delegate;
-(void)setFont:(UIFont *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)firstBaselineAnchor;
-(UIView *)baselineView;
-(double)lineSpacing;
-(void)setBounds:(CGRect)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<CPSMultilineLabelDelegate>)arg1 ;
-(double)minimumFontSize;
-(CPSMultilineLabelConfig *)currentConfiguration;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(NSString *)text;
-(void)setLineSpacing:(double)arg1 ;
-(void)setBaselineView:(UIView *)arg1 ;
-(id)lastBaselineAnchor;
-(void)setTextAlignment:(long long)arg1 ;
-(BOOL)debug;
-(UILayoutGuide *)textLayoutGuide;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)numberOfLines;
-(UIFont *)font;
-(double)minimumScaleFactor;
-(void)setMinimumFontSize:(double)arg1 ;
-(void)_updateLayoutGuideConstraints;
-(CTFrameRef)_textFrame:(id)arg1 rect:(CGRect)arg2 ;
-(void)setBaselineOffsets:(NSArray *)arg1 ;
-(void)setLeadingOffsets:(NSArray *)arg1 ;
-(void)_updateBaselines;
-(id)_attributedTextForRect:(CGRect)arg1 ;
-(void)setDebugFirstBaselineView:(UIView *)arg1 ;
-(UIView *)debugFirstBaselineView;
-(void)setDebugLastBaselineView:(UIView *)arg1 ;
-(UIView *)debugLastBaselineView;
-(double)_heightForAttributedString:(id)arg1 inRect:(CGRect)arg2 ;
-(NSLayoutConstraint *)baselineViewTopAnchor;
-(NSLayoutConstraint *)baselineViewBottomAnchor;
-(NSArray *)baselineOffsets;
-(NSArray *)leadingOffsets;
-(NSLayoutConstraint *)textLayoutGuideLeadingConstraint;
-(NSLayoutConstraint *)textLayoutGuideTrailingConstraint;
-(id)_attributedStringWithSize:(double)arg1 ;
-(SCD_Struct_CP2)_statsForString:(id)arg1 inRect:(CGRect)arg2 ;
-(BOOL)_fitsInHeight:(double)arg1 numberOfLines:(unsigned long long)arg2 rect:(CGRect)arg3 ;
-(id)_ellipsedString:(id)arg1 inRect:(CGRect)arg2 ;
-(unsigned long long)effectiveNumberOfLines;
-(NSRange)_rangeOfTrailingWhiteSpace:(id)arg1 ;
-(BOOL)prefersFewerLines;
-(void)setPrefersFewerLines:(BOOL)arg1 ;
-(void)setBaselineViewTopAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setBaselineViewBottomAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setTextLayoutGuideLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextLayoutGuideTrailingConstraint:(NSLayoutConstraint *)arg1 ;
@end
