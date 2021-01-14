/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class NSMutableDictionary, NSString;

@interface SBWakeLogger : NSObject {

	os_unfair_lock_s _lock;
	BOOL _trackingWake;
	unsigned _timesyncService;
	unsigned _backlightService;
	long long _homeButtonType;
	NSMutableDictionary* _wakeSouceToEventDict;
	long long _activeWakeLoggerSource;

}

@property (assign,nonatomic) BOOL trackingWake;                                          //@synthesize trackingWake=_trackingWake - In the implementation block
@property (assign,nonatomic) long long homeButtonType;                                   //@synthesize homeButtonType=_homeButtonType - In the implementation block
@property (assign,nonatomic) unsigned timesyncService;                                   //@synthesize timesyncService=_timesyncService - In the implementation block
@property (assign,nonatomic) unsigned backlightService;                                  //@synthesize backlightService=_backlightService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * wakeSouceToEventDict;                 //@synthesize wakeSouceToEventDict=_wakeSouceToEventDict - In the implementation block
@property (assign,nonatomic) long long activeWakeLoggerSource;                           //@synthesize activeWakeLoggerSource=_activeWakeLoggerSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeWakeSourceDescription; 
+(id)sharedInstance;
-(void)setHomeButtonType:(long long)arg1 ;
-(long long)homeButtonType;
-(long long)activeWakeLoggerSource;
-(void)setWakeSouceToEventDict:(NSMutableDictionary *)arg1 ;
-(void)setBacklightService:(unsigned)arg1 ;
-(id)init;
-(void)wakeMayBegin:(long long)arg1 withTimestamp:(unsigned long long)arg2 ;
-(NSMutableDictionary *)wakeSouceToEventDict;
-(NSString *)activeWakeSourceDescription;
-(void)setActiveWakeLoggerSource:(long long)arg1 ;
-(void)wakeDidBegin:(long long)arg1 ;
-(void)setTimesyncService:(unsigned)arg1 ;
-(void)setTrackingWake:(BOOL)arg1 ;
-(unsigned)backlightService;
-(void)lockDidBegin;
-(unsigned)timesyncService;
-(BOOL)trackingWake;
-(void)_lock_wakeDidBegin:(long long)arg1 ;
-(void)wakeDidEnd;
-(void)dealloc;
@end

