/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@protocol TRITask;
@class NSString, NSArray, NSDate;

@interface TRISequenceTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {

	id<TRITask> _task;
	id<TRITask> _dependentTask;

}

@property (readonly) id<TRITask> lastTask; 
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
+(id)task;
+(id)parseFromData:(id)arg1 ;
+(BOOL)_isTask:(id)arg1 equalTo:(id)arg2 ;
-(id)metrics;
-(id)serialize;
-(NSArray *)tags;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(id)dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSArray *)dependencies;
-(int)taskType;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)taskName;
-(NSDate *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(id<TRITask>)lastTask;
-(void)addTaskToEndOfSequence:(id)arg1 ;
-(id)initWithTask:(id)arg1 dependency:(id)arg2 ;
@end

