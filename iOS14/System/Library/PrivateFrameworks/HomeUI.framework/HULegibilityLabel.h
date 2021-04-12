/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)strength;
-(NSAttributedString *)attributedText;
-(id)viewForLastBaselineLayout;
-(void)setStrength:(double)arg1 ;
-(UIColor *)textColor;
-(void)updateForChangedSettings:(id)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setText:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_markOurselfDirty;
-(void)setBounds:(CGRect)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)_updateLegibilityView;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)firstBaselineOffsetFromBottom;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(NSString *)text;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 ;
-(double)lastBaselineOffsetFromBottom;
-(id)initWithCoder:(id)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(long long)numberOfLines;
-(void)_updateLabelForLegibilitySettings;
-(UIFont *)font;
-(double)minimumScaleFactor;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 ;
-(double)_layoutGuideOffsetFromBottom:(id)arg1 ;
@end

