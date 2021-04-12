/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/


@protocol PSGInputSuggesterProtocol
@required
-(void)inputSuggestionsWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)logErrorForRequest:(id)arg1 trigger:(id)arg2 errorType:(unsigned char)arg3;
-(void)warmUpWithCompletion:(/*^block*/id)arg1;
-(void)logTrigger:(id)arg1 request:(id)arg2;
-(void)logImpression:(id)arg1 request:(id)arg2;
-(void)logSpeedMetricForLocaleIdentifier:(id)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4;
-(void)logEngagement:(id)arg1 request:(id)arg2 position:(unsigned long long)arg3;
-(void)logPrediction:(id)arg1 request:(id)arg2 latencyMillis:(double)arg3;

@end

