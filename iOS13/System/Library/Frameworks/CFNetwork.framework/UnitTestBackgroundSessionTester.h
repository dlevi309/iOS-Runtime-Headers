/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSURLSession, NSURLSessionDataTask, NSObject, NSString;

@interface UnitTestBackgroundSessionTester : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* session;
	NSURLSessionDataTask* task;
	NSObject*<OS_dispatch_semaphore> sema;
	int timeout;
	BackgroundTaskServerTrustTestResult* result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithConfiguration:(id)arg1 result:(BackgroundTaskServerTrustTestResult*)arg2 ;
-(void)startTaskWithURL:(const char*)arg1 ;
@end

