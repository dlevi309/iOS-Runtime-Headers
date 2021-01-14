/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol RERelevanceEngineMetricsRecorder <NSObject>
@optional
-(void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;
-(BOOL)ignoreValidMetricCheck;
-(void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordPredictionMetrics:(id)arg1 forInteraction:(id)arg2;

@end

