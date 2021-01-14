/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {

	NSDate* _currentDate;

}
-(void)updateDisplayedCount:(long long*)arg1 andFrequencyControlCount:(long long*)arg2 forTipStatus:(id)arg3 andLookbackDate:(id)arg4 ;
-(id)init;
-(unsigned long long)_daysBetweenDate:(id)arg1 andOtherDate:(id)arg2 ;
-(void)resetAnalytics;
-(id)_furthestLookbackDate;
-(BOOL)_shouldProceedWithCrunching;
-(void)processAnalytics:(/*^block*/id)arg1 ;
@end

