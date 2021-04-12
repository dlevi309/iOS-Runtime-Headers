/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface NEIKEv2InformationalContext : NSObject {

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
-(id)description;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPrivateNotifies:(NSArray *)arg1 ;
-(void)setMaxRetries:(unsigned)arg1 ;
-(void)setRetryIntervalInMilliseconds:(unsigned long long)arg1 ;
-(unsigned)maxRetries;
-(void)sendCallbackSuccess:(BOOL)arg1 session:(id)arg2 ;
-(NSArray *)privateNotifies;
-(unsigned long long)retryIntervalInMilliseconds;
@end

