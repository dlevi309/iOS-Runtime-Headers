/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, NSString, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSURLSession, NSObject, NSSet, NSURLSessionConfiguration;

@interface PKWebService : NSObject <NSURLSessionTaskDelegate> {

	ACAccountStore* _accountStore;
	unsigned long long _taskIDCounter;
	NSString* _webServiceSessionMarker;
	NSOperationQueue* _delegateOperationQueue;
	NSMutableDictionary* _webServiceTasks;
	NSMutableDictionary* _diagnosticReasonsByTaskID;
	NSMutableArray* _diagnosticReasons;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _diagnosticReasonsQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSSet* _sensitiveKeys;

}

@property (readonly) NSURLSessionConfiguration * sessionConfiguration; 
@property (nonatomic,readonly) NSString * webServiceSessionMarker; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedCookieStorage;
-(id)init;
-(void)invalidate;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_accountStore;
-(id)urlSession;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)addDiagnosticReason:(id)arg1 ;
-(void)removeDiagnosticReason:(id)arg1 ;
-(unsigned long long)nextTaskID;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)refreshSessionWithConfiguration:(id)arg1 ;
-(void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)forbiddenErrorWithResponse:(id)arg1 ;
-(BOOL)canBypassTrustExtendedValidation;
-(void)logResponse:(id)arg1 withData:(id)arg2 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(/*^block*/id)arg3 ;
-(id)logFacility;
-(void)resetWebServiceSessionMarker;
-(void)setUrlSession:(id)arg1 ;
-(void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1 ;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1 ;
-(id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2 ;
-(void)logRequest:(id)arg1 ;
-(void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1 ;
-(BOOL)_trustPassesExtendedValidation:(SecTrustRef)arg1 ;
-(NSString *)webServiceSessionMarker;
-(id)_redactLogsWithData:(id)arg1 ;
-(void)_redactLogsFromJSONObject:(id)arg1 ;
-(unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1 ;
-(void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(/*^block*/id)arg2 ;
@end

