/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
*/


@class NSCalendar;

@interface SAAdDemographicDataService : NSObject {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(id)init;
-(NSCalendar *)calendar;
-(void)convertDemoString:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)fetchDemographicData:(/*^block*/id)arg1 ;
@end

