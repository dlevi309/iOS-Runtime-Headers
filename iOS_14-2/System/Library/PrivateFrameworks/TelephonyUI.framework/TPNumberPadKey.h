/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint;

@interface TPNumberPadKey : UIView {

	UILabel* _digit;
	UILabel* _letters;
	UILabel* _secondaryLetters;
	NSLayoutConstraint* _digitBaseline;
	NSLayoutConstraint* _letterBaseline;
	NSLayoutConstraint* _secondaryLetterBaseline;

}

@property (getter=isAsterisk,nonatomic,readonly) BOOL asterisk; 
@property (getter=isPound,nonatomic,readonly) BOOL pound; 
@property (nonatomic,retain) UILabel * digit;                                           //@synthesize digit=_digit - In the implementation block
@property (nonatomic,retain) UILabel * letters;                                         //@synthesize letters=_letters - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLetters;                                //@synthesize secondaryLetters=_secondaryLetters - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * digitBaseline;                        //@synthesize digitBaseline=_digitBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * letterBaseline;                       //@synthesize letterBaseline=_letterBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondaryLetterBaseline;              //@synthesize secondaryLetterBaseline=_secondaryLetterBaseline - In the implementation block
+(void)initialize;
+(float)absoluteTrackingValueForString:(id)arg1 pointSize:(float)arg2 unitsPerEm:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)digit;
-(UILabel *)letters;
-(BOOL)isPound;
-(void)setLetters:(UILabel *)arg1 ;
-(NSLayoutConstraint *)letterBaseline;
-(NSLayoutConstraint *)secondaryLetterBaseline;
-(double)digitFontSizeForScreenSizeCategory:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 ;
-(double)letterFontSizeForScreenSizeCategory:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 ;
-(double)secondaryLetterFontSizeForScreenSizeCategory:(unsigned long long)arg1 ;
-(UILabel *)secondaryLetters;
-(void)updateBaselineConstraintConstantsFor:(unsigned long long)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 ;
-(NSLayoutConstraint *)digitBaseline;
-(BOOL)isAsterisk;
-(void)setFontStylesForHighlightState:(BOOL)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 shouldCenterDigit:(BOOL)arg4 fontColor:(BOOL)arg5 circleDiameter:(double)arg6 isCarPlay:(BOOL)arg7 screenSizeCategory:(unsigned long long)arg8 ;
-(void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3 ;
-(void)doLayoutNow;
-(void)setDigit:(UILabel *)arg1 ;
-(void)setSecondaryLetters:(UILabel *)arg1 ;
-(void)setDigitBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setLetterBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setSecondaryLetterBaseline:(NSLayoutConstraint *)arg1 ;
@end

