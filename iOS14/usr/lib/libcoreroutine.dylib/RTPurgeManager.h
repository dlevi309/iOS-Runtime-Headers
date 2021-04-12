/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@protocol OS_dispatch_source;
@class NSObject, RTDarwinNotificationHelper, NSArray, RTXPCActivityManager;

@interface RTPurgeManager : RTService {

	NSObject*<OS_dispatch_source> _memoryWarningDispatchSource;
	long long _pressureState;
	RTDarwinNotificationHelper* _notificationHelper;
	NSArray* _purgers;
	RTXPCActivityManager* _xpcActivityManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningDispatchSource;              //@synthesize memoryWarningDispatchSource=_memoryWarningDispatchSource - In the implementation block
@property (assign,nonatomic) long long pressureState;                                                //@synthesize pressureState=_pressureState - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;                        //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) NSArray * purgers;                                                      //@synthesize purgers=_purgers - In the implementation block
@property (nonatomic,readonly) RTXPCActivityManager * xpcActivityManager;                            //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
+(id)purgeTypeToString:(long long)arg1 ;
+(id)earliestAllowedRawLocationDateWithReferenceDate:(id)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(void)purge:(/*^block*/id)arg1 ;
-(id)init;
-(void)clearRoutineWithHandler:(/*^block*/id)arg1 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(void)_purge:(/*^block*/id)arg1 ;
-(NSArray *)purgers;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)dealloc;
-(id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 purgers:(id)arg3 xpcActivityManager:(id)arg4 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
-(void)handleLanguageChangeNotification;
-(void)onCoreLocationPrivacyReset;
-(void)_unregisterForMemoryPressureWarnings;
-(void)_registerForMemoryPressureWarnings;
-(void)_purgeWithType:(long long)arg1 referenceDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_handleLanguageChangeNotification;
-(NSObject*<OS_dispatch_source>)memoryWarningDispatchSource;
-(void)setMemoryWarningDispatchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPurgers:(NSArray *)arg1 ;
@end

