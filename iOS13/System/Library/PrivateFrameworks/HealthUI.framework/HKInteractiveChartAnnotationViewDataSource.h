/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@protocol HKCurrentValueViewDataSourceValueRangeFormatter;
@class HKSelectedRangeFormatter, HKUIMetricColors, NSArray, HKValueRange, UIStackView, UILabel, NSString, UIFont;

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	HKSelectedRangeFormatter* _selectedRangeFormatter;
	HKUIMetricColors* _metricColors;
	NSArray* _annotationLabels;
	long long _timeScope;
	HKValueRange* _lastDateRange;
	UIStackView* _dateStack;
	UILabel* _upperDateLabel;
	UILabel* _lowerDateLabel;
	UILabel* _dividerDateLabel;
	NSString* _lastUpperDateString;
	NSString* _lastLowerDateString;
	NSString* _lastCombinedDateString;
	UIFont* _majorFont;
	UIFont* _minorFont;
	id<HKCurrentValueViewDataSourceValueRangeFormatter> _dateRangeFormatter;

}

@property (nonatomic,retain) NSArray * annotationLabels;                                                          //@synthesize annotationLabels=_annotationLabels - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                                 //@synthesize timeScope=_timeScope - In the implementation block
@property (retain) HKValueRange * lastDateRange;                                                                  //@synthesize lastDateRange=_lastDateRange - In the implementation block
@property (nonatomic,retain) UIStackView * dateStack;                                                             //@synthesize dateStack=_dateStack - In the implementation block
@property (nonatomic,retain) UILabel * upperDateLabel;                                                            //@synthesize upperDateLabel=_upperDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * lowerDateLabel;                                                            //@synthesize lowerDateLabel=_lowerDateLabel - In the implementation block
@property (nonatomic,retain) UILabel * dividerDateLabel;                                                          //@synthesize dividerDateLabel=_dividerDateLabel - In the implementation block
@property (nonatomic,retain) NSString * lastUpperDateString;                                                      //@synthesize lastUpperDateString=_lastUpperDateString - In the implementation block
@property (nonatomic,retain) NSString * lastLowerDateString;                                                      //@synthesize lastLowerDateString=_lastLowerDateString - In the implementation block
@property (nonatomic,retain) NSString * lastCombinedDateString;                                                   //@synthesize lastCombinedDateString=_lastCombinedDateString - In the implementation block
@property (nonatomic,retain) UIFont * majorFont;                                                                  //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,retain) UIFont * minorFont;                                                                  //@synthesize minorFont=_minorFont - In the implementation block
@property (nonatomic,retain) id<HKCurrentValueViewDataSourceValueRangeFormatter> dateRangeFormatter;              //@synthesize dateRangeFormatter=_dateRangeFormatter - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeFormatter * selectedRangeFormatter;                                 //@synthesize selectedRangeFormatter=_selectedRangeFormatter - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                                                     //@synthesize metricColors=_metricColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKCurrentValueViewDataSourceValueRangeFormatter>)dateRangeFormatter;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(HKUIMetricColors *)metricColors;
-(HKSelectedRangeFormatter *)selectedRangeFormatter;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(BOOL)showSeparators;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(UIFont *)majorFont;
-(UIFont *)minorFont;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
-(void)_buildDateLabels;
-(void)setUpperDateLabel:(UILabel *)arg1 ;
-(UILabel *)upperDateLabel;
-(void)setLowerDateLabel:(UILabel *)arg1 ;
-(UILabel *)lowerDateLabel;
-(void)setDividerDateLabel:(UILabel *)arg1 ;
-(UILabel *)dividerDateLabel;
-(void)setDateStack:(UIStackView *)arg1 ;
-(UIStackView *)dateStack;
-(NSString *)lastUpperDateString;
-(NSString *)lastLowerDateString;
-(NSString *)lastCombinedDateString;
-(BOOL)_isMultiSelectionDateRange;
-(HKValueRange *)lastDateRange;
-(void)setLastUpperDateString:(NSString *)arg1 ;
-(void)setLastLowerDateString:(NSString *)arg1 ;
-(void)setLastCombinedDateString:(NSString *)arg1 ;
-(void)setLastDateRange:(HKValueRange *)arg1 ;
-(void)setAnnotationLabels:(NSArray *)arg1 ;
-(void)_updateDateText;
-(id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2 dateRangeFormatter:(id)arg3 ;
-(void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(NSArray *)annotationLabels;
-(void)setDateRangeFormatter:(id<HKCurrentValueViewDataSourceValueRangeFormatter>)arg1 ;
@end

