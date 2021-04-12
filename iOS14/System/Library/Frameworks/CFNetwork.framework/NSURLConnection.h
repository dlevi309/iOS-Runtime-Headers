/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(CFRunLoopRef)resourceLoaderRunLoop;
+(void)_setMIMETypesWithNoSizeLimit:(id)arg1 ;
+(unsigned long long)_sweeperInterval;
+(void)_setLoaderThreadPriority:(int)arg1 ;
+(void)_collectTimingDataWithOptions:(unsigned long long)arg1 ;
+(id)connectionWithRequest:(id)arg1 delegate:(id)arg2 ;
+(unsigned long long)_timingDataOptions;
+(void)_setSweeperInterval:(unsigned long long)arg1 ;
+(void)_setCollectsTimingData:(BOOL)arg1 ;
+(BOOL)_collectsTimingData;
+(BOOL)canHandleRequest:(id)arg1 ;
-(NSURLRequest *)currentRequest;
-(void)download;
-(id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)_dlInternal;
-(id)_cfInternal;
-(id)_timingData;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)connectionProperties;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3 ;
-(NSURLRequest *)originalRequest;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
-(BOOL)defersCallbacks;
-(void)start;
-(void)setDefersCallbacks:(BOOL)arg1 ;
-(void)_resumeLoading;
-(void)setDelegateQueue:(id)arg1 ;
-(void)_suspendLoading;
-(NSString *)description;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)cancel;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
@end

