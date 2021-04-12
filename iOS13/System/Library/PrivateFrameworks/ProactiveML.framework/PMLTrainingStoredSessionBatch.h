/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PMLSparseMatrix *)covariates;
-(id)minibatchStats;
-(id)initWithCovariates:(id)arg1 outcomes:(id)arg2 ;
-(id)minibatchStatsForPositiveLabel:(unsigned long long)arg1 ;
-(id)minibatchStatsForPositiveLabels:(id)arg1 ;
@end

