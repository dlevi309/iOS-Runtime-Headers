/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSDictionary, REMLPrediction;

@interface REMLPredictionSet : NSObject {

	NSDictionary* _predictionsByKey;
	REMLPrediction* _prediction;

}

@property (nonatomic,readonly) REMLPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
-(REMLPrediction *)prediction;
-(id)predictionForKey:(id)arg1 ;
-(id)initWithPrediction:(id)arg1 predictionMap:(id)arg2 ;
-(id)initWithPrediction:(id)arg1 ;
@end

