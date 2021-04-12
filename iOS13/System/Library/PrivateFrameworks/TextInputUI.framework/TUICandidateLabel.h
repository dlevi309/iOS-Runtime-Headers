/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, UIColor;

@interface TUICandidateLabel : UIView {

	BOOL _adjustsFontSizeToFitWidth;
	NSString* _text;
	UIFont* _font;
	double _minimumScaleFactor;
	UIColor* _textColor;
	long long _layoutOrientation;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                               //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                   //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;              //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long layoutOrientation;                 //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
+(double)lineWidthForText:(id)arg1 font:(id)arg2 layoutOrientation:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(long long)layoutOrientation;
-(double)minimumScaleFactor;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)setLayoutOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(UIFont *)font;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(BOOL)adjustsFontSizeToFitWidth;
@end

