/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPEventServerProtocol <PPFeedbackAccepting>
@required
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
-(void)scoredEventsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
-(void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
-(void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
-(void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
-(void)sendRTCLogsWithWithCompletion:(/*^block*/id)arg1;
-(void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;

@end

