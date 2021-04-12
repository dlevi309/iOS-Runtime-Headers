/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKFetchWebAuthTokenOperationCallbacks.h>

@class NSString, CKFetchWebAuthTokenOperationInfo;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks> {

	/*^block*/id _fetchWebAuthTokenCompletionBlock;
	NSString* _APIToken;
	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                                                                 //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,readonly) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKFetchWebAuthTokenOperationInfo * operationInfo; 
@property (nonatomic,copy) NSString * APIToken;                                                                     //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id fetchWebAuthTokenCompletionBlock;                                                     //@synthesize fetchWebAuthTokenCompletionBlock=_fetchWebAuthTokenCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
+(SEL)daemonCallbackCompletionSelector;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSString *)APIToken;
-(void)setAPIToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(id)fetchWebAuthTokenCompletionBlock;
-(void)setFetchWebAuthTokenCompletionBlock:(id)arg1 ;
-(void)handleOperationDidCompleteWithWebAuthToken:(id)arg1 metrics:(id)arg2 error:(id)arg3 ;
-(id)initWithAPIToken:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
@end

