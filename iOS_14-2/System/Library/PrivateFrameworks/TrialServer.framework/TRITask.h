/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

@class NSString, NSArray, NSDate;


@protocol TRITask <NSObject,NSSecureCoding>
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@required
+(id)parseFromData:(id)arg1;
-(id)serialize;
-(NSArray *)tags;
-(void)setStartTime:(id)arg1;
-(NSArray *)dependencies;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(NSString *)taskName;
-(NSDate *)startTime;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
-(void)runEnqueueHandlerUsingContext:(id)arg1;
-(void)runDequeueHandlerUsingContext:(id)arg1;
-(id<TRITaskQueueStateProviding>)stateProvider;
-(void)setStateProvider:(id)arg1;

@end

