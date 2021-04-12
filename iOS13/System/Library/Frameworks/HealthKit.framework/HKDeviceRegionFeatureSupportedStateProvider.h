/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKDeviceRegionFeatureSupportedStateProvider <NSObject>
@required
+(unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1;
+(unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+(unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1;

@end

