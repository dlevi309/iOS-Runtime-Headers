/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSURLSession, NSObject, NSString;

@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate> {

	NSMutableDictionary* _taskToRequest;
	NSURLSession* _session;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_registerRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3 ;
-(void)_unregisterRequestForDataTask:(id)arg1 ;
-(id)_lookupRequestForDataTask:(id)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(BOOL*)arg3 ;
-(int)_cancelRequestID:(unsigned long long)arg1 ;
@end

