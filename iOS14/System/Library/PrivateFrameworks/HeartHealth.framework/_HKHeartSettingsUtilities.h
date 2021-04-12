/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealth.framework/HeartHealth
*/


@interface _HKHeartSettingsUtilities : NSObject
+(BOOL)isWristDetectionEnabled;
+(BOOL)isHeartRateEnabled;
+(BOOL)isBradycardiaDetectionEnabled;
+(BOOL)shouldFooterTextDisplayOffConfiguration:(BOOL)arg1 ;
+(id)_calculateHeartRateOptionsWithMin:(long long)arg1 increment:(long long)arg2 max:(long long)arg3 ;
+(void)_setThresholdHeartRate:(id)arg1 detectedEnabledDefaultsKey:(id)arg2 thresholdHeartRateDefaultKey:(id)arg3 ;
+(BOOL)isTachycardiaDetectionEnabled;
+(id)irregularHeartRhythmFooterLinkTitle;
+(BOOL)isBackgroundHeartRateEnabled;
+(void)deleteAtrialFibrillationDetectionLastAnalyzedSampleDate;
+(id)heartRateSectionDescription;
+(id)heartRateThresholdOffDescription;
+(id)heartRateSettingsURL;
+(id)bradycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg1 ;
+(id)bradycardiaLearnMoreLink;
+(BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+(BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+(long long)bradycardiaThresholdHeartRate;
+(long long)bradycardiaWarningThreshold;
+(id)bradycardiaHeartRateOptions;
+(void)setBradycardiaThresholdHeartRate:(id)arg1 ;
+(long long)tachycardiaThresholdHeartRate;
+(id)tachycardiaHeartRateOptions;
+(id)tachycardiaHeartThresholdFooterDescriptionWithThresholdValue:(id)arg1 ;
+(id)tachycardiaLearnMoreLink;
+(void)setTachycardiaThresholdHeartRate:(id)arg1 ;
+(id)irregularHeartRhythmSetupTitleDescription;
+(id)irregularHeartRhythmTitleDescription;
+(id)irregularHeartRhythmFooterDescription;
+(id)irregularHeartRhythmFooterLinkURL;
+(BOOL)isAtrialFibrillationEnabledWithAvailabilityManager:(id)arg1 ;
+(void)setAtrialFibrillationEnabled:(BOOL)arg1 ;
+(id)electrocardiogramFooterDescriptionWithAvailabilityManager:(id)arg1 ;
+(id)electrocardiogramLearnMoreURL;
@end

