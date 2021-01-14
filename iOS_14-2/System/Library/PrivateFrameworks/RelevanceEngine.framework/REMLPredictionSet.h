/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSDictionary, REMLPrediction;

@interface REMLPredictionSet : NSObject {

	NSDictionary* _predictionsByKey;
	REMLPrediction* _prediction;

}

@property (nonatomic,readonly) REMLPrediction * prediction;              //@synthesize prediction=_prediction - In the implementation block
-(REMLPrediction *)prediction;
-(id)initWithPrediction:(id)arg1 ;
-(id)predictionForKey:(id)arg1 ;
-(id)initWithPrediction:(id)arg1 predictionMap:(id)arg2 ;
@end

