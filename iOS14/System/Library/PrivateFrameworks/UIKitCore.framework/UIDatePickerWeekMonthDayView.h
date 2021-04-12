/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface UIDatePickerWeekMonthDayView : UIView {

	SCD_Struct_UI34 _datePickerWeekMonthDayViewFlags;
	UILabel* _dateLabel;
	UILabel* _weekdayLabel;
	NSString* _formattedDateString;
	double _weekdayWidth;

}

@property (nonatomic,readonly) UILabel * dateLabel;                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * weekdayLabel;                  //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
@property (nonatomic,copy) NSString * formattedDateString;              //@synthesize formattedDateString=_formattedDateString - In the implementation block
@property (assign,nonatomic) double weekdayWidth;                       //@synthesize weekdayWidth=_weekdayWidth - In the implementation block
@property (assign,nonatomic) BOOL weekdayLast; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(UILabel *)weekdayLabel;
-(double)weekdayWidth;
-(void)layoutSubviews;
-(BOOL)weekdayLast;
-(void)setWeekdayWidth:(double)arg1 ;
-(void)setWeekdayLast:(BOOL)arg1 ;
-(NSString *)formattedDateString;
-(void)setFormattedDateString:(NSString *)arg1 ;
-(BOOL)_canBeReusedInPickerView;
@end

