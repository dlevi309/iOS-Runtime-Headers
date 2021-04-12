/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class PMLSparseMatrix, PMLModelRegressor;

@interface PMLTrainingStoredSessionBatch : NSObject {

	PMLSparseMatrix* _covariates;
	PMLModelRegressor* _outcomes;
	unsigned long long _count;

}

@property (nonatomic,readonly) PMLSparseMatrix * covariates;              //@synthesize covariates=_covariates - In the implementation block
@property (nonatomic,readonly) PMLModelRegressor * outcomes;              //@synthesize outcomes=_outcomes - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                  //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(PMLModelRegressor *)outcomes;
-(id)minibatchStats;
-(PMLSparseMatrix *)covariates;
-(id)initWithCovariates:(id)arg1 outcomes:(id)arg2 ;
-(id)minibatchStatsForPositiveLabel:(unsigned long long)arg1 ;
-(id)minibatchStatsForPositiveLabels:(id)arg1 ;
@end

