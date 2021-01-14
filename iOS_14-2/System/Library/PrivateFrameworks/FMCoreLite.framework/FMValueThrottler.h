/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@protocol FMScheduler, FMCancelable;
@class NSMutableSet;

@interface FMValueThrottler : NSObject {

	double _throttleInterval;
	id<FMScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<FMCancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<FMCancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<FMScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,retain) id value;                                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id)init;
-(id<FMScheduler>)updateScheduler;
-(void)setValue:(id)arg1 ;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<FMCancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(double)throttleInterval;
-(void)setValueUpdateCancelationToken:(id<FMCancelable>)arg1 ;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<FMScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
-(id)value;
-(void)dealloc;
@end

