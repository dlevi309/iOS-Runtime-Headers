/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSAnalyticsProcessor.h>

@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {

	NSDate* _currentDate;

}
+(id)_firstShownDateForTipStatus:(id)arg1 ;
+(id)_usageEventsProcessedKeyForIdentifier:(id)arg1 ;
+(BOOL)_tipStatusValidForLiftProcessing:(id)arg1 contextualInfo:(id)arg2 firstShownDate:(id)arg3 ;
+(id)_preHintUsageKeyForIdentifier:(id)arg1 ;
+(id)_preHintRangeOutOfBoundsForIdentifier:(id)arg1 ;
-(id)init;
-(void)setCurrentDate:(id)arg1 ;
-(void)_calculateLift:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveHistoricalUsage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_savePreHintRangeOutOfBounds:(BOOL)arg1 forIdentifier:(id)arg2 ;
-(void)resetAnalytics;
-(void)processAnalytics:(/*^block*/id)arg1 ;
-(void)_countsForPredicate:(id)arg1 streamName:(id)arg2 interval:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

