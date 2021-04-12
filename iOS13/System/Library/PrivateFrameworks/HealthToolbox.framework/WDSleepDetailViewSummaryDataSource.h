/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/WDChartDetailViewDataSource.h>

@class HKSleepAnalysis, HKSleepDay, HKSleepPeriod, NSString;

@interface WDSleepDetailViewSummaryDataSource : NSObject <WDChartDetailViewDataSource> {

	BOOL _isBlank;
	HKSleepAnalysis* _sleepAnalysis;
	HKSleepDay* _sleepDay;
	HKSleepPeriod* _sleepPeriod;

}

@property (nonatomic,readonly) HKSleepAnalysis * sleepAnalysis;              //@synthesize sleepAnalysis=_sleepAnalysis - In the implementation block
@property (nonatomic,readonly) HKSleepDay * sleepDay;                        //@synthesize sleepDay=_sleepDay - In the implementation block
@property (nonatomic,readonly) HKSleepPeriod * sleepPeriod;                  //@synthesize sleepPeriod=_sleepPeriod - In the implementation block
@property (readonly) BOOL isBlank;                                           //@synthesize isBlank=_isBlank - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)numberOfRows;
-(BOOL)isBlank;
-(HKSleepDay *)sleepDay;
-(id)initWithSleepAnalysis:(id)arg1 ;
-(id)mainSection;
-(long long)numberOfColumnsForRow:(long long)arg1 ;
-(id)detailSectionForRow:(long long)arg1 column:(long long)arg2 ;
-(HKSleepAnalysis *)sleepAnalysis;
-(HKSleepPeriod *)sleepPeriod;
@end

