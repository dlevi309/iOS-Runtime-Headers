/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLEvaluationTrackerProtocol;
@class PMLTrainingStore, PMLSessionDescriptor, PMLModelWeights, NSString;

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLEvaluationTrackerProtocol> _tracker;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	PMLModelWeights* _currentModelWeights;
	BOOL _intercept;
	double _skew;
	BOOL _isMultiLabel;
	unsigned long long _positiveLabel;
	double _threshold;
	unsigned long long _evaluationLevel;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLEvaluationTrackerProtocol> tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                   //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) PMLModelWeights * currentModelWeights;                 //@synthesize currentModelWeights=_currentModelWeights - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                     //@synthesize planId=_planId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)planId;
-(id)init;
-(PMLTrainingStore *)store;
-(NSString *)description;
-(id<PMLEvaluationTrackerProtocol>)tracker;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)runWithError:(id*)arg1 ;
-(unsigned long long)maxSessionsLimit;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(PMLModelWeights *)currentModelWeights;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(id)arg3 sessionDescriptor:(id)arg4 maxSessionsLimit:(unsigned long long)arg5 sessionsInBatch:(unsigned long long)arg6 currentModelWeights:(id)arg7 intercept:(BOOL)arg8 skew:(double)arg9 threshold:(double)arg10 isMultiLabel:(BOOL)arg11 positiveLabel:(unsigned long long)arg12 evaluationLevel:(unsigned long long)arg13 ;
@end
