/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class WLDeviceAuthentication, NSOperationQueue, NSURLSession, NSString;

@interface WLURLSessionController : NSObject <NSURLSessionDelegate> {

	WLDeviceAuthentication* _auth;
	NSOperationQueue* _delegateOperationQueue;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(BOOL)isValid;
-(NSURLSession *)urlSession;
-(void)invalidate;
-(void)dealloc;
-(id)initWithAuthentication:(id)arg1 ;
@end

