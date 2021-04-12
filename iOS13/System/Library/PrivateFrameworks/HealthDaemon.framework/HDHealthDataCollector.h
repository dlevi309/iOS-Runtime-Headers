/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) BOOL disabled; 
@required
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(void)updateHistoricalDataWithCompletion:(/*^block*/id)arg1;
-(id)dataCollectorDiagnosticDescription;

@end

