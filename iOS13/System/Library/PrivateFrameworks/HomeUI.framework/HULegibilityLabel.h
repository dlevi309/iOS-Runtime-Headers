/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UILegibilityView, NSArray, UILayoutGuide, NSString, UIFont, NSAttributedString, UIColor, _UILegibilitySettings;

@interface HULegibilityLabel : UIView {

	UILabel* _lookasideLabel;
	_UILegibilityView* _legibilityView;
	BOOL _isDirty;
	double _strength;
	long long _options;
	NSArray* _legibilityConstraints;
	UILayoutGuide* _firstBaselineLayoutGuide;
	UILayoutGuide* _lastBaselineLayoutGuide;
	NSString* _text;
	UIFont* _font;
	NSAttributedString* _attributedText;
	UIColor* _textColorOverride;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                       //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * text;                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) double minimumScaleFactor; 
@property (nonatomic,readonly) double firstBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double lastBaselineOffsetFromBottom; 
@property (nonatomic,readonly) double baselineOffset; 
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(long long)numberOfLines;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(BOOL)adjustsFontSizeToFitWidth;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)updateForChangedSettings:(id)arg1 ;
-(double)firstBaselineOffsetFromBottom;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(void)_markOurselfDirty;
-(double)lastBaselineOffsetFromBottom;
-(void)_updateLegibilityView;
-(void)_updateLabelForLegibilitySettings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(double)_layoutGuideOffsetFromBottom:(id)arg1 ;
@end

