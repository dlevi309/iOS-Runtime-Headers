/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class UILabel, _UILegibilityView, NSString, UIFont, NSAttributedString, UIColor, _UILegibilitySettings;

@interface SBUILegibilityLabel : UIView <SBUILegibility> {

	UILabel* _lookasideLabel;
	_UILegibilityView* _legibilityView;
	BOOL _isDirty;
	double _strength;
	long long _options;
	double _scale;
	NSString* _string;
	UIFont* _font;
	NSAttributedString* _attributedText;
	UIColor* _textColorOverride;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _isWaitingToMoveToWindow;

}

@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) float hyphenationFactor; 
@property (nonatomic,readonly) UIEdgeInsets characterOverflowInsets; 
@property (nonatomic,readonly) double firstBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double baselineOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
-(NSString *)string;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(float)hyphenationFactor;
-(void)setHyphenationFactor:(float)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)didMoveToWindow;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(UIColor *)textColor;
-(BOOL)adjustsFontSizeToFitWidth;
-(long long)textAlignment;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(UIEdgeInsets)characterOverflowInsets;
-(double)firstBaselineOffsetFromBottom;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(void)_markOurselfDirty;
-(double)lastBaselineOffsetFromBottom;
-(void)_updateLegibilityView;
-(void)_updateLabelForLegibilitySettings;
-(BOOL)_needsColorImage;
@end

