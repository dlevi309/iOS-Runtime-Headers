/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_SBFVibrantView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _SBFVibrantSettings, _UILegibilitySettings, UIImage, NSString, UIView, UILabel, UIImageView, SBUILegibilityView, SBUILegibilityLabel;

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility> {

	_SBFVibrantSettings* _vibrantSettings;
	_UILegibilitySettings* _legibilitySettings;
	UIImage* _glyphImage;
	NSString* _title;
	double _minimumTitleScaleFactor;
	long long _numberOfLines;
	long long _textAlignment;
	long long _lineBreakMode;
	UIView* _vibrantMaskView;
	UILabel* _vibrantMaskLabel;
	UIImageView* _vibrantMaskGlyphView;
	UIView* _vibrantGlyph;
	UIView* _vibrantGlyphBackgroundView;
	UIView* _vibrantGlyphTintView;
	UIView* _nonVibrantGlyph;
	SBUILegibilityView* _nonVibrantGlyphLegibilityView;
	SBUILegibilityLabel* _nonVibrantLegibilityLabel;
	BOOL _vibrancyAllowed;
	double _strength;

}

@property (assign,getter=isVibrancyAllowed,nonatomic) BOOL vibrancyAllowed;              //@synthesize vibrancyAllowed=_vibrancyAllowed - In the implementation block
@property (nonatomic,retain) UIImage * glyphImage;                                       //@synthesize glyphImage=_glyphImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double minimumTitleScaleFactor;                             //@synthesize minimumTitleScaleFactor=_minimumTitleScaleFactor - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                    //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;                                    //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (nonatomic,retain) _SBFVibrantSettings * vibrantSettings;                      //@synthesize vibrantSettings=_vibrantSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double strength;                                            //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
+(id)_labelFont;
-(double)strength;
-(long long)lineBreakMode;
-(double)_alphaForState;
-(void)setStrength:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)_setUpForCurrentVibrancy;
-(BOOL)_shouldUseVibrancy;
-(CGSize)_sizeThatFitsWithVibrancy;
-(CGSize)_sizeThatFitsWithoutVibrancy;
-(void)_layoutVibrantSubviews;
-(void)_layoutNonVibrantSubviews;
-(void)_updateForState;
-(BOOL)isVibrancyAllowed;
-(CGSize)_sizeThatFitsForLabelView:(id)arg1 ;
-(CGRect)_labelFrameForSize:(CGSize)arg1 baselineOffset:(double)arg2 inRect:(CGRect)arg3 ;
-(CGRect)_glyphFrameForSize:(CGSize)arg1 inRect:(CGRect)arg2 ;
-(id)_lazyGlyphLegibilityView;
-(void)setVibrancyAllowed:(BOOL)arg1 ;
-(void)setMinimumTitleScaleFactor:(double)arg1 ;
-(void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2 ;
-(double)minimumTitleScaleFactor;
-(void)setVibrantSettings:(_SBFVibrantSettings *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(UIImage *)glyphImage;
-(long long)textAlignment;
-(id)backgroundColor;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_SBFVibrantSettings *)vibrantSettings;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setGlyphImage:(UIImage *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)numberOfLines;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

