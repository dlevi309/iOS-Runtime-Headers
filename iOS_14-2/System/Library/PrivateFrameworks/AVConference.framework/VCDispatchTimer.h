/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface VCDispatchTimer : VCObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _intervalSeconds;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) id callbackBlock;              //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                //@synthesize running=_running - In the implementation block
-(id)callbackBlock;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(void)dealloc;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 clientQueue:(id)arg3 ;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 ;
@end

