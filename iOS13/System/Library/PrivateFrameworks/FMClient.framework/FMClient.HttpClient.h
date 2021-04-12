/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 endpoint;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 $__lazy_storage_$_session;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end

