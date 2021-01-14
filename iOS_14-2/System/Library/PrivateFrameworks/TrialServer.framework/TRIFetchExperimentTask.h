/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIExperimentBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@protocol TRITaskAttributing;
@class NSString, NSArray, NSDate;

@interface TRIFetchExperimentTask : TRIExperimentBaseTask <TRIRetryableTask, TRIMetricsProviding> {

	id<TRITaskAttributing> _taskAttributing;
	int retryCount;

}

@property (assign,nonatomic) int retryCount; 
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg1 ;
+(id)taskWithExperimentDeployment:(id)arg1 taskAttributing:(id)arg2 ;
-(id)metrics;
-(id)serialize;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(id)dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)runEnqueueHandlerUsingContext:(id)arg1 ;
-(void)runDequeueHandlerUsingContext:(id)arg1 ;
-(id)_nextTasksForRunStatus:(int)arg1 ;
-(id)initWithExperimentDeployment:(id)arg1 taskAttributing:(id)arg2 ;
@end

