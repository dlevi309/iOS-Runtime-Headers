/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)tearDown;
-(id)taskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)downloadTaskWithRequest:(id)arg1 priority:(float)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)taskWithRequest:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(GEODataURLSessionList *)urlSessions;
-(id)urlSessionForRequest:(id)arg1 ;
-(id)activeSessionIdentifiers;
-(id)createNewURLSessionWithRequest:(id)arg1 ;
-(NSOperationQueue *)sessionIsolationOperationQueue;
-(unsigned)nextSessionIdentifier;
-(void)setNextSessionIdentifier:(unsigned)arg1 ;
-(NSMutableDictionary *)sessionTasks;
-(void)pruneInactiveSessions;
-(void)_considerRetryingDueToAlternateAdvice;
-(void)didReceiveMemoryPressureWarning;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(BOOL)_wifiAssistRetryEnabled;
-(double)_wifiAssistRetryDelay;
-(void)_configureTask:(id)arg1 withRequest:(id)arg2 ;
-(id)taskForURLSession:(id)arg1 task:(id)arg2 ;
-(id)removeTaskForURLSession:(id)arg1 task:(id)arg2 ;
@end

