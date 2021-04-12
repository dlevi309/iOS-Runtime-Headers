/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id<NAScheduler>)updateScheduler;
-(id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2 ;
-(id)initWithThrottleInterval:(double)arg1 ;
-(id<NACancelable>)valueUpdateCancelationToken;
-(void)_enqueueValueUpdateIfNecessary;
-(void)setValueUpdateCancelationToken:(id<NACancelable>)arg1 ;
-(double)throttleInterval;
-(void)_notifyObserversOfValueUpdate;
-(NSMutableSet *)observerBlocks;
-(void)setUpdateScheduler:(id<NAScheduler>)arg1 ;
-(id)observeValueChangesWithBlock:(/*^block*/id)arg1 ;
-(void)flushValueChanges;
-(BOOL)hasPendingValueChange;
-(void)setValue:(id)arg1 notifyObservers:(BOOL)arg2 ;
@end

