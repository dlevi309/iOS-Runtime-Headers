/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(void)setTotal:(NSNumber *)arg1 ;
-(NSNumber *)total;
-(void)setItemType:(unsigned long long)arg1 ;
-(void)setSegments:(NSArray *)arg1 ;
-(id)description;
-(unsigned long long)itemType;
-(NSArray *)segments;
-(NSDate *)date;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(unsigned long long)timePeriod;
-(NSString *)indicatorImageName;
-(UIColor *)indicatorImageColor;
-(double)totalAsPercentageOfMax;
-(id)initWithTimePeriod:(unsigned long long)arg1 itemType:(unsigned long long)arg2 dateInterval:(id)arg3 total:(id)arg4 totalAsPercentageOfMax:(double)arg5 segments:(id)arg6 ;
-(void)setTotalAsPercentageOfMax:(double)arg1 ;
-(void)setIndicatorImageName:(NSString *)arg1 ;
-(void)setIndicatorImageColor:(UIColor *)arg1 ;
@end
