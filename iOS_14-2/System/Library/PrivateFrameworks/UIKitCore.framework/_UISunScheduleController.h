/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMapTable, GEOAlmanac, NSTimer;

@interface _UISunScheduleController : NSObject {

	NSMapTable* _observers;
	GEOAlmanac* _almanac;
	BOOL _hasTimeZoneLocation;
	CGSize _timeZoneLocation;
	BOOL _inScheduleTime;
	NSTimer* _nextEventTimer;
	double _sunsetAbsolute;
	double _sunriseAbsolute;

}

@property (getter=isInScheduleTime,nonatomic,readonly) BOOL inScheduleTime; 
-(void)forceUpdate;
-(id)init;
-(void)_timeZoneChange;
-(void)_updateGeoCity;
-(void)_invalidateNextEventTimer;
-(void)_updateStatusWithAbsoluteTime:(double)arg1 ;
-(void)_updateSunriseSunsetTimesRelativeTo:(double)arg1 ;
-(void)_updateInScheduleTime:(BOOL)arg1 ;
-(void)_setNextEventTimerToAbsoluteTime:(double)arg1 ;
-(void)_notifyChange;
-(void)removeObserver:(id)arg1 ;
-(id)nextTransition:(BOOL)arg1 ;
-(BOOL)isInScheduleTime;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_updateStatus;
-(void)_significantTimeChange;
-(void)dealloc;
@end

