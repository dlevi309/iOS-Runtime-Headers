/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@interface HDHeadphoneExposureStatisticUpdateResult : NSObject {

	BOOL _includedSeries;
	BOOL _canTriggerNotification;

}

@property (nonatomic,readonly) BOOL includedSeries;                      //@synthesize includedSeries=_includedSeries - In the implementation block
@property (nonatomic,readonly) BOOL canTriggerNotification;              //@synthesize canTriggerNotification=_canTriggerNotification - In the implementation block
+(id)_resultWithIncludedSeries:(BOOL)arg1 canTriggerNotification:(BOOL)arg2 ;
+(id)_resultWithIncludedSeries:(BOOL)arg1 samples:(id)arg2 ;
+(id)resultForEmptySamplesAdded;
+(id)resultForAggregation;
+(id)resultForSamplesAdded:(id)arg1 includedSeries:(BOOL)arg2 ;
+(id)resultForSamplesJournaled:(id)arg1 ;
-(BOOL)includedSeries;
-(BOOL)canTriggerNotification;
-(id)_initWithIncludedSeries:(BOOL)arg1 canTriggerNotification:(BOOL)arg2 ;
-(void)combineWithResult:(id)arg1 ;
@end

