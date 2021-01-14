/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchUserQuotaOperationCallbacks.h>

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks> {

	/*^block*/id _fetchUserQuotaCompletionBlock;
	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;                                                  //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (nonatomic,readonly) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id fetchUserQuotaCompletionBlock;                                                     //@synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(id)fetchUserQuotaCompletionBlock;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(unsigned long long)quotaAvailable;
-(void)setFetchUserQuotaCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3 ;
@end

