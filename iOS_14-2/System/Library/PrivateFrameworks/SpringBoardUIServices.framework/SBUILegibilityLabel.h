/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)strength;
-(long long)lineBreakMode;
-(NSAttributedString *)attributedText;
-(id)viewForLastBaselineLayout;
-(void)setStrength:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(float)hyphenationFactor;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_markOurselfDirty;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(UIEdgeInsets)characterOverflowInsets;
-(long long)textAlignment;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(void)_updateLegibilityView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)firstBaselineOffsetFromBottom;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(double)lastBaselineOffsetFromBottom;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(BOOL)_needsColorImage;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(long long)numberOfLines;
-(void)_updateLabelForLegibilitySettings;
-(UIFont *)font;
-(double)minimumScaleFactor;
@end

