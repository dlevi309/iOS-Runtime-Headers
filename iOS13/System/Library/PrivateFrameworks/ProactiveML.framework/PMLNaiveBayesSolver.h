/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class PMLModelWeights, PMLSparseMatrix, PMLModelRegressor;

@interface PMLNaiveBayesSolver : NSObject {

	PMLModelWeights* _positiveConditionalProbabilities;
	PMLModelWeights* _negativeConditionalProbabilities;
	PMLModelWeights* _probabilities;
	PMLModelWeights* _positiveConditionalCounts;
	PMLModelWeights* _negativeConditionalCounts;
	PMLModelWeights* _counts;
	PMLSparseMatrix* _covariates;
	PMLModelRegressor* _objective;

}

@property (retain) PMLModelWeights * positiveConditionalProbabilities;              //@synthesize positiveConditionalProbabilities=_positiveConditionalProbabilities - In the implementation block
@property (retain) PMLModelWeights * negativeConditionalProbabilities;              //@synthesize negativeConditionalProbabilities=_negativeConditionalProbabilities - In the implementation block
@property (retain) PMLModelWeights * probabilities;                                 //@synthesize probabilities=_probabilities - In the implementation block
@property (retain) PMLModelWeights * positiveConditionalCounts;                     //@synthesize positiveConditionalCounts=_positiveConditionalCounts - In the implementation block
@property (retain) PMLModelWeights * negativeConditionalCounts;                     //@synthesize negativeConditionalCounts=_negativeConditionalCounts - In the implementation block
@property (retain) PMLModelWeights * counts;                                        //@synthesize counts=_counts - In the implementation block
@property (retain) PMLSparseMatrix * covariates;                                    //@synthesize covariates=_covariates - In the implementation block
@property (retain) PMLModelRegressor * objective;                                   //@synthesize objective=_objective - In the implementation block
-(id)init;
-(float)predict:(id)arg1 ;
-(PMLModelWeights *)counts;
-(void)setCounts:(PMLModelWeights *)arg1 ;
-(id)initWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3 ;
-(void)solveForCovariates:(id)arg1 objectives:(id)arg2 ;
-(void)solve;
-(PMLModelWeights *)positiveConditionalProbabilities;
-(void)setPositiveConditionalProbabilities:(PMLModelWeights *)arg1 ;
-(PMLModelWeights *)negativeConditionalProbabilities;
-(void)setNegativeConditionalProbabilities:(PMLModelWeights *)arg1 ;
-(PMLModelWeights *)probabilities;
-(void)setProbabilities:(PMLModelWeights *)arg1 ;
-(PMLModelWeights *)positiveConditionalCounts;
-(void)setPositiveConditionalCounts:(PMLModelWeights *)arg1 ;
-(PMLModelWeights *)negativeConditionalCounts;
-(void)setNegativeConditionalCounts:(PMLModelWeights *)arg1 ;
-(PMLSparseMatrix *)covariates;
-(void)setCovariates:(PMLSparseMatrix *)arg1 ;
-(PMLModelRegressor *)objective;
-(void)setObjective:(PMLModelRegressor *)arg1 ;
@end

