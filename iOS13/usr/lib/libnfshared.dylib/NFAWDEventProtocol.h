/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol NFAWDEventProtocol <NSObject>
@optional
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(void)updateExceptionUUID:(id)arg1;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end

