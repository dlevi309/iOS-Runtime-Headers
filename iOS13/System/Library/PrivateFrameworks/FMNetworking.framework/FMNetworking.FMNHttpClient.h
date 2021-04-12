/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 bundleIdentifierFallback;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	??? urlComponents;
	 credential;
	 urlSessionFactory;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 session;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end

