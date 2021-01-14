/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPSleepTrackerDelegate.h>
#import <libobjc.A.dylib/HDSPDeviceUnlockObserver.h>

@protocol HDSPSleepSessionManagerDelegate, HDSPSleepSessionPersistence;
@class HDSPDeviceUnlockMonitor, NSString;

@interface HDSPSleepSessionManager : NSObject <HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver> {

	os_unfair_lock_s _sessionLock;
	id<HDSPSleepSessionManagerDelegate> _delegate;
	id<HDSPSleepSessionPersistence> _persistence;
	HDSPDeviceUnlockMonitor* _deviceUnlockManager;

}

@property (nonatomic,readonly) id<HDSPSleepSessionPersistence> persistence;                    //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) HDSPDeviceUnlockMonitor * deviceUnlockManager;                  //@synthesize deviceUnlockManager=_deviceUnlockManager - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s sessionLock;                                   //@synthesize sessionLock=_sessionLock - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPSleepSessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_archivedSessionFile;
+(id)_archivedSessionDirectory;
-(id<HDSPSleepSessionPersistence>)persistence;
-(void)savePendingSessions;
-(os_unfair_lock_s)sessionLock;
-(id<HDSPSleepSessionManagerDelegate>)delegate;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(id)arg1 persistence:(id)arg2 ;
-(void)archiveSession:(id)arg1 ;
-(void)startSession;
-(void)setDelegate:(id<HDSPSleepSessionManagerDelegate>)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)_unprocessedSessions;
-(void)deviceHasBeenUnlocked;
-(HDSPDeviceUnlockMonitor *)deviceUnlockManager;
-(id)saveSession:(id)arg1 ;
-(void)sleepTracker:(id)arg1 didEndSession:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)sleepTrackerDidStartSession:(id)arg1 ;
-(void)_locked_savePendingSessions;
-(void)removeSessionDataFile;
-(void)stopSession;
-(BOOL)_hasUnprocessedSessions;
-(void)_waitForFirstUnlock;
@end

