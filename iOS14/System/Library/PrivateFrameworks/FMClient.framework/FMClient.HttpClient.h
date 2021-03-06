/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

