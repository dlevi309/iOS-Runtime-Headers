/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLMultiLabelRegressionModelProtocol, PMLMultiLabelEvaluationTrackerProtocol;
@class NSString, PMLTrainingStore, PMLSessionDescriptor, NSArray;

@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	unsigned long long _supportPerLabel;
	id<PMLMultiLabelRegressionModelProtocol> _multiLabelRegressionModel;
	NSArray* _positiveLabels;
	NSArray* _weightsArray;
	BOOL _intercept;
	NSArray* _evaluationPoints;
	id<PMLMultiLabelEvaluationTrackerProtocol> _tracker;
	unsigned long long _evaluationLevel;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                                                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;                                        //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                                             //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionsInBatch;                                              //@synthesize sessionsInBatch=_sessionsInBatch - In the implementation block
@property (nonatomic,readonly) unsigned long long supportPerLabel;                                              //@synthesize supportPerLabel=_supportPerLabel - In the implementation block
@property (nonatomic,readonly) id<PMLMultiLabelRegressionModelProtocol> multiLabelRegressionModel;              //@synthesize multiLabelRegressionModel=_multiLabelRegressionModel - In the implementation block
@property (nonatomic,readonly) NSArray * positiveLabels;                                                        //@synthesize positiveLabels=_positiveLabels - In the implementation block
@property (nonatomic,readonly) NSArray * weightsArray;                                                          //@synthesize weightsArray=_weightsArray - In the implementation block
@property (nonatomic,readonly) BOOL intercept;                                                                  //@synthesize intercept=_intercept - In the implementation block
@property (nonatomic,readonly) NSArray * evaluationPoints;                                                      //@synthesize evaluationPoints=_evaluationPoints - In the implementation block
@property (nonatomic,readonly) id<PMLMultiLabelEvaluationTrackerProtocol> tracker;                              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) unsigned long long evaluationLevel;                                              //@synthesize evaluationLevel=_evaluationLevel - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                                               //@synthesize planId=_planId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)run;
-(PMLTrainingStore *)store;
-(id<PMLMultiLabelEvaluationTrackerProtocol>)tracker;
-(BOOL)intercept;
-(NSString *)planId;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(unsigned long long)arg4 sessionsInBatch:(unsigned long long)arg5 supportPerLabel:(unsigned long long)arg6 labelAndWeights:(id)arg7 modelClassName:(id)arg8 intercept:(BOOL)arg9 evaluationPoints:(id)arg10 tracker:(id)arg11 evaluationLevel:(unsigned long long)arg12 ;
-(id)_rankedLabelsForSession:(id)arg1 ;
-(id)_precisionAtEvaluationPointsForSessions:(id)arg1 ;
-(unsigned long long)maxSessionsLimit;
-(unsigned long long)sessionsInBatch;
-(unsigned long long)supportPerLabel;
-(id<PMLMultiLabelRegressionModelProtocol>)multiLabelRegressionModel;
-(NSArray *)positiveLabels;
-(NSArray *)weightsArray;
-(NSArray *)evaluationPoints;
-(unsigned long long)evaluationLevel;
@end

