/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimeZone *)timeZone;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(UILabel *)dateLabel;
-(id)viewForFirstBaselineLayout;
-(NSString *)dateLabelText;
-(void)setDateLabelText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIFont *)timeDesignatorFont;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_fontInfoForBaselineSpacing;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(NSDate *)date;
-(UIFont *)font;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)_updateDateString;
-(void)_updateTextString;
@end

