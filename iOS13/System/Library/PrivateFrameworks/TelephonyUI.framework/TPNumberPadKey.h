/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UILabel *)secondaryLetters;
-(NSLayoutConstraint *)letterBaseline;
-(NSLayoutConstraint *)secondaryLetterBaseline;
-(NSLayoutConstraint *)digitBaseline;
-(BOOL)isAsterisk;
-(BOOL)isPound;
-(void)setFontStylesForHighlightState:(BOOL)arg1 language:(unsigned long long)arg2 showLocalizedLetters:(BOOL)arg3 shouldCenterDigit:(BOOL)arg4 fontColor:(BOOL)arg5 circleDiameter:(double)arg6 largeFont:(BOOL)arg7 isCarPlay:(BOOL)arg8 ;
-(void)setDigit:(id)arg1 primaryLetters:(id)arg2 secondaryLetters:(id)arg3 ;
-(void)doLayoutNow;
-(void)setDigit:(UILabel *)arg1 ;
-(void)setLetters:(UILabel *)arg1 ;
-(void)setSecondaryLetters:(UILabel *)arg1 ;
-(void)setDigitBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setLetterBaseline:(NSLayoutConstraint *)arg1 ;
-(void)setSecondaryLetterBaseline:(NSLayoutConstraint *)arg1 ;
@end

