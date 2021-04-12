/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTEventCoalescer.h>

@protocol AVTEventCoalescer
@required
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2;
-(void)eventDidOccur:(/*^block*/id)arg1;

@end


@protocol AVTUILogger, OS_dispatch_queue;
@class NSString, NSObject;

@interface AVTEventCoalescer : NSObject <AVTEventCoalescer> {

	BOOL _eventDeliveryScheduled;
	/*^block*/id _eventHandler;
	NSString* _eventLabel;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _delay;

}

@property (nonatomic,copy) id eventHandler;                                         //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) NSString * eventLabel;                                   //@synthesize eventLabel=_eventLabel - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL eventDeliveryScheduled;                           //@synthesize eventDeliveryScheduled=_eventDeliveryScheduled - In the implementation block
-(double)delay;
-(id<AVTUILogger>)logger;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 logger:(id)arg3 ;
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)eventDidOccur:(/*^block*/id)arg1 ;
-(void)setEventLabel:(NSString *)arg1 ;
-(NSString *)eventLabel;
-(BOOL)eventDeliveryScheduled;
-(void)setEventDeliveryScheduled:(BOOL)arg1 ;
@end

