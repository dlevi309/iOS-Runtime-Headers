/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTStore.h>
#import <libobjc.A.dylib/RTEnumerableStore.h>

@class NSString;

@interface RTFingerprintStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchRequestFromOptions:(id)arg1 offset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(void)_appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)storeFingerprints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)appendWiFiAccessPointsToLastFingerprint:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchFingerprintsBetweenStartDate:(id)arg1 endDate:(id)arg2 filteredBySettledState:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchWifiAccessPointsForFingerprint:(id)arg1 fetchLimit:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)purgePredating:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

