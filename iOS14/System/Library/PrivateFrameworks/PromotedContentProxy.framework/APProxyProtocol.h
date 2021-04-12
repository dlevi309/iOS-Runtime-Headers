/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy
*/

#import <CFNetwork/NSURLProtocol.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSThread, NSArray, NSURLSessionDataTask, APNSURLSessionDemultiplexer, NSString;

@interface APProxyProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSThread* _clientThread;
	NSArray* _modes;
	double _startTime;
	NSURLSessionDataTask* _task;
	APNSURLSessionDemultiplexer* _sessionDemux;
	long long _requestType;

}

@property (retain) NSThread * clientThread;                                 //@synthesize clientThread=_clientThread - In the implementation block
@property (retain) NSArray * modes;                                         //@synthesize modes=_modes - In the implementation block
@property (assign) double startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSURLSessionDataTask * task;                             //@synthesize task=_task - In the implementation block
@property (retain) APNSURLSessionDemultiplexer * sessionDemux;              //@synthesize sessionDemux=_sessionDemux - In the implementation block
@property (assign,nonatomic) long long requestType;                         //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)properties;
+(void)start;
+(void)stop;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)invalidateProxyDemultiplexerSessionForId:(id)arg1 ;
+(void)setProxyURL:(id)arg1 ;
-(NSArray *)modes;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRequestType:(long long)arg1 ;
-(NSURLSessionDataTask *)task;
-(long long)requestType;
-(void)startLoading;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setStartTime:(double)arg1 ;
-(void)setClientThread:(NSThread *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSThread *)clientThread;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)stopLoading;
-(double)startTime;
-(void)dealloc;
-(void)setModes:(NSArray *)arg1 ;
-(APNSURLSessionDemultiplexer *)sessionDemux;
-(void)setSessionDemux:(APNSURLSessionDemultiplexer *)arg1 ;
-(id)_currentRunLoopModes;
@end

