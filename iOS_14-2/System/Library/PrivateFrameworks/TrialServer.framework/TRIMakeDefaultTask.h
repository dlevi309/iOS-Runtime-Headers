/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIActivateTreatmentBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>

@class TRIMetric, NSString, NSArray, NSDate;

@interface TRIMakeDefaultTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {

	TRIMetric* _treatmentMetric;
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
-(id)metrics;
-(id)serialize;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_asPersistedTask;
-(id)_nextTasksForRunStatus:(int)arg1 ;
-(int)makeDefaultForNamespace:(id)arg1 experiment:(id)arg2 context:(id)arg3 ;
-(id)runTaskUsingContext:(id)arg1 experiment:(id)arg2 ;
@end

