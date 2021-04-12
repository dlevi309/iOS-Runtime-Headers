/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>
#import <HMFoundation/HMFNetMonitorDelegate.h>
#import <HMFoundation/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol HMFLocking, OS_dispatch_queue, HMFHTTPClientDelegate;
@class NSObject, HMFHTTPClientConfiguration, NSURL, HMFNetService, NSURLSession, HMFNetMonitor, NSOperationQueue, HMFExponentialBackoffTimer, NSString;

@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _reachable;
	BOOL _pinging;
	BOOL _allowAnonymousConnection;
	BOOL _active;
	HMFHTTPClientConfiguration* _configuration;
	NSURL* _baseURL;
	id<HMFHTTPClientDelegate> _delegate;
	HMFNetService* _netService;
	NSURLSession* _session;
	HMFNetMonitor* _reachabilityMonitor;
	NSOperationQueue* _reachabilityProbeQueue;
	HMFExponentialBackoffTimer* _delegatedPingTimer;

}

@property (nonatomic,readonly) NSURLSession * session;                                     //@synthesize session=_session - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                  //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * reachabilityMonitor;                        //@synthesize reachabilityMonitor=_reachabilityMonitor - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * reachabilityProbeQueue;                  //@synthesize reachabilityProbeQueue=_reachabilityProbeQueue - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * delegatedPingTimer;              //@synthesize delegatedPingTimer=_delegatedPingTimer - In the implementation block
@property (assign,getter=isPinging,nonatomic) BOOL pinging;                                //@synthesize pinging=_pinging - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                            //@synthesize reachable=_reachable - In the implementation block
@property (__weak) id<HMFHTTPClientDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSURL * baseURL;                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy,readonly) HMFNetService * netService;                            //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) unsigned long long options; 
@property (assign,nonatomic) BOOL allowAnonymousConnection;                                //@synthesize allowAnonymousConnection=_allowAnonymousConnection - In the implementation block
@property (copy,readonly) HMFHTTPClientConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(unsigned long long)options;
-(id<HMFHTTPClientDelegate>)delegate;
-(void)setDelegate:(id<HMFHTTPClientDelegate>)arg1 ;
-(NSURL *)baseURL;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSURLSession *)session;
-(HMFHTTPClientConfiguration *)configuration;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)attributeDescriptions;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(id)initWithBaseURL:(id)arg1 configuration:(id)arg2 ;
-(void)__initializeWithConfiguration:(id)arg1 ;
-(id)initWithService:(id)arg1 configuration:(id)arg2 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSOperationQueue *)reachabilityProbeQueue;
-(BOOL)requestClientReachabilityPingWithRetry:(BOOL)arg1 ;
-(BOOL)isPinging;
-(void)setPinging:(BOOL)arg1 ;
-(void)startDelegatedPingTimer;
-(void)stopDelegatedPingTimer;
-(HMFExponentialBackoffTimer *)delegatedPingTimer;
-(void)setDelegatedPingTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(void)startReachabilityProbe;
-(BOOL)allowAnonymousConnection;
-(id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithNetService:(id)arg1 options:(unsigned long long)arg2 ;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingRequests;
-(HMFNetService *)netService;
-(void)setAllowAnonymousConnection:(BOOL)arg1 ;
-(HMFNetMonitor *)reachabilityMonitor;
@end

