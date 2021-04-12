/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign) BOOL intercept;                                       //@synthesize intercept=_intercept - In the implementation block
-(id)init;
-(PMLModelWeights *)weights;
-(void)setWeights:(PMLModelWeights *)arg1 ;
-(float)predict:(id)arg1 ;
-(BOOL)intercept;
-(void)setIntercept:(BOOL)arg1 ;
-(void)solveForCovariates:(id)arg1 objectives:(id)arg2 ;
-(void)solve;
-(PMLSparseMatrix *)covariates;
-(void)setCovariates:(PMLSparseMatrix *)arg1 ;
-(PMLModelRegressor *)objective;
-(void)setObjective:(PMLModelRegressor *)arg1 ;
-(id)initWithLearningRate:(float)arg1 minIterations:(unsigned long long)arg2 stoppingThreshold:(float)arg3 weights:(id)arg4 intercept:(BOOL)arg5 gradientCalculator:(/*^block*/id)arg6 predictionCalculator:(/*^block*/id)arg7 batchPredictionCalculator:(/*^block*/id)arg8 ;
-(id)computeAvgGradientWithIterations:(unsigned long long)arg1 ;
-(void)solveWithAvgGradient:(float*)arg1 maxNumberOfIterations:(unsigned long long)arg2 ;
-(float)meanSquaredError;
-(id)batchPredict:(id)arg1 ;
@end

