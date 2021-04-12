/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSMutableDictionary, NSString;

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	BOOL _requiresSigning;
	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSMutableDictionary* _pendingSessionOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)sharedSigningSession;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)dataTaskWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)bodyTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dataTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initRequiringSigning:(BOOL)arg1 ;
-(id)_enqueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sessionQueue_enqueueTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2 ;
-(void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(id)bodyTaskWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

