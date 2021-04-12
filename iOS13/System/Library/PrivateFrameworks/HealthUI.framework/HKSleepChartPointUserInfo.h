/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinateInfo.h>
#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSArray, NSDate, HKSleepDay, NSString;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData> {

	NSArray* _titles;
	NSArray* _values;
	NSDate* _date;
	HKSleepDay* _sleepDay;

}

@property (nonatomic,retain) NSArray * titles;                         //@synthesize titles=_titles - In the implementation block
@property (nonatomic,retain) NSArray * values;                         //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns; 
@property (nonatomic,retain) HKSleepDay * sleepDay;                    //@synthesize sleepDay=_sleepDay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(long long)numberOfColumns;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(HKSleepDay *)sleepDay;
-(void)setSleepDay:(HKSleepDay *)arg1 ;
@end

