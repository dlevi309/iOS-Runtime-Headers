/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSMutableDictionary, NSString;

@interface FigHTTPRequestSessionDataDelegate : NSObject <NSURLSessionDataDelegate> {

	NSMutableDictionary* _taskToFigHTTPRequest;
	OpaqueFigReentrantMutexRef _taskToFigHTTPRequestMutex;
	unsigned char _doesIgnoreDidReceiveResponseDisposition;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithResponseDispositionOption:(BOOL)arg1 ;
-(FigRetainProxyRef)_copyAndLockRequestForTask:(id)arg1 ;
-(void)_registerFigHTTPRequest:(OpaqueFigHTTPRequestRef)arg1 forDataTask:(id)arg2 ;
-(void)_deregisterFigHTTPRequestForDataTask:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)dealloc;
@end

