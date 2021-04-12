/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLConnectionInternal, NSString, NSURLRequest;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {

	NSURLConnectionInternal* _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
+(id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3 ;
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
+(void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)canHandleRequest:(id)arg1 ;
+(unsigned long long)_sweeperInterval;
+(void)_setSweeperInterval:(unsigned long long)arg1 ;
+(void)_setMIMETypesWithNoSizeLimit:(id)arg1 ;
+(void)_setCollectsTimingData:(BOOL)arg1 ;
+(BOOL)_collectsTimingData;
+(void)_collectTimingDataWithOptions:(unsigned long long)arg1 ;
+(unsigned long long)_timingDataOptions;
+(CFRunLoopRef)resourceLoaderRunLoop;
+(void)withResourceLoaderRunLoopAsync:(/*^block*/id)arg1 ;
+(void)_setLoaderThreadPriority:(int)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(void)start;
-(NSURLRequest *)originalRequest;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6 ;
-(void)setDelegateQueue:(id)arg1 ;
-(NSURLRequest *)currentRequest;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)download;
-(id)connectionProperties;
-(void)setDefersCallbacks:(BOOL)arg1 ;
-(BOOL)defersCallbacks;
-(id)_dlInternal;
-(id)_cfInternal;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(id)_timingData;
@end

