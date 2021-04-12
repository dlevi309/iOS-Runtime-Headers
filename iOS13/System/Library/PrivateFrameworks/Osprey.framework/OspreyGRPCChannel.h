/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSURL, NSMutableData, NSMapTable, NSObject, NSString;

@interface OspreyGRPCChannel : NSObject <NSURLSessionTaskDelegate> {

	NSURLSession* _session;
	NSURL* _baseURL;
	NSMutableData* _receivedData;
	NSMapTable* _taskToContext;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _useCompression;
	BOOL _forceHTTPv2;
	/*^block*/id _connectionMetricsHandler;

}

@property (assign,nonatomic) BOOL useCompression;                    //@synthesize useCompression=_useCompression - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                       //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
@property (nonatomic,copy) id connectionMetricsHandler;              //@synthesize connectionMetricsHandler=_connectionMetricsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeStreamTask:(id)arg3 ;
-(void)URLSession:(id)arg1 readClosedForStreamTask:(id)arg2 ;
-(void)URLSession:(id)arg1 writeClosedForStreamTask:(id)arg2 ;
-(void)URLSession:(id)arg1 betterRouteDiscoveredForStreamTask:(id)arg2 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 ;
-(void)performRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)useCompression;
-(void)setUseCompression:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 configuration:(id)arg2 queue:(id)arg3 ;
-(void)setConnectionMetricsHandler:(id)arg1 ;
-(id)connectionMetricsHandler;
-(void)performStreamingRequest:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performBidirectionalStreamingRequest:(id)arg1 context:(id)arg2 ;
-(void)preconnect;
-(BOOL)_entitledForMPTCP;
-(id)_lengthPrefixedData:(id)arg1 error:(id*)arg2 ;
-(void)_readMoreFromStreamTask:(id)arg1 ;
@end

