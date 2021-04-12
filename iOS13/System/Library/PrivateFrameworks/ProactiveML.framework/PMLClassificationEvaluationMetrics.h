/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@interface PMLClassificationEvaluationMetrics : NSObject
+(float)precision:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)recall:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(float)f1Score:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)truePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falsePositives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)trueNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(unsigned long long)falseNegatives:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 ;
+(void)addScoresForOutcomes:(id)arg1 predictions:(id)arg2 predicate:(/*^block*/id)arg3 metrics:(id)arg4 ;
+(float)roundFloatToSigFigs:(float)arg1 sigFigs:(int)arg2 ;
+(void)setReportSamplingRate:(unsigned)arg1 ;
@end

