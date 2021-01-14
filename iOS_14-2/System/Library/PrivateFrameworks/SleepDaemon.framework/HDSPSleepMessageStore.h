/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@class HDSPEnvironment, NSMutableDictionary, NSString;

@interface HDSPSleepMessageStore : NSObject <HDSPEnvironmentAware> {

	os_unfair_lock_s _syncLock;
	HDSPEnvironment* _environment;
	NSMutableDictionary* _recentMessages;

}

@property (nonatomic,readonly) os_unfair_lock_s syncLock;                         //@synthesize syncLock=_syncLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recentMessages;              //@synthesize recentMessages=_recentMessages - In the implementation block
@property (nonatomic,readonly) id<HKSPSyncAnchor> syncAnchor; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_locked_updateSyncAnchor;
-(id<HKSPSyncAnchor>)syncAnchor;
-(void)_lock_addSleepMessage:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)addSleepEventDueMessageWithEvent:(id)arg1 ;
-(id)_locked_syncAnchor;
-(NSMutableDictionary *)recentMessages;
-(id)initWithEnvironment:(id)arg1 ;
-(id)addSleepMessageOfType:(unsigned long long)arg1 ;
-(void)_restoreMessages;
-(HDSPEnvironment *)environment;
-(id)pendingMessagesForSyncAnchor:(id)arg1 ;
-(os_unfair_lock_s)syncLock;
@end

