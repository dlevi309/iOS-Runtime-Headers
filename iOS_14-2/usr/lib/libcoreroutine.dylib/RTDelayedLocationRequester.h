/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTDelayedLocationRequesterDelegate, OS_dispatch_queue;
@class RTLocationManager, RTTimerManager, RTTimer, NSObject, NSDate;

@interface RTDelayedLocationRequester : NSObject {

	id<RTDelayedLocationRequesterDelegate> _delegate;
	RTLocationManager* _locationManager;
	RTTimerManager* _timerManager;
	RTTimer* _delayTimer;
	RTTimer* _activeTimer;
	double _maxHorizontalAccuracy;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _fireDate;
	NSDate* _activeStartDate;

}

@property (nonatomic,readonly) RTLocationManager * locationManager;                        //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTTimerManager * timerManager;                              //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) RTTimer * delayTimer;                                         //@synthesize delayTimer=_delayTimer - In the implementation block
@property (nonatomic,retain) RTTimer * activeTimer;                                        //@synthesize activeTimer=_activeTimer - In the implementation block
@property (nonatomic,readonly) double maxHorizontalAccuracy;                               //@synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * fireDate;                                            //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,retain) NSDate * activeStartDate;                                     //@synthesize activeStartDate=_activeStartDate - In the implementation block
@property (nonatomic,retain) id<RTDelayedLocationRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSDate *)fireDate;
-(RTLocationManager *)locationManager;
-(void)shutdown;
-(double)maxHorizontalAccuracy;
-(void)_onActiveTimerExpiry;
-(void)_updateFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)shutdownWithHandler:(/*^block*/id)arg1 ;
-(id<RTDelayedLocationRequesterDelegate>)delegate;
-(id)initWithLocationManager:(id)arg1 maxHorizontalAccuracy:(double)arg2 queue:(id)arg3 ;
-(void)setActiveTimer:(RTTimer *)arg1 ;
-(void)_onDelayTimerExpiry;
-(void)setDelegate:(id<RTDelayedLocationRequesterDelegate>)arg1 ;
-(void)_startUpdatingLocation;
-(void)_onLocation:(id)arg1 ;
-(RTTimerManager *)timerManager;
-(void)setDelayTimer:(RTTimer *)arg1 ;
-(void)updateFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)updateFireDate:(id)arg1 ;
-(void)_shutdownWithHandler:(/*^block*/id)arg1 ;
-(void)onLocationNotification:(id)arg1 ;
-(NSDate *)activeStartDate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithLocationManager:(id)arg1 timerManager:(id)arg2 maxHorizontalAccuracy:(double)arg3 queue:(id)arg4 ;
-(void)_stopUpdatingLocation;
-(void)setActiveStartDate:(NSDate *)arg1 ;
-(void)_updateDelayTimer;
-(RTTimer *)activeTimer;
-(RTTimer *)delayTimer;
@end

