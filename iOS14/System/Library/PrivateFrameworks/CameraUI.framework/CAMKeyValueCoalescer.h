/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CAMKeyValueCoalescer : NSObject {

	double __interval;
	/*^block*/id __handler;
	NSObject*<OS_dispatch_source> _coalescingTimer;
	NSMutableDictionary* __values;
	NSMutableDictionary* __previousValues;
	NSObject*<OS_dispatch_queue> __coalescingQueue;

}

@property (nonatomic,readonly) double _interval;                                           //@synthesize _interval=__interval - In the implementation block
@property (nonatomic,copy,readonly) id _handler;                                           //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> coalescingTimer;                //@synthesize coalescingTimer=_coalescingTimer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _values;                              //@synthesize _values=__values - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _previousValues;                      //@synthesize _previousValues=__previousValues - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coalescingQueue;              //@synthesize _coalescingQueue=__coalescingQueue - In the implementation block
-(void)flush;
-(NSMutableDictionary *)_previousValues;
-(NSMutableDictionary *)_values;
-(id)initWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_pushCoalescedValues;
-(void)coalesceValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setCoalescingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)coalescingTimer;
-(NSObject*<OS_dispatch_queue>)_coalescingQueue;
-(double)_interval;
-(id)_handler;
@end

