/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRITask.h>

@class NSArray, NSString, NSDate;

@interface TRIRetargetAllTask : TRIBaseTask <TRITask> {

	NSArray* _nextTasks;

}

@property (nonatomic,retain) NSArray * nextTasks;                                              //@synthesize nextTasks=_nextTasks - In the implementation block
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
-(id)serialize;
-(void)encodeWithCoder:(id)arg1 ;
-(int)taskType;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)nextTasks;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)setNextTasks:(NSArray *)arg1 ;
@end

