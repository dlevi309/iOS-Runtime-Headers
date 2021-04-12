/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimeZone, NSDate, UILabel, NSString, UIColor, UIFont;

@interface MTUIDateLabel : UIView {

	NSTimeZone* _timeZone;
	NSDate* _date;
	UILabel* _dateLabel;
	NSString* _dateLabelText;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _timeDesignatorFont;

}

@property (nonatomic,copy) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                    //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * dateLabelText;                   //@synthesize dateLabelText=_dateLabelText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * timeDesignatorFont;              //@synthesize timeDesignatorFont=_timeDesignatorFont - In the implementation block
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(void)setDate:(NSDate *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(void)_updateLabel;
-(UILabel *)dateLabel;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(id)_fontInfoForBaselineSpacing;
-(UIFont *)timeDesignatorFont;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)_updateDateString;
-(void)_updateTextString;
-(NSString *)dateLabelText;
-(void)setDateLabelText:(NSString *)arg1 ;
@end

