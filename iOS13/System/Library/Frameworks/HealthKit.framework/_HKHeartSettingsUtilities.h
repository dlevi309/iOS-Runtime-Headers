/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface _HKHeartSettingsUtilities : NSObject
+(BOOL)isHeartRateEnabled;
+(BOOL)isWristDetectionEnabled;
+(BOOL)isTachycardiaDetectionEnabled;
+(long long)tachycardiaThresholdHeartRate;
+(BOOL)isBradycardiaDetectionSupportedOnActiveWatch;
+(BOOL)isBradycardiaDetectionSupportedOnAllWatches;
+(BOOL)isBradycardiaDetectionEnabled;
+(long long)bradycardiaThresholdHeartRate;
+(BOOL)isBackgroundHeartRateEnabled;
+(id)heartRateSettingsURL;
+(void)deleteAtrialFibrillationDetectionLastAnalyzedSampleDate;
@end

