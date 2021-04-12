/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_dispatch_queue;
@class NSObject, LAContext, NSData, NSError;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _localAuthenticationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	LAContext* _completedContext;
	NSData* _completedCredential;
	NSError* _completedError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> localAuthenticationQueue;              //@synthesize localAuthenticationQueue=_localAuthenticationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                         //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) LAContext * completedContext;                                       //@synthesize completedContext=_completedContext - In the implementation block
@property (nonatomic,retain) NSData * completedCredential;                                       //@synthesize completedCredential=_completedCredential - In the implementation block
@property (nonatomic,retain) NSError * completedError;                                           //@synthesize completedError=_completedError - In the implementation block
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)beginLocalAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateLocalAuthenticationContexts;
-(void)_invokeCompletionHandlerForInvalidation;
-(NSObject*<OS_dispatch_queue>)localAuthenticationQueue;
-(void)setLocalAuthenticationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(LAContext *)completedContext;
-(void)setCompletedContext:(LAContext *)arg1 ;
-(NSData *)completedCredential;
-(void)setCompletedCredential:(NSData *)arg1 ;
-(NSError *)completedError;
-(void)setCompletedError:(NSError *)arg1 ;
@end

