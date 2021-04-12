/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol _ATXAppPredictorScoreLogger <NSObject>
@required
-(void)setAssetVersion:(unsigned long long)arg1;
-(void)setConsumerSubType:(unsigned char)arg1;
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
-(void)logInputDict:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
-(void)setPredictionClass:(id)arg1;
-(void)setCacheAge:(double)arg1;
-(void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3;

@end

