/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)data;
-(void)cancel;
-(void)setRequiresWiFi:(BOOL)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 log:(id)arg6;
-(BOOL)requiresWiFi;
-(BOOL)preferDirectNetworking;
-(void)setPreferDirectNetworking:(BOOL)arg1;

@end


@protocol OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;
@class NSData, NSURL, NSObject, NSURLSession, NSURLSessionTask, NSMutableData, GEOApplicationAuditToken, GEOReportedProgress, NSString, NSProgress;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {

	NSURL* _url;
	NSURL* _proxyURL;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSMutableData* _data;
	BOOL _expectsPartialContent;
	GEOApplicationAuditToken* _auditToken;
	NSURL* _authProxyURL;
	os_unfair_lock_s _lock;
	BOOL _requiresWiFi;
	BOOL _preferDirectNetworking;
	GEOReportedProgress* _progress;
	NSObject*<OS_os_log> _log;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
@property (assign,nonatomic) BOOL requiresWiFi;                        //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL preferDirectNetworking;              //@synthesize preferDirectNetworking=_preferDirectNetworking - In the implementation block
@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(NSData *)data;
-(void)cancel;
-(NSProgress *)progress;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 auditToken:(id)arg3 baseURL:(id)arg4 proxyURL:(id)arg5 log:(id)arg6 ;
-(BOOL)requiresWiFi;
-(BOOL)preferDirectNetworking;
-(void)setPreferDirectNetworking:(BOOL)arg1 ;
@end

