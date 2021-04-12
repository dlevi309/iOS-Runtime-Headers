/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject {

	NSMutableSet* _watcherWrappers;
	unsigned long long _availabilityState;
	unsigned long long _simulatedAvailablityState;

}

@property (nonatomic,retain) NSMutableSet * watcherWrappers;                  //@synthesize watcherWrappers=_watcherWrappers - In the implementation block
@property (assign) unsigned long long availabilityState;                      //@synthesize availabilityState=_availabilityState - In the implementation block
@property (assign) unsigned long long simulatedAvailablityState;              //@synthesize simulatedAvailablityState=_simulatedAvailablityState - In the implementation block
+(void)initialize;
+(id)sharedMonitor;
-(void)_systemMayNowBeReady;
-(unsigned long long)currentAvailabilityState;
-(unsigned long long)simulatedAvailablityState;
-(void)simulateFirstUnlockForUnitTests;
-(void)resetToUnavailableForUnitTests;
-(void)simulateBuddyCompletedForUnitTests;
-(unsigned long long)availabilityState;
-(void)removeNotifications;
-(void)setWatcherWrappers:(NSMutableSet *)arg1 ;
-(void)_clearVanishedWatchers;
-(NSMutableSet *)watcherWrappers;
-(BOOL)registerWatcher:(id)arg1 ;
-(void)setSimulatedAvailablityState:(unsigned long long)arg1 ;
-(id)_init;
-(void)setAvailabilityState:(unsigned long long)arg1 ;
-(void)_logAvailabilityDescription;
-(void)dealloc;
@end

