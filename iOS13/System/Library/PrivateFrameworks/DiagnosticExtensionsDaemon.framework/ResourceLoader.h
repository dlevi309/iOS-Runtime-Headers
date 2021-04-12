/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSOperationQueue, NSURLSession, NSURLCache, NSString;

@interface ResourceLoader : NSObject <NSURLSessionDelegate> {

	NSOperationQueue* _queue;
	NSURLSession* _session;
	NSURLCache* _urlCache;

}

@property (nonatomic,retain) NSURLCache * urlCache;                 //@synthesize urlCache=_urlCache - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_localDateFormatter;
+(id)_rfc1123DateFormatter;
-(id)init;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)flushCache;
-(double)_simulatedLatency;
-(void)asynchronousDataFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setUrlCache:(NSURLCache *)arg1 ;
-(NSURLCache *)urlCache;
-(void)refreshCacheForRequest:(id)arg1 usingCachedResponse:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

