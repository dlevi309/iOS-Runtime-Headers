/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@class RTInvocationDispatcher, RTPlatform, RTUserSessionMonitor;

@interface RTAuthorizationManager : RTService {

	BOOL _supported;
	BOOL _enabled;
	BOOL _ready;
	RTInvocationDispatcher* _dispatcher;
	RTPlatform* _platform;
	RTUserSessionMonitor* _userSessionMonitor;

}

@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,getter=isSupported,nonatomic) BOOL supported;                //@synthesize supported=_supported - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isReady,nonatomic) BOOL ready;                        //@synthesize ready=_ready - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                            //@synthesize platform=_platform - In the implementation block
@property (retain) RTUserSessionMonitor * userSessionMonitor;                  //@synthesize userSessionMonitor=_userSessionMonitor - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)setup;
-(BOOL)isSupported;
-(RTPlatform *)platform;
-(void)_shutdown;
-(void)_setup;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)onUserSessionChangeNotification:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setReady:(BOOL)arg1 ;
-(BOOL)isReady;
-(void)setSupported:(BOOL)arg1 ;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isLocationServicesEnabled;
-(BOOL)isEnabled;
-(BOOL)shouldPersistLocations;
-(void)dealloc;
-(id)initWithPlatform:(id)arg1 userSessionMonitor:(id)arg2 ;
-(BOOL)isCoreRoutineLocationClientEnabled;
-(RTUserSessionMonitor *)userSessionMonitor;
-(void)fetchRoutineSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)updateRoutineEnabled:(BOOL)arg1 ;
-(void)handleAppResetChangeNotification;
-(void)setUserSessionMonitor:(RTUserSessionMonitor *)arg1 ;
@end

