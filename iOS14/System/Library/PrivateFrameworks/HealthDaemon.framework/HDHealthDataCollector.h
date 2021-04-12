/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) BOOL disabled; 
@required
-(void)setDisabled:(BOOL)arg1;
-(BOOL)disabled;
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(void)updateHistoricalDataWithCompletion:(/*^block*/id)arg1;
-(id)dataCollectorDiagnosticDescription;

@end

