/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface LightweightTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _callback;
	double _slotScaleFactor;
	unsigned long long _timerExpiryTargetSlot;
	unsigned long long _numSlots;
	unsigned _seqno;
	unsigned long long _nsecsPerSlot;
	unsigned long long _activeSlotBitmask;
	NSMutableArray* _entries[64];

}
-(BOOL)cancel:(unsigned long long)arg1 ;
-(unsigned long long)setRelativeTimer:(double)arg1 context:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg1 maxDelay:(double)arg2 precision:(double)arg3 callback:(/*^block*/id)arg4 ;
-(void)_handleTimerExpiry;
-(void)dealloc;
@end

