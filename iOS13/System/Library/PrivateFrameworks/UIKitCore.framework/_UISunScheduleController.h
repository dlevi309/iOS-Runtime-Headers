/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)_significantTimeChange;
-(void)_notifyChange;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(BOOL)isInScheduleTime;
-(void)forceUpdate;
-(id)nextTransition:(BOOL)arg1 ;
-(void)_updateStatus;
-(void)_timeZoneChange;
-(void)_updateGeoCity;
-(void)_invalidateNextEventTimer;
-(void)_updateStatusWithAbsoluteTime:(double)arg1 ;
-(void)_updateSunriseSunsetTimesRelativeTo:(double)arg1 ;
-(void)_updateInScheduleTime:(BOOL)arg1 ;
-(void)_setNextEventTimerToAbsoluteTime:(double)arg1 ;
@end

