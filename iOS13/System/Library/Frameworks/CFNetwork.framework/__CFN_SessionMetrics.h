/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/_NSURLSessionEventDelegate.h>

@protocol _NSURLSessionEventDelegate;
@class NSUUID, NSString;

@interface __CFN_SessionMetrics : NSObject <_NSURLSessionEventDelegate> {

	id<_NSURLSessionEventDelegate> delegate;
	NSUUID* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSUUID * UUID;                         //@synthesize UUID=_UUID - In the implementation block
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)transactionEnd:(id)arg1 reason:(unsigned long long)arg2 absoluteTime:(double)arg3 ;
-(void)transactionResponseEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4 ;
-(void)transactionResponseBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3 ;
-(void)transactionResponseHeaderEnd:(id)arg1 response:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4 ;
-(void)transactionResponseBegin:(id)arg1 absoluteTime:(double)arg2 ;
-(void)transactionRequestEnd:(id)arg1 size:(long long)arg2 transferSize:(long long)arg3 absoluteTime:(double)arg4 ;
-(void)transactionRequestBody:(id)arg1 data:(id)arg2 absoluteTime:(double)arg3 ;
-(void)transactionRequestHeaderEnd:(id)arg1 request:(id)arg2 size:(long long)arg3 absoluteTime:(double)arg4 ;
-(void)transactionRequestBegin:(id)arg1 onConnection:(id)arg2 absoluteTime:(double)arg3 ;
-(void)transactionCacheLookupEnd:(id)arg1 cachedResponse:(id)arg2 absoluteTime:(double)arg3 ;
-(void)transactionCacheLookupBegin:(id)arg1 absoluteTime:(double)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)delegateEvent:(SEL)arg1 ;
-(void)delegateBegin:(SEL)arg1 ;
-(void)delegateEnd:(SEL)arg1 ;
-(void)taskCreate:(id)arg1 request:(id)arg2 ;
-(void)taskCreate:(id)arg1 pointer:(unsigned long long)arg2 withRequest:(id)arg3 fromSession:(id)arg4 absoluteTime:(double)arg5 ;
-(void)sessionDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)sessionDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)sessionDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)transactionCreate:(id)arg1 withRequest:(id)arg2 fromTask:(id)arg3 absoluteTime:(double)arg4 ;
-(void)taskComplete:(id)arg1 withError:(id)arg2 absoluteTime:(double)arg3 ;
-(void)taskSuspend:(id)arg1 absoluteTime:(double)arg2 ;
-(void)taskResume:(id)arg1 absoluteTime:(double)arg2 ;
-(void)taskCompletionHandlerEvent:(id)arg1 absoluteTime:(double)arg2 ;
-(void)taskDelegateEnd:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)taskDelegateBegin:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)taskDelegateEvent:(id)arg1 selector:(SEL)arg2 absoluteTime:(double)arg3 ;
-(void)connectionEnd:(id)arg1 absoluteTime:(double)arg2 ;
-(void)connectionEstablish:(id)arg1 properties:(id)arg2 absoluteTime:(double)arg3 ;
-(void)connectionWait:(id)arg1 absoluteTime:(double)arg2 ;
-(void)connectionBegin:(id)arg1 fromTransaction:(id)arg2 properties:(id)arg3 absoluteTime:(double)arg4 ;
-(void)sessionDestroy:(id)arg1 absoluteTime:(double)arg2 ;
-(void)sessionCreate:(id)arg1 pointer:(unsigned long long)arg2 absoluteTime:(double)arg3 ;
@end

