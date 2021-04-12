/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol RERelevanceEngineMetricsRecorder <NSObject>
@optional
-(BOOL)ignoreValidMetricCheck;
-(void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
-(void)recordPredictionMetrics:(id)arg1 forInteraction:(id)arg2;

@end

