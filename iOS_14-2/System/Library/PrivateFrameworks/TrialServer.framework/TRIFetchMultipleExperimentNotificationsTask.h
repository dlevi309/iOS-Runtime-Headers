/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@protocol TRITaskAttributing;
@class NSMutableArray, NSDate, NSSet, NSString, NSArray;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {

	NSMutableArray* _metrics;
	NSMutableArray* _nextTasks;
	NSDate* _startingFetchDateOverride;
	BOOL _rollbacksOnly;
	id<TRITaskAttributing> _taskAttributing;
	NSSet* _namespaceNames;
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
+(id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4 ;
-(id)metrics;
-(id)serialize;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(id)dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)taskName;
-(BOOL)isEqual:(id)arg1 ;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)_addMetric:(id)arg1 ;
-(id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4 ;
-(id)_nameForNotificationType:(int)arg1 ;
-(id)_getNextTaskForExperiment:(id)arg1 database:(id)arg2 taskQueue:(id)arg3 ;
-(void)_addNextTask:(id)arg1 ;
-(BOOL)_processExperiment:(id)arg1 experimentDatabase:(id)arg2 namespaceDatabase:(id)arg3 taskQueue:(id)arg4 paths:(id)arg5 ;
-(void)updateStatusForNamespacesWithContext:(id)arg1 ;
-(BOOL)_checkIfAnyTreatmentPresent:(id)arg1 usingContext:(id)arg2 ;
-(id)initWithStartingFetchDateOverride:(id)arg1 container:(int)arg2 team:(id)arg3 rollbacksOnly:(BOOL)arg4 withNamespaceNames:(id)arg5 ;
-(long long)nextTaskCount;
@end

