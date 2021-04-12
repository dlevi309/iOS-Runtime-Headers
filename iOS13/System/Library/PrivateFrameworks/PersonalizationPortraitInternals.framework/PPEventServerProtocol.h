/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@protocol PPEventServerProtocol <PPFeedbackAccepting>
@required
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
-(void)sendRTCLogsWithWithCompletion:(/*^block*/id)arg1;
-(void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
-(void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
-(void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
-(void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;

@end

