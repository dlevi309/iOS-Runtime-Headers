/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UILabel *)dayLabel;
-(void)setDataPoint:(STUsageReportGraphDataPoint *)arg1 ;
-(STUsageReportGraphDataPoint *)dataPoint;
-(UILabel *)usageLabel;
-(NSDateIntervalFormatter *)hourIntervalDateFormatter;
-(UILabel *)dateTimeLabel;
-(NSDateFormatter *)weekdayDateFormatter;
-(NSDateFormatter *)monthDateFormatter;
@end

