/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 bundleIdentifierFallback;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 credential;
	 urlSessionFactory;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 session;
	 sessionLock;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end

