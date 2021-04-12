/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>

@interface RTFingerprintStore : RTStore
-(void)_appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeFingerprints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)purgePredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

