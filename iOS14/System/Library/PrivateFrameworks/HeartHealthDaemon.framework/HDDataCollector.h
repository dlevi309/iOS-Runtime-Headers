/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
*/


@protocol HDDataCollector <NSObject>
@optional
-(BOOL)canResumeCollectionFromLastSensorDatum;
-(void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(/*^block*/id)arg3;
-(Class)sensorDatumClassForAggregator:(id)arg1;
-(void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
-(void)registerWithAggregators;
-(double)preferredAggregationIntervalForAggregator:(id)arg1;

@required
-(id)identifierForDataAggregator:(id)arg1;
-(id)sourceForDataAggregator:(id)arg1;
-(void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
-(void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;

@end

