/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface UIDatePickerWeekMonthDayView : UIView {

	SCD_Struct_UI30 _datePickerWeekMonthDayViewFlags;
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
-(void)layoutSubviews;
-(BOOL)_canBeReusedInPickerView;
-(void)setWeekdayWidth:(double)arg1 ;
-(BOOL)weekdayLast;
-(void)setWeekdayLast:(BOOL)arg1 ;
-(UILabel *)dateLabel;
-(UILabel *)weekdayLabel;
-(NSString *)formattedDateString;
-(void)setFormattedDateString:(NSString *)arg1 ;
-(double)weekdayWidth;
@end

