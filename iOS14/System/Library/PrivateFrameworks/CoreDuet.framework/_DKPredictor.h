/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeQuerying;
@interface _DKPredictor : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}
+(id)predictorWithKnowledgeStore:(id)arg1 ;
+(id)deviceActivityLikelihoodQueryPredicate;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 withDataPartitionType:(unsigned long long)arg4 asOfDate:(id)arg5 ;
-(id)deviceActivityLikelihood;
-(id)localInBedPeriod;
-(id)launchLikelihoodForTopNApplications:(long long)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3 ;
-(id)displayOnLikelihood;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(id)predictionForStreamsWithNames:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(id)pluginLikelihood;
-(id)launchLikelihoodPredictionForApp:(id)arg1 ;
-(id)expectedInBedPeriod;
-(id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 asOfDate:(id)arg4 ;
@end

