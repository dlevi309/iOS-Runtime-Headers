/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>

@class NSDate, NSString, NSArray;

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask> {

	BOOL _failOnUnrecognizedExperiment;
	int retryCount;
	NSDate* _startTime;

}

@property (assign,nonatomic) BOOL failOnUnrecognizedExperiment;                                //@synthesize failOnUnrecognizedExperiment=_failOnUnrecognizedExperiment - In the implementation block
@property (assign,nonatomic) int retryCount; 
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime;                                                 //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg1 ;
+(id)taskWithExperimentId:(id)arg1 failOnUnrecognizedExperiment:(BOOL)arg2 ;
+(id)taskWithExperimentId:(id)arg1 startTime:(id)arg2 failOnUnrecognizedExperiment:(BOOL)arg3 ;
-(id)serialize;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)setFailOnUnrecognizedExperiment:(BOOL)arg1 ;
-(BOOL)failOnUnrecognizedExperiment;
-(BOOL)_purgeRolloutLayerIfNecessaryWithRecord:(id)arg1 fromAppContainer:(id)arg2 paths:(id)arg3 ;
@end

