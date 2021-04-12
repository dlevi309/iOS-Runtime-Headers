/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, UIFont, NTKColoringLabel, NSDateFormatter, NSDate, UIColor;

@interface NTKBigNumeralsTimeComponentLabel : UIView {

	CLKDevice* _device;
	BOOL _useLigatures;
	UIFont* _filledFont;
	UIFont* _outlinedFont;
	NTKColoringLabel* _label;
	NTKColoringLabel* _transitioningLabel;
	NSDateFormatter* _formatter;
	unsigned long long _timeComponent;
	unsigned long long _fontVariant;
	NSDate* _date;
	unsigned long long _typeface;
	unsigned long long _style;
	UIColor* _color;

}

@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) UIFont * font; 
@property (assign,nonatomic) double fontSize; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) unsigned long long typeface;              //@synthesize typeface=_typeface - In the implementation block
@property (assign,nonatomic) unsigned long long style;                 //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
-(double)fontSize;
-(void)_updateLabelText;
-(UIColor *)color;
-(void)setDate:(NSDate *)arg1 ;
-(long long)textAlignment;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(NSDate *)date;
-(id)_fontForStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(double)_lastLineBaseline;
-(UIFont *)font;
-(unsigned long long)typeface;
-(void)applyTransitionFraction:(double)arg1 fromTypeface:(unsigned long long)arg2 toTypeface:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(void)cleanupTransition;
-(id)initWithDevice:(id)arg1 timeComponent:(unsigned long long)arg2 fontVariant:(unsigned long long)arg3 fontSize:(double)arg4 useLigatures:(BOOL)arg5 ;
-(void)setTypeface:(unsigned long long)arg1 ;
-(void)_updateLocale;
-(void)setupFontsForVariant:(unsigned long long)arg1 fontSize:(double)arg2 ;
-(id)_attributedStringForTypeface:(unsigned long long)arg1 ;
@end

