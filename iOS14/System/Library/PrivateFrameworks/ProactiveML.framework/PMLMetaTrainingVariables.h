/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@protocol PMLNoiseStrategy;
@class NSString, PMLTrainingStore, PMLSessionDescriptor, NSArray;

@interface PMLMetaTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol> {

	NSString* _planId;
	PMLTrainingStore* _store;
	id<PMLNoiseStrategy> _noiseStrategy;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsToTrainOn;
	unsigned long long _trainingSetSize;
	NSArray* _labelsToTrainOn;
	unsigned long long _currentServerIteration;
	double _lossThresholdForStopping;
	unsigned long long _epochsPerBatch;
	double _probThreshold;
	unsigned long long _evaluationLevel;
	BOOL _reportScale;

}

@property (nonatomic,readonly) NSString * planId;                                      //@synthesize planId=_planId - In the implementation block
@property (nonatomic,readonly) PMLTrainingStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLNoiseStrategy> noiseStrategy;                     //@synthesize noiseStrategy=_noiseStrategy - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;               //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsToTrainOn;                //@synthesize maxSessionsToTrainOn=_maxSessionsToTrainOn - In the implementation block
@property (nonatomic,readonly) unsigned long long trainingSetSize;                     //@synthesize trainingSetSize=_trainingSetSize - In the implementation block
@property (nonatomic,readonly) NSArray * labelsToTrainOn;                              //@synthesize labelsToTrainOn=_labelsToTrainOn - In the implementation block
@property (nonatomic,readonly) unsigned long long currentServerIteration;              //@synthesize currentServerIteration=_currentServerIteration - In the implementation block
@property (nonatomic,readonly) double lossThresholdForStopping;                        //@synthesize lossThresholdForStopping=_lossThresholdForStopping - In the implementation block
@property (nonatomic,readonly) unsigned long long epochsPerBatch;                      //@synthesize epochsPerBatch=_epochsPerBatch - In the implementation block
@property (nonatomic,readonly) double probThreshold;                                   //@synthesize probThreshold=_probThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long evaluationLevel;                     //@synthesize evaluationLevel=_evaluationLevel - In the implementation block
@property (nonatomic,readonly) BOOL reportScale;                                       //@synthesize reportScale=_reportScale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)planId;
-(id)init;
-(PMLTrainingStore *)store;
-(BOOL)isEqual:(id)arg1 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)evaluationLevel;
-(unsigned long long)currentServerIteration;
-(BOOL)reportScale;
-(id)initWithPlanId:(id)arg1 store:(id)arg2 noiseStrategy:(id)arg3 sessionDescriptor:(id)arg4 maxSessionsToTrainOn:(unsigned long long)arg5 trainingSetSize:(unsigned long long)arg6 labelsToTrainOn:(id)arg7 currentServerIteration:(unsigned long long)arg8 lossThresholdForStopping:(double)arg9 epochsPerBatch:(unsigned long long)arg10 probThreshold:(double)arg11 evaluationLevel:(unsigned long long)arg12 reportScale:(BOOL)arg13 ;
-(BOOL)isEqualToMetaTrainingVariables:(id)arg1 ;
-(id<PMLNoiseStrategy>)noiseStrategy;
-(unsigned long long)maxSessionsToTrainOn;
-(unsigned long long)trainingSetSize;
-(NSArray *)labelsToTrainOn;
-(double)lossThresholdForStopping;
-(unsigned long long)epochsPerBatch;
-(double)probThreshold;
@end

