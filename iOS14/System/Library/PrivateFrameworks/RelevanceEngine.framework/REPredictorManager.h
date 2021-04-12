/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(void)pause;
-(void)removeObserver:(id)arg1 ;
-(void)resume;
-(void)dealloc;
-(void)predictorDidUpdate:(id)arg1 ;
-(void)predictor:(id)arg1 didBeginActivity:(id)arg2 ;
-(void)predictor:(id)arg1 didFinishActivity:(id)arg2 ;
-(id)initWithPredictors:(id)arg1 featureSet:(id)arg2 relevanceEngine:(id)arg3 ;
-(void)enumerateValuesForElement:(id)arg1 trainingContext:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictors:(/*^block*/id)arg1 ;
@end

