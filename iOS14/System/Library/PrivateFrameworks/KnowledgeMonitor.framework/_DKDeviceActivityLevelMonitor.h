/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol _CDLocalContext, OS_dispatch_source;
@class NSDate, _CDContextualKeyPath, NSObject;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _initialized;
	BOOL _limitsImposed;
	BOOL _limitsInitialized;
	int _siriToken;
	unsigned long long _lastInUseStatus;
	unsigned long long _currentInUseStatus;
	NSDate* _lastSetActiveDate;
	id<_CDLocalContext> _context;
	_CDContextualKeyPath* _lastUseDate;
	_CDContextualKeyPath* _inUseStatus;
	NSObject*<OS_dispatch_source> _debounceTimer;
	unsigned long long _userActivityNotificationHandle;
	_CDContextualKeyPath* _keyPathForReducedPerfStateStatus;
	_CDContextualKeyPath* _keyPathForDeviceToppingOff;

}

@property (assign,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                     //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) unsigned long long lastInUseStatus;                                   //@synthesize lastInUseStatus=_lastInUseStatus - In the implementation block
@property (assign,nonatomic) unsigned long long currentInUseStatus;                                //@synthesize currentInUseStatus=_currentInUseStatus - In the implementation block
@property (nonatomic,retain) NSDate * lastSetActiveDate;                                           //@synthesize lastSetActiveDate=_lastSetActiveDate - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * lastUseDate;                                   //@synthesize lastUseDate=_lastUseDate - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * inUseStatus;                                   //@synthesize inUseStatus=_inUseStatus - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> debounceTimer;                          //@synthesize debounceTimer=_debounceTimer - In the implementation block
@property (assign,nonatomic) unsigned long long userActivityNotificationHandle;                    //@synthesize userActivityNotificationHandle=_userActivityNotificationHandle - In the implementation block
@property (assign,nonatomic) int siriToken;                                                        //@synthesize siriToken=_siriToken - In the implementation block
@property (assign,nonatomic) BOOL limitsImposed;                                                   //@synthesize limitsImposed=_limitsImposed - In the implementation block
@property (assign,nonatomic) BOOL limitsInitialized;                                               //@synthesize limitsInitialized=_limitsInitialized - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * keyPathForReducedPerfStateStatus;              //@synthesize keyPathForReducedPerfStateStatus=_keyPathForReducedPerfStateStatus - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * keyPathForDeviceToppingOff;                    //@synthesize keyPathForDeviceToppingOff=_keyPathForDeviceToppingOff - In the implementation block
+(id)entitlements;
+(void)initialize;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(unsigned long long)arg1 ;
-(BOOL)enabled;
-(void)synchronouslyReflectCurrentValue;
-(_CDContextualKeyPath *)inUseStatus;
-(void)updateActivityInUseState:(unsigned long long)arg1 ;
-(void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)arg1 ;
-(BOOL)limitsImposed;
-(void)start;
-(void)setInUseStatus:(_CDContextualKeyPath *)arg1 ;
-(void)setLimitsInitialized:(BOOL)arg1 ;
-(_CDContextualKeyPath *)lastUseDate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)updateActivityDateAndInUseState:(unsigned long long)arg1 ;
-(void)setLastInUseStatus:(unsigned long long)arg1 ;
-(void)setKeyPathForDeviceToppingOff:(_CDContextualKeyPath *)arg1 ;
-(id<_CDLocalContext>)context;
-(void)stop;
-(int)siriToken;
-(void)deactivate;
-(_CDContextualKeyPath *)keyPathForDeviceToppingOff;
-(BOOL)limitsInitialized;
-(BOOL)initialized;
-(NSObject*<OS_dispatch_source>)debounceTimer;
-(void)setSiriToken:(int)arg1 ;
-(unsigned long long)lastInUseStatus;
-(void)setLastActivityDate:(id)arg1 ;
-(unsigned long long)userActivityNotificationHandle;
-(void)setKeyPathForReducedPerfStateStatus:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)keyPathForReducedPerfStateStatus;
-(void)setLimitsImposed:(BOOL)arg1 ;
-(void)setCurrentInUseStatus:(unsigned long long)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setDebounceTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setLastUseDate:(_CDContextualKeyPath *)arg1 ;
-(void)handleUserActivity:(int)arg1 ;
-(unsigned long long)currentInUseStatus;
-(NSDate *)lastSetActiveDate;
-(void)setLastSetActiveDate:(NSDate *)arg1 ;
-(void)setUserActivityNotificationHandle:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
@end

