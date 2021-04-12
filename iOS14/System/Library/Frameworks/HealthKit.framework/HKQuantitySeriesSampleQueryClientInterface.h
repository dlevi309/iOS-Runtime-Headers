/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
@required
-(void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(BOOL)arg3 query:(id)arg4;
-(void)client_deliverEnumerationResults:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3;

@end

