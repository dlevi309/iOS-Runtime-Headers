/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlanProtocol.h>

@protocol PMLLinRegTrackerProtocol, PMLNoiseStrategy;
@class PMLTrainingStore, PMLSessionDescriptor, NSString;

@interface PMLLinRegTrainingPlan : NSObject <PMLPlanProtocol> {

	PMLTrainingStore* _store;
	id<PMLLinRegTrackerProtocol> _tracker;
	id<PMLNoiseStrategy> _noiseStrategy;
	double _skew;
	unsigned long long _positiveLabel;
	PMLSessionDescriptor* _sessionDescriptor;
	unsigned long long _maxSessionsLimit;
	unsigned long long _sessionsInBatch;
	BOOL _useOnlyAppleInternalSessions;
	NSString* _planId;

}

@property (nonatomic,readonly) PMLTrainingStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) id<PMLLinRegTrackerProtocol> tracker;                  //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,readonly) PMLSessionDescriptor * sessionDescriptor;              //@synthesize sessionDescriptor=_sessionDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSessionsLimit;                   //@synthesize maxSessionsLimit=_maxSessionsLimit - In the implementation block
@property (nonatomic,readonly) BOOL useOnlyAppleInternalSessions;                     //@synthesize useOnlyAppleInternalSessions=_useOnlyAppleInternalSessions - In the implementation block
@property (nonatomic,readonly) NSString * planId;                                     //@synthesize planId=_planId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)featureMatrixWithNoiseFromCovariates:(id)arg1 ;
+(id)_objectiveFeaturesWithNoiseFromCovariates:(id)arg1 objectives:(id)arg2 ;
-(id)init;
-(NSString *)description;
-(PMLTrainingStore *)store;
-(id<PMLLinRegTrackerProtocol>)tracker;
-(NSString *)planId;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(PMLSessionDescriptor *)sessionDescriptor;
-(id)runWhile:(/*^block*/id)arg1 didFinish:(BOOL*)arg2 ;
-(unsigned long long)maxSessionsLimit;
-(BOOL)train;
-(void)loadSessionsWithBlock:(/*^block*/id)arg1 ;
-(id)normalizeRegressor:(id)arg1 ;
-(void)runUntilDoneForTesting;
-(BOOL)useOnlyAppleInternalSessions;
-(id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(id)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 sessionDescriptor:(id)arg7 maxSessionsLimit:(unsigned long long)arg8 sessionsInBatch:(unsigned long long)arg9 useOnlyAppleInternalSessions:(BOOL)arg10 ;
@end

