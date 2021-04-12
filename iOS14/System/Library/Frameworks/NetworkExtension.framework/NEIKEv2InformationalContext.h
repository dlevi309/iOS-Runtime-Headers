/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2RequestContext.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {

	unsigned _maxRetries;
	NSArray* _privateNotifies;
	unsigned long long _retryIntervalInMilliseconds;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSArray * privateNotifies;                                   //@synthesize privateNotifies=_privateNotifies - In the implementation block
@property (assign,nonatomic) unsigned maxRetries;                                         //@synthesize maxRetries=_maxRetries - In the implementation block
@property (assign,nonatomic) unsigned long long retryIntervalInMilliseconds;              //@synthesize retryIntervalInMilliseconds=_retryIntervalInMilliseconds - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                  //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                                   //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(unsigned)maxRetries;
-(void)setCallback:(id)arg1 ;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(NSArray *)privateNotifies;
-(unsigned long long)retryIntervalInMilliseconds;
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithPrivateNotifies:(id)arg1 maxRetries:(unsigned)arg2 retryIntervalMilliseconds:(unsigned long long)arg3 callbackQueue:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)setPrivateNotifies:(NSArray *)arg1 ;
-(void)setMaxRetries:(unsigned)arg1 ;
-(void)setRetryIntervalInMilliseconds:(unsigned long long)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

