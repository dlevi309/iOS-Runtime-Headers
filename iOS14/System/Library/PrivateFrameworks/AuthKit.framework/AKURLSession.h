/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSMutableDictionary, NSString;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSMutableDictionary* _tasksByIdentifier;
	BOOL __usesAppleIDContext;

}

@property (assign,nonatomic) BOOL _usesAppleIDContext;              //@synthesize _usesAppleIDContext=__usesAppleIDContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeAllCachedResponses;
+(id)sharedURLSession;
+(id)sharedAnisetteFreeURLSession;
+(id)_createURLSessionUsesAppleIDContext:(BOOL)arg1 ;
+(id)sharedCacheReliantAnisetteFreeSession;
+(id)sharedCacheEnabledURLSession;
+(id)_urlBagCache;
+(id)sharedCacheEnabledAnisetteFreeSession;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)_unsafe_completeTask:(id)arg1 withError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_unsafe_retryTaskIfPossible:(id)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)cancelDataTask:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(BOOL)_usesAppleIDContext;
-(BOOL)_isRecoverableError:(id)arg1 ;
-(id)beginDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_URLSession;
-(void)set_usesAppleIDContext:(BOOL)arg1 ;
-(id)defaultSessionObjectWithConfiguration:(id)arg1 ;
-(id)beginAuthenticationDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

