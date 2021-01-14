/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/GEODataSession.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class GEODataURLSessionList, NSObject, NSOperationQueue, NSMutableDictionary, NSString;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEODataSession> {

	GEODataURLSessionList* _urlSessions;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSOperationQueue* _sessionIsolationOperationQueue;
	NSMutableDictionary* _sessionTasks;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;
	unsigned _nextSessionIdentifier;
	int _symptomsAlternateAdviceToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEODataURLSessionList * urlSessions;                            //@synthesize urlSessions=_urlSessions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;                  //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * sessionIsolationOperationQueue;              //@synthesize sessionIsolationOperationQueue=_sessionIsolationOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sessionTasks;                             //@synthesize sessionTasks=_sessionTasks - In the implementation block
@property (assign,nonatomic) unsigned nextSessionIdentifier;                                   //@synthesize nextSessionIdentifier=_nextSessionIdentifier - In the implementation block
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)tearDown;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id)createNewURLSessionWithRequest:(id)arg1 ;
-(void)_configureTask:(id)arg1 withRequest:(id)arg2 ;
-(id)taskForURLSession:(id)arg1 task:(id)arg2 ;
-(id)urlSessionForRequest:(id)arg1 ;
-(NSOperationQueue *)sessionIsolationOperationQueue;
-(id)init;
-(GEODataURLSessionList *)urlSessions;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_considerRetryingDueToAlternateAdvice;
-(NSMutableDictionary *)sessionTasks;
-(void)setNextSessionIdentifier:(unsigned)arg1 ;
-(NSString *)description;
-(BOOL)_wifiAssistRetryEnabled;
-(id)removeTaskForURLSession:(id)arg1 task:(id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)didReceiveMemoryPressureWarning;
-(unsigned)nextSessionIdentifier;
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(double)_wifiAssistRetryDelay;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(void)pruneInactiveSessions;
-(id)activeSessionIdentifiers;
-(void)dealloc;
@end

