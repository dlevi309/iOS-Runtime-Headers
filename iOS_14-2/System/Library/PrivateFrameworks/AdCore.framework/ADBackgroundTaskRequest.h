/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@protocol OS_xpc_object;
@class NSString, NSObject, NSDate;

@interface ADBackgroundTaskRequest : NSObject {

	BOOL _performDeferralCheck;
	NSString* _requestIdentifier;
	NSObject*<OS_xpc_object> _activity;
	NSObject*<OS_xpc_object> _criteria;
	NSDate* _startDate;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> criteria;                //@synthesize criteria=_criteria - In the implementation block
@property (assign,nonatomic) BOOL performDeferralCheck;                        //@synthesize performDeferralCheck=_performDeferralCheck - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long delay; 
@property (assign,nonatomic) BOOL requiresNetworkConnectivity; 
@property (assign,nonatomic) BOOL requireBuddyComplete; 
@property (assign,nonatomic) BOOL requireClassCData; 
@property (assign,nonatomic) BOOL allowBattery; 
@property (assign,nonatomic) BOOL requireSleep; 
@property (assign,nonatomic) BOOL isRepeating; 
@property (assign,nonatomic) long long backgroundTaskRetryCount; 
@property (assign,nonatomic) long long gracePeriod; 
@property (nonatomic,retain) NSString * priority; 
@property (assign,nonatomic) BOOL isCPUIntensive; 
@property (nonatomic,readonly) BOOL shouldDefer; 
-(id)dictionaryRepresentation;
-(BOOL)shouldDefer;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)requestIdentifier;
-(BOOL)isRepeating;
-(BOOL)taskIsDeferred;
-(BOOL)allowBattery;
-(BOOL)requiresNetworkConnectivity;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)taskIsContinuing;
-(NSObject*<OS_xpc_object>)activity;
-(BOOL)taskCanContinueForTime:(id)arg1 ;
-(NSDate *)startDate;
-(void)setDelay:(long long)arg1 ;
-(id)getPropertyAsString:(id)arg1 ;
-(void)setRequireSleep:(BOOL)arg1 ;
-(BOOL)deferTask;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(id)copyBackgroundTaskAgentCriteria;
-(BOOL)requireClassCData;
-(long long)backgroundTaskRetryCount;
-(void)setGracePeriod:(long long)arg1 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)requireBuddyComplete;
-(id)description;
-(long long)delay;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(void)setIsCPUIntensive:(BOOL)arg1 ;
-(void)setIsRepeating:(BOOL)arg1 ;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(void)setRequireClassCData:(BOOL)arg1 ;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(long long)gracePeriod;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setPerformDeferralCheck:(BOOL)arg1 ;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(BOOL)continueTask;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllowBattery:(BOOL)arg1 ;
-(void)endBackgroundDeferralCheck;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(BOOL)requireSleep;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(id)initWithID:(id)arg1 ;
-(NSString *)priority;
-(void)setRequireBuddyComplete:(BOOL)arg1 ;
-(BOOL)isCPUIntensive;
-(BOOL)performDeferralCheck;
-(void)setPriority:(NSString *)arg1 ;
-(id)getPropertyAsDate:(id)arg1 ;
-(BOOL)finishTask;
@end

