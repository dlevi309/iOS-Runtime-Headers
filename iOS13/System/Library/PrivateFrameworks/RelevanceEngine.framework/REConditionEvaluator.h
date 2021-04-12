/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class RECondition;

@interface REConditionEvaluator : NSObject {

	unsigned long long _mode;
	RECondition* _condition;

}

@property (nonatomic,readonly) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) RECondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) BOOL needsPredictionSet; 
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
-(unsigned long long)mode;
-(BOOL)acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(BOOL)compareFeatureMap:(id)arg1 toFeatureMap:(id)arg2 ;
-(BOOL)needsPredictionSet;
@end

