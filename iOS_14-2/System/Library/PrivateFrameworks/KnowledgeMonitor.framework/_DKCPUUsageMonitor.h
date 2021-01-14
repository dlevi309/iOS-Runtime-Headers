/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface _DKCPUUsageMonitor : _DKMonitor {

	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _lastUserTick;
	unsigned long long _lastIdleTick;
	unsigned long long _lastSysTick;
	unsigned long long _lastCPUUsageLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;               //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long lastUserTick;                   //@synthesize lastUserTick=_lastUserTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastIdleTick;                   //@synthesize lastIdleTick=_lastIdleTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastSysTick;                    //@synthesize lastSysTick=_lastSysTick - In the implementation block
@property (assign,nonatomic) unsigned long long lastCPUUsageLevel;              //@synthesize lastCPUUsageLevel=_lastCPUUsageLevel - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(id)loadState;
-(void)saveState;
-(void)synchronouslyReflectCurrentValue;
-(unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)start;
-(BOOL)updateCPUUsagePercentage:(unsigned long long*)arg1 ;
-(unsigned long long)lastCPUUsageLevel;
-(void)stop;
-(unsigned long long)getCurrentCPUUsageLevel;
-(void)setLastIdleTick:(unsigned long long)arg1 ;
-(void)setLastUserTick:(unsigned long long)arg1 ;
-(void)setCurrentCPUUsageLevel:(unsigned long long)arg1 ;
-(void)setLastCPUUsageLevel:(unsigned long long)arg1 ;
-(unsigned long long)lastIdleTick;
-(unsigned long long)lastSysTick;
-(unsigned long long)lastUserTick;
-(void)setLastSysTick:(unsigned long long)arg1 ;
-(void)getCPUTicksForUser:(unsigned long long*)arg1 system:(unsigned long long*)arg2 idle:(unsigned long long*)arg3 ;
@end

