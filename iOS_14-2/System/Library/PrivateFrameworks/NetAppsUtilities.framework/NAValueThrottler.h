/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/


@protocol NAScheduler, NACancelable;
@class NSMutableSet;

@interface NAValueThrottler : NSObject {

	double _throttleInterval;
	id<NAScheduler> _updateScheduler;
	id _value;
	NSMutableSet* _observerBlocks;
	id<NACancelable> _valueUpdateCancelationToken;

}

@property (nonatomic,readonly) NSMutableSet * observerBlocks;                           //@synthesize observerBlocks=_observerBlocks - In the implementation block
@property (nonatomic,retain) id<NACancelable> valueUpdateCancelationToken;              //@synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken - In the implementation block
@property (nonatomic,readonly) double throttleInterval;                                 //@synthesize throttleInterval=_throttleInterval - In the implementation block
@property (nonatomic,retain) id<NAScheduler> updateScheduler;                           //@synthesize updateScheduler=_updateScheduler - In the implementation block
@property (nonatomic,readonly) id value;                                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingValueChange; 
-(id)init;
-(id<NAScheduler>)updateScheduler;
-(void)setValue:(id)arg1 ;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<NACancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(double)throttleInterval;
-(void)setValueUpdateCancelationToken:(id<NACancelable>)arg1 ;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<NAScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
-(id)value;
-(void)dealloc;
-(void)setValue:(id)arg1 notifyObservers:(BOOL)arg2 ;
@end

