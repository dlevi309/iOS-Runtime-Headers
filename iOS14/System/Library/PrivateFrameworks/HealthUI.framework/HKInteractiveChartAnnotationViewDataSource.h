/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKInteractiveChartAnnotationViewDataSource.h>

@protocol HKCurrentValueViewDataSourceDelegate;
@class HKSelectedRangeFormatter, HKUIMetricColors, NSArray, HKValueRange, UILabel, NSString, UIFont;

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource> {

	HKSelectedRangeFormatter* _selectedRangeFormatter;
	HKUIMetricColors* _metricColors;
	NSArray* _annotationLabels;
	long long _timeScope;
	HKValueRange* _lastDateRange;
	UILabel* _mainDateLabel;
	NSString* _lastUpperDateString;
	NSString* _lastLowerDateString;
	NSString* _lastCombinedDateString;
	UIFont* _majorFont;
	UIFont* _minorFont;
	id<HKCurrentValueViewDataSourceDelegate> _currentValueViewDataSourceDelegate;

}

@property (nonatomic,retain) NSArray * annotationLabels;                                                                      //@synthesize annotationLabels=_annotationLabels - In the implementation block
@property (assign,nonatomic) long long timeScope;                                                                             //@synthesize timeScope=_timeScope - In the implementation block
@property (retain) HKValueRange * lastDateRange;                                                                              //@synthesize lastDateRange=_lastDateRange - In the implementation block
@property (nonatomic,retain) UILabel * mainDateLabel;                                                                         //@synthesize mainDateLabel=_mainDateLabel - In the implementation block
@property (nonatomic,retain) NSString * lastUpperDateString;                                                                  //@synthesize lastUpperDateString=_lastUpperDateString - In the implementation block
@property (nonatomic,retain) NSString * lastLowerDateString;                                                                  //@synthesize lastLowerDateString=_lastLowerDateString - In the implementation block
@property (nonatomic,retain) NSString * lastCombinedDateString;                                                               //@synthesize lastCombinedDateString=_lastCombinedDateString - In the implementation block
@property (nonatomic,retain) UIFont * majorFont;                                                                              //@synthesize majorFont=_majorFont - In the implementation block
@property (nonatomic,retain) UIFont * minorFont;                                                                              //@synthesize minorFont=_minorFont - In the implementation block
@property (assign,nonatomic,__weak) id<HKCurrentValueViewDataSourceDelegate> currentValueViewDataSourceDelegate;              //@synthesize currentValueViewDataSourceDelegate=_currentValueViewDataSourceDelegate - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeFormatter * selectedRangeFormatter;                                             //@synthesize selectedRangeFormatter=_selectedRangeFormatter - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                                                                 //@synthesize metricColors=_metricColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUIMetricColors *)metricColors;
-(void)setTimeScope:(long long)arg1 ;
-(long long)timeScope;
-(BOOL)showSeparators;
-(long long)numberOfValuesForAnnotationView:(id)arg1 ;
-(id)dateViewWithOrientation:(long long)arg1 ;
-(id)leftMarginViewWithOrientation:(long long)arg1 ;
-(HKSelectedRangeFormatter *)selectedRangeFormatter;
-(id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(UIFont *)minorFont;
-(UIFont *)majorFont;
-(void)setMajorFont:(UIFont *)arg1 ;
-(void)setMinorFont:(UIFont *)arg1 ;
-(void)setAnnotationLabels:(NSArray *)arg1 ;
-(NSArray *)annotationLabels;
-(id<HKCurrentValueViewDataSourceDelegate>)currentValueViewDataSourceDelegate;
-(id)initWithSelectedRangeFormatter:(id)arg1 metricColors:(id)arg2 currentValueViewDataSourceDelegate:(id)arg3 ;
-(void)updateWithSelectionContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3 ;
-(void)setCurrentValueViewDataSourceDelegate:(id<HKCurrentValueViewDataSourceDelegate>)arg1 ;
-(void)_buildDateLabels;
-(void)setMainDateLabel:(UILabel *)arg1 ;
-(UILabel *)mainDateLabel;
-(NSString *)lastCombinedDateString;
-(BOOL)_isMultiSelectionDateRange;
-(HKValueRange *)lastDateRange;
-(void)setLastUpperDateString:(NSString *)arg1 ;
-(void)setLastLowerDateString:(NSString *)arg1 ;
-(void)setLastCombinedDateString:(NSString *)arg1 ;
-(void)setLastDateRange:(HKValueRange *)arg1 ;
-(void)_updateDateText;
-(NSString *)lastUpperDateString;
-(NSString *)lastLowerDateString;
@end

