/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRITask.h>

@class NSString, NSDate, NSArray;

@interface TRIRotateSubjectIdTask : TRIBaseTask <TRITask> {

	BOOL _forceUpdate;
	NSString* _deviceId;
	NSDate* _nextRotationDate;

}

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
+(id)taskWithDeviceId:(id)arg1 nextRotationDate:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(id)serialize;
-(NSArray *)tags;
-(void)encodeWithCoder:(id)arg1 ;
-(int)taskType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(id)initWithDeviceId:(id)arg1 nextRotationDate:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(id)runTaskUsingContext:(id)arg1 ;
@end

