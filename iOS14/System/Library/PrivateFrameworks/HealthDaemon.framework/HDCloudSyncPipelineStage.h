/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncPipelineStage : HDCloudSyncOperation {

	BOOL _criticalFailureOnError;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (assign,nonatomic) BOOL criticalFailureOnError;                //@synthesize criticalFailureOnError=_criticalFailureOnError - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                 //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;              //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(BOOL)shouldLogAtOperationEnd;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(BOOL)criticalFailureOnError;
-(void)setCriticalFailureOnError:(BOOL)arg1 ;
@end

