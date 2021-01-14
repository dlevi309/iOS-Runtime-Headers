/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/HKDeviceRegionFeatureSupportedStateProvider.h>

@class NSString;

@interface HKNonMPNDeviceRegionFeatureSupportedStateProvider : NSObject <HKDeviceRegionFeatureSupportedStateProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)electrocardiogramSupportedStateForDeviceRegion:(id)arg1 ;
+(unsigned long long)electrocardiogramSupportedStateForCurrentDeviceRegion;
+(unsigned long long)electrocardiogramSupportedOnPhone:(id)arg1 iOSVersionString:(id)arg2 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForDeviceRegion:(id)arg1 ;
+(unsigned long long)atrialFibrillationDetectionSupportedStateForCurrentDeviceRegion;
@end

