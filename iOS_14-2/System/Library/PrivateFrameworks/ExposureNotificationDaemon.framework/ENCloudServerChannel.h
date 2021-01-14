/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSURLSessionConfiguration, NSOperationQueue, NSObject, NSHTTPCookieStorage, NSMutableDictionary, NSString;

@interface ENCloudServerChannel : NSObject <NSURLSessionDelegate> {

	NSURLSession* _session;
	NSURLSessionConfiguration* _sessionConfig;
	NSURLSession* _sourceApplicationSession;
	NSURLSessionConfiguration* _sourceApplicationSessionConfig;
	NSOperationQueue* _queue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSHTTPCookieStorage* _cookieStorage;
	NSMutableDictionary* _requests;

}

@property (nonatomic,retain) NSURLSession * session;                                                  //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfig;                               //@synthesize sessionConfig=_sessionConfig - In the implementation block
@property (nonatomic,retain) NSURLSession * sourceApplicationSession;                                 //@synthesize sourceApplicationSession=_sourceApplicationSession - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * sourceApplicationSessionConfig;              //@synthesize sourceApplicationSessionConfig=_sourceApplicationSessionConfig - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHTTPCookieStorage * cookieStorage;                                     //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requests;                                          //@synthesize requests=_requests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)session;
-(NSMutableDictionary *)requests;
-(NSURLSessionConfiguration *)sessionConfig;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setRequests:(NSMutableDictionary *)arg1 ;
-(NSOperationQueue *)queue;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(void)setSessionConfig:(NSURLSessionConfiguration *)arg1 ;
-(NSHTTPCookieStorage *)cookieStorage;
-(void)enqueueRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSURLSession *)sourceApplicationSession;
-(void)setSourceApplicationSession:(NSURLSession *)arg1 ;
-(NSURLSessionConfiguration *)sourceApplicationSessionConfig;
-(void)setSourceApplicationSessionConfig:(NSURLSessionConfiguration *)arg1 ;
@end

