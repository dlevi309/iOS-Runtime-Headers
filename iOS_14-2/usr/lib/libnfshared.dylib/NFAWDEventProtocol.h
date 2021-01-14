/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol NFAWDEventProtocol <NSObject>
@optional
-(id)getMetric;
-(unsigned)getMetricId;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(void)updateExceptionUUID:(id)arg1;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end

