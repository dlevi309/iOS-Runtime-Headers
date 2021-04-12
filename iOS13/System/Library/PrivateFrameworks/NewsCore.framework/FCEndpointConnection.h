/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager;
@class NSURLSession, NSURL, FCAsyncSerialQueue, NSString;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCCoreConfigurationObserving> {

	id<FCCoreConfigurationManager> _configurationManager;
	NSURLSession* _session;
	NSURL* _baseURL;
	FCAsyncSerialQueue* _requestSerialQueue;

}

@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                           //@synthesize session=_session - In the implementation block
@property (copy) NSURL * baseURL;                                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * requestSerialQueue;                        //@synthesize requestSerialQueue=_requestSerialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_CAPIBaseURLStringFromConfiguration:(id)arg1 ;
+(id)_errorForStatus:(long long)arg1 url:(id)arg2 ;
+(id)_errorByUpdatingRetryStatusForError:(id)arg1 ;
-(NSURL *)baseURL;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(FCAsyncSerialQueue *)requestSerialQueue;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id)initWithConfigurationManager:(id)arg1 ;
-(id)initWithConfigurationManager:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2 ;
-(void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 requiresMescalSigning:(BOOL)arg7 callbackQueue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 requiresMescalSigning:(BOOL)arg6 callbackQueue:(id)arg7 completion:(/*^block*/id)arg8 ;
@end

