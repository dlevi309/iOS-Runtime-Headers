/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/REPredictorObserver.h>

@class NSArray, NSDictionary, REObserverStore, RERelevanceEngine, NSString;

@interface REPredictorManager : NSObject <REPredictorObserver> {

	NSArray* _predictors;
	NSDictionary* _predictorsMap;
	REObserverStore* _observer;
	RERelevanceEngine* _engine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(void)predictor:(id)arg1 didBeginActivity:(id)arg2 ;
-(void)predictor:(id)arg1 didFinishActivity:(id)arg2 ;
-(id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3 ;
-(void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictors:(/*^block*/id)arg1 ;
@end

