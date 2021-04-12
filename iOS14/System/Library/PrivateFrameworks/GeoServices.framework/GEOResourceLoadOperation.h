/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/GEOResourceLoadOperation.h>
@class NSData;


@protocol GEOResourceLoadOperation <NSObject,NSProgressReporting>
@property (assign,nonatomic) BOOL requiresWiFi; 
@property (assign,nonatomic) BOOL preferDirectNetworking; 
@property (nonatomic,readonly) NSData * data; 
@required
-(BOOL)preferDirectNetworking;
-(BOOL)requiresWiFi;
-(NSData *)data;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 eTag:(id)arg3 auditToken:(id)arg4 baseURL:(id)arg5 alternateURLs:(id)arg6 proxyURL:(id)arg7 log:(id)arg8;
-(void)setPreferDirectNetworking:(BOOL)arg1;
-(void)setRequiresWiFi:(BOOL)arg1;
-(void)cancel;

@end


@protocol OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;
@class NSData, NSURL, NSObject, NSURLSession, NSURLSessionTask, NSString, NSMutableData, GEOApplicationAuditToken, GEOReportedProgress, NSDate, NSProgress;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {

	NSURL* _url;
	NSURL* _proxyURL;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _eTag;
	NSMutableData* _data;
	BOOL _expectsPartialContent;
	GEOApplicationAuditToken* _auditToken;
	NSURL* _authProxyURL;
	os_unfair_lock_s _lock;
	BOOL _requiresWiFi;
	BOOL _preferDirectNetworking;
	GEOReportedProgress* _progress;
	NSObject*<OS_os_log> _log;
	NSString* _serviceAddress;
	NSDate* _starttime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresWiFi;                        //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL preferDirectNetworking;              //@synthesize preferDirectNetworking=_preferDirectNetworking - In the implementation block
@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) NSProgress * progress; 
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(BOOL)preferDirectNetworking;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)requiresWiFi;
-(NSProgress *)progress;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSData *)data;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 eTag:(id)arg3 auditToken:(id)arg4 baseURL:(id)arg5 alternateURLs:(id)arg6 proxyURL:(id)arg7 log:(id)arg8 ;
-(void)setPreferDirectNetworking:(BOOL)arg1 ;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

