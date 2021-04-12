/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@protocol OS_dispatch_workloop;
@class TransparencyLogSessionDelegate, NSURLSession, NSObject;

@interface TransparencyLogSession : NSObject {

	unsigned long long _fetchCount;
	TransparencyLogSessionDelegate* _delegate;
	NSURLSession* _backgroundSession;
	NSURLSession* _foregroundSession;
	NSObject*<OS_dispatch_workloop> _callbackWorkloop;
	NSObject*<OS_dispatch_workloop> _networkingWorkloop;

}

@property (retain) NSURLSession * backgroundSession;                                //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (retain) NSURLSession * foregroundSession;                                //@synthesize foregroundSession=_foregroundSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> callbackWorkloop;                //@synthesize callbackWorkloop=_callbackWorkloop - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> networkingWorkloop;              //@synthesize networkingWorkloop=_networkingWorkloop - In the implementation block
@property (retain) TransparencyLogSessionDelegate * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long fetchCount;                                   //@synthesize fetchCount=_fetchCount - In the implementation block
+(void)dispatchToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 allowEmptyData:(BOOL)arg3 error:(id)arg4 ;
-(void)setCallbackWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(TransparencyLogSessionDelegate *)delegate;
-(void)setDelegate:(TransparencyLogSessionDelegate *)arg1 ;
-(NSObject*<OS_dispatch_workloop>)callbackWorkloop;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(NSURLSession *)backgroundSession;
-(NSURLSession *)foregroundSession;
-(void)setForegroundSession:(NSURLSession *)arg1 ;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setNetworkingWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)networkingWorkloop;
-(id)createAuthenticatedBackgroundSession:(id)arg1 delegateQueue:(id)arg2 ;
-(id)createAuthenticatedForegroundSession;
-(unsigned long long)fetchCount;
-(void)setFetchCount:(unsigned long long)arg1 ;
-(id)initWithWorkloop:(id)arg1 sessionDelegate:(id)arg2 ;
-(void)cancelDownloadId:(id)arg1 ;
@end

