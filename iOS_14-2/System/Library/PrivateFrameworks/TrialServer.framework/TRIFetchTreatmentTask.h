/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRITreatmentBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>

@class NSString, NSArray, NSDate;

@interface TRIFetchTreatmentTask : TRITreatmentBaseTask <TRIRetryableTask> {

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
+(id)taskWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 ;
-(id)serialize;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)dependencies;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)runEnqueueHandlerUsingContext:(id)arg1 ;
-(void)runDequeueHandlerUsingContext:(id)arg1 ;
-(id)_nextTasksForRunStatus:(int)arg1 ;
-(int)_processTreatment:(id)arg1 database:(id)arg2 paths:(id)arg3 ;
@end

