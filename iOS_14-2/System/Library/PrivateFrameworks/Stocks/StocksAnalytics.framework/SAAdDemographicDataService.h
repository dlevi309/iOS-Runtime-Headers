/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksAnalytics.framework/StocksAnalytics
*/


@class NSCalendar;

@interface SAAdDemographicDataService : NSObject {

	NSCalendar* _calendar;

}

@property (nonatomic,readonly) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(void)fetchDemographicData:(/*^block*/id)arg1 ;
-(id)init;
-(NSCalendar *)calendar;
-(void)convertDemoString:(id)arg1 result:(/*^block*/id)arg2 ;
@end

