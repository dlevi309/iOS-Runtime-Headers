/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSURLHandling.h>

@protocol OS_dispatch_queue;
@class AMSURLSession, NSObject, AMSSigningSecurityService, NSString;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {

	AMSURLSession* session;
	NSObject*<OS_dispatch_queue> _responsePingQueue;
	NSObject*<OS_dispatch_queue> _metricsQueue;
	AMSSigningSecurityService* _signingService;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responsePingQueue;              //@synthesize responsePingQueue=_responsePingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;                   //@synthesize metricsQueue=_metricsQueue - In the implementation block
@property (nonatomic,readonly) AMSSigningSecurityService * signingService;                //@synthesize signingService=_signingService - In the implementation block
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)reversePushSamplingPercentageForTask:(id)arg1 ;
+(double)_randomDouble;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(id)init;
-(void)_pingURL:(id)arg1 session:(id)arg2 bag:(id)arg3 ;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3 ;
-(BOOL)_shouldEnableReversePushForTask:(id)arg1 ;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
-(id)handleResponse:(id)arg1 task:(id)arg2 ;
-(void)_setResponseCookiesFromResponse:(id)arg1 taskInfo:(id)arg2 ;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)responsePingQueue;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(AMSSigningSecurityService *)signingService;
-(BOOL)_URLIsTrustedFromRequest:(id)arg1 bag:(id)arg2 ;
-(void)reportMetricsForTaskInfo:(id)arg1 decodedObject:(id)arg2 ;
-(void)setResponsePingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3 ;
@end

