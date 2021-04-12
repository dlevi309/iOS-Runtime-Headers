/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKAudioExposureUtilities : NSObject
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(BOOL)arg2 ;
+(id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3 ;
+(double)_rounded:(double)arg1 ;
+(id)localizedDisplayNameForClassification:(unsigned long long)arg1 ;
+(unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3 ;
+(id)computeLEQFromAudioExposureValues:(id)arg1 ;
+(double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2 ;
@end

