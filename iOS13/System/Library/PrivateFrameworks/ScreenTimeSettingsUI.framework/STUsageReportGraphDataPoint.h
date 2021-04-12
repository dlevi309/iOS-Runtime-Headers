/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSDateInterval, NSNumber, NSString, UIColor, NSArray, NSDate;

@interface STUsageReportGraphDataPoint : NSObject {

	unsigned long long _timePeriod;
	unsigned long long _itemType;
	NSDateInterval* _dateInterval;
	NSNumber* _total;
	double _totalAsPercentageOfMax;
	NSString* _indicatorImageName;
	UIColor* _indicatorImageColor;
	NSArray* _segments;

}

@property (assign,nonatomic) unsigned long long timePeriod;              //@synthesize timePeriod=_timePeriod - In the implementation block
@property (assign,nonatomic) unsigned long long itemType;                //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSNumber * total;                             //@synthesize total=_total - In the implementation block
@property (assign,nonatomic) double totalAsPercentageOfMax;              //@synthesize totalAsPercentageOfMax=_totalAsPercentageOfMax - In the implementation block
@property (nonatomic,copy) NSString * indicatorImageName;                //@synthesize indicatorImageName=_indicatorImageName - In the implementation block
@property (copy) UIColor * indicatorImageColor;                          //@synthesize indicatorImageColor=_indicatorImageColor - In the implementation block
@property (nonatomic,copy) NSArray * segments;                           //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
-(id)description;
-(NSDate *)date;
-(NSDateInterval *)dateInterval;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(unsigned long long)itemType;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(NSNumber *)total;
-(void)setTotal:(NSNumber *)arg1 ;
-(unsigned long long)timePeriod;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(NSString *)indicatorImageName;
-(UIColor *)indicatorImageColor;
-(double)totalAsPercentageOfMax;
-(id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 dateInterval:(id)arg3 total:(id)arg4 totalAsPercentageOfMax:(double)arg5 segments:(id)arg6 ;
-(void)setTotalAsPercentageOfMax:(double)arg1 ;
-(void)setIndicatorImageName:(NSString *)arg1 ;
-(void)setIndicatorImageColor:(UIColor *)arg1 ;
@end

