/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class STUsageReportGraphDataPoint, UIView, UILabel, NSDateIntervalFormatter, NSDateFormatter;

@interface STPaddleView : UIView {

	STUsageReportGraphDataPoint* _dataPoint;
	UIView* _backgroundView;
	UILabel* _dayLabel;
	UILabel* _dateTimeLabel;
	UILabel* _usageLabel;
	NSDateIntervalFormatter* _hourIntervalDateFormatter;
	NSDateFormatter* _weekdayDateFormatter;
	NSDateFormatter* _monthDateFormatter;

}

@property (readonly) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) UILabel * dayLabel;                                               //@synthesize dayLabel=_dayLabel - In the implementation block
@property (readonly) UILabel * dateTimeLabel;                                          //@synthesize dateTimeLabel=_dateTimeLabel - In the implementation block
@property (readonly) UILabel * usageLabel;                                             //@synthesize usageLabel=_usageLabel - In the implementation block
@property (readonly) NSDateIntervalFormatter * hourIntervalDateFormatter;              //@synthesize hourIntervalDateFormatter=_hourIntervalDateFormatter - In the implementation block
@property (readonly) NSDateFormatter * weekdayDateFormatter;                           //@synthesize weekdayDateFormatter=_weekdayDateFormatter - In the implementation block
@property (readonly) NSDateFormatter * monthDateFormatter;                             //@synthesize monthDateFormatter=_monthDateFormatter - In the implementation block
@property (nonatomic,retain) STUsageReportGraphDataPoint * dataPoint;                  //@synthesize dataPoint=_dataPoint - In the implementation block
-(id)init;
-(UIView *)backgroundView;
-(UILabel *)usageLabel;
-(UILabel *)dayLabel;
-(void)setDataPoint:(STUsageReportGraphDataPoint *)arg1 ;
-(STUsageReportGraphDataPoint *)dataPoint;
-(NSDateIntervalFormatter *)hourIntervalDateFormatter;
-(UILabel *)dateTimeLabel;
-(NSDateFormatter *)weekdayDateFormatter;
-(NSDateFormatter *)monthDateFormatter;
@end

