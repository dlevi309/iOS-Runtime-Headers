/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class PMLModelWeights, PMLSparseMatrix, PMLModelRegressor;

@interface PMLGradientSolver : NSObject {

	float _learningRate;
	float _stoppingThreshold;
	unsigned long long _minIterations;
	/*^block*/id _gradientCalculator;
	/*^block*/id _predictionCalculator;
	/*^block*/id _batchPredictionCalculator;
	BOOL _intercept;
	PMLModelWeights* _weights;
	PMLSparseMatrix* _covariates;
	PMLModelRegressor* _objective;

}

@property (nonatomic,retain) PMLModelWeights * weights;                  //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) PMLSparseMatrix * covariates;               //@synthesize covariates=_covariates - In the implementation block
@property (nonatomic,retain) PMLModelRegressor * objective;              //@synthesize objective=_objective - In the implementation block
@property (assign,nonatomic) BOOL intercept;                             //@synthesize intercept=_intercept - In the implementation block
-(id)init;
-(void)setObjective:(PMLModelRegressor *)arg1 ;
-(void)setWeights:(PMLModelWeights *)arg1 ;
-(void)solve;
-(float)predict:(id)arg1 ;
-(void)setIntercept:(BOOL)arg1 ;
-(PMLModelWeights *)weights;
-(PMLModelRegressor *)objective;
-(BOOL)intercept;
-(id)initWithLearningRate:(float)arg1 minIterations:(unsigned long long)arg2 stoppingThreshold:(float)arg3 weights:(id)arg4 intercept:(BOOL)arg5 gradientCalculator:(/*^block*/id)arg6 predictionCalculator:(/*^block*/id)arg7 batchPredictionCalculator:(/*^block*/id)arg8 ;
-(id)computeAvgGradientWithIterations:(unsigned long long)arg1 ;
-(void)setCovariates:(PMLSparseMatrix *)arg1 ;
-(void)solveWithAvgGradient:(float*)arg1 maxNumberOfIterations:(unsigned long long)arg2 ;
-(id)batchPredict:(id)arg1 ;
-(void)solveForCovariates:(id)arg1 objectives:(id)arg2 ;
-(PMLSparseMatrix *)covariates;
@end

