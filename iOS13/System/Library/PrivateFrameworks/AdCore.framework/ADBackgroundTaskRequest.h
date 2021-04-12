/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(long long)delay;
-(void)setDelay:(long long)arg1 ;
-(BOOL)shouldDefer;
-(NSDate *)startDate;
-(id)dictionaryRepresentation;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)gracePeriod;
-(BOOL)isRepeating;
-(NSString *)requestIdentifier;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithID:(id)arg1 ;
-(void)setGracePeriod:(long long)arg1 ;
-(BOOL)allowBattery;
-(BOOL)taskIsDeferred;
-(void)startBackgroundDeferralCheckForTime:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)taskCanContinueForTime:(id)arg1 ;
-(void)endBackgroundDeferralCheck;
-(BOOL)deferTask;
-(void)setPropertyAsInteger:(id)arg1 value:(long long)arg2 ;
-(void)setRequireClassCData:(BOOL)arg1 ;
-(void)setRequireBuddyComplete:(BOOL)arg1 ;
-(BOOL)continueTask;
-(BOOL)finishTask;
-(void)setAllowBattery:(BOOL)arg1 ;
-(void)setRequiresNetworkConnectivity:(BOOL)arg1 ;
-(void)setIsCPUIntensive:(BOOL)arg1 ;
-(id)initWithCriteria:(id)arg1 ID:(id)arg2 activity:(id)arg3 ;
-(id)copyBackgroundTaskAgentCriteria;
-(void)_backgroundDeferralCheck:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)taskIsContinuing;
-(long long)backgroundTaskRetryCount;
-(BOOL)requiresNetworkConnectivity;
-(BOOL)requireSleep;
-(void)setPropertyAsDouble:(id)arg1 value:(double)arg2 ;
-(double)getPropertyAsDouble:(id)arg1 ;
-(void)setRequireSleep:(BOOL)arg1 ;
-(void)setIsRepeating:(BOOL)arg1 ;
-(BOOL)isCPUIntensive;
-(BOOL)requireBuddyComplete;
-(BOOL)requireClassCData;
-(void)setBackgroundTaskRetryCount:(long long)arg1 ;
-(void)setPropertyAsString:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsString:(id)arg1 ;
-(long long)getPropertyAsInteger:(id)arg1 ;
-(void)setPropertyAsDate:(id)arg1 value:(id)arg2 ;
-(id)getPropertyAsDate:(id)arg1 ;
-(BOOL)performDeferralCheck;
-(void)setPerformDeferralCheck:(BOOL)arg1 ;
@end

