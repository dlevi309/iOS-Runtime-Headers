/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface VCDispatchTimer : VCObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_source> _timer;
	int _intervalSeconds;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) id callbackBlock;              //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(void)stop;
-(void)start;
-(BOOL)isRunning;
-(id)callbackBlock;
-(id)initWithIntervalSeconds:(int)arg1 callbackBlock:(/*^block*/id)arg2 clientQueue:(id)arg3 ;
-(id)initWithIntervalSeconds:(int)arg1 callbackBlock:(/*^block*/id)arg2 ;
@end

