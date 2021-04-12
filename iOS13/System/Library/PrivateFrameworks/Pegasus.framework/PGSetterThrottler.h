/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PGSetterThrottler : NSObject {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	id _value;
	NSObject*<OS_dispatch_queue> _throttleQueue;
	id _throttledValue;
	BOOL _busy;
	BOOL _pending;

}

@property (nonatomic,retain) id value; 
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)_setValue;
-(id)initWithBlock:(/*^block*/id)arg1 usingQueue:(id)arg2 ;
@end

