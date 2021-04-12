/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSString;

@interface IMURLSession : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	BOOL _requireIDSHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSessionRequiringIDSHost;
+(id)sessionWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3 ;
+(id)sharedSession;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3 ;
-(void)performRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(void)performRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

