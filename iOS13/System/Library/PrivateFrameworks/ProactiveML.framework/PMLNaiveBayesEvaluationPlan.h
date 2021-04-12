/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLEvaluationTrackerProtocol;
@class PMLTrainingStore, PMLSessionDescriptor, PMLModelWeights, NSString;

@interface PMLNaiveBayesEvaluationPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLEvaluationTrackerProtocol> _tracker;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _sessionsInBatch;
	PMLModelWeights* _currentModelWeights;
	PMLModelWeights* _probabilities;
	PMLModelWeights* _positiveConditionalProbabilities;
	PMLModelWeights* _negativeConditionalProbabilities;
	double _skew;
	BOOL _isMultiLabel;
	unsigned long long _positiveLabel;
	double _threshold;
	unsigned long long _evaluationLevel;
	NSString* _planId;
	unsigned long long _maxSessionsLimit;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLEvaluationTrackerProtocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                   //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                     //@synthesize planId=_planId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)run;
-(NSString *)description;
-(PMLTrainingStore *)store;
-(id<PMLEvaluationTrackerProtocol>)tracker;
-(NSString *)planId;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(unsigned long long)maxSessionsLimit;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(void)runUntilDoneForTesting;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(id)arg3 sessionDescriptor:(id)arg4 sessionsInBatch:(unsigned long long)arg5 probabilities:(id)arg6 positiveConditionalProbabilities:(id)arg7 negativeConditionalProbabilities:(id)arg8 skew:(double)arg9 threshold:(double)arg10 isMultiLabel:(BOOL)arg11 positiveLabel:(unsigned long long)arg12 evaluationLevel:(unsigned long long)arg13 ;
@end

