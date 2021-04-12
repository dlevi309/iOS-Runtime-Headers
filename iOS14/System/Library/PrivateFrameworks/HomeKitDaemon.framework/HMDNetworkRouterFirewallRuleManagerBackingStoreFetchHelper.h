/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NAPromise, HMFActivity, HMBProcessingOptions, CKOperationGroup, NSDate, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging> {

	NAPromise* _promise;
	BOOL _finished;
	HMFActivity* _activity;
	HMBProcessingOptions* _options;
	CKOperationGroup* _operationGroup;
	double _retryIntervalSeconds;
	unsigned long long _retryCount;
	NSDate* _operationStartTime;

}

@property (nonatomic,readonly) HMFActivity * activity;                         //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) HMBProcessingOptions * options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;              //@synthesize operationGroup=_operationGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry; 
@property (assign,nonatomic) double retryIntervalSeconds;                      //@synthesize retryIntervalSeconds=_retryIntervalSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                    //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSDate * operationStartTime;                      //@synthesize operationStartTime=_operationStartTime - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                  //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(unsigned long long)maxRetryCount;
+(unsigned long long)__integerForPreferenceKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
+(unsigned long long)maxOperationDurationSeconds;
-(BOOL)finished;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(void)setOperationStartTime:(NSDate *)arg1 ;
-(HMFActivity *)activity;
-(void)setShouldRetry:(BOOL)arg1 ;
-(HMBProcessingOptions *)options;
-(NSDate *)operationStartTime;
-(CKOperationGroup *)operationGroup;
-(BOOL)shouldRetry;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(id)initWithActivity:(id)arg1 options:(id)arg2 container:(id)arg3 useAnonymousRequests:(BOOL)arg4 promise:(id)arg5 ;
-(void)setRetryIntervalSeconds:(double)arg1 ;
-(double)retryIntervalSeconds;
@end

