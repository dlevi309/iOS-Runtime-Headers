/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_source;
@class NSInvocation, NSObject;

@interface _UIDelayedPresentationContext : NSObject {

	BOOL _enableUserInteraction;
	long long _reqcnt;
	NSInvocation* _presentInvocation;
	/*^block*/id _cancellationHandler;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,copy) id cancellationHandler;                          //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSInvocation * presentInvocation;              //@synthesize presentInvocation=_presentInvocation - In the implementation block
-(void)setCancellationHandler:(id)arg1 ;
-(long long)requestCount;
-(id)delayingController;
-(id)invocationTarget;
-(void)setPresentInvocation:(NSInvocation *)arg1 ;
-(long long)incrementRequestCount;
-(long long)decrementRequestCount;
-(id)initWithTimeout:(double)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(NSInvocation *)presentInvocation;
-(id)cancellationHandler;
@end

