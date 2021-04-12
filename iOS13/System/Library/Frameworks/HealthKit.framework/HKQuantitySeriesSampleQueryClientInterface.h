/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>
@required
-(void)client_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(BOOL)arg3 query:(id)arg4;
-(void)client_deliverEnumerationResults:(id)arg1 isFinal:(BOOL)arg2 query:(id)arg3;

@end

