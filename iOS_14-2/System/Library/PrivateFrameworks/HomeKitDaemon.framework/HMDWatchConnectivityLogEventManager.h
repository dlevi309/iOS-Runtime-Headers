/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMFTimer, HMFUnfairLock, NSString;

@interface HMDWatchConnectivityLogEventManager : HMFObject <HMFTimerDelegate> {

	BOOL _hasCompleteReport;
	unsigned long long _watchAddedNotificationCountForCurrentIncompleteReport;
	unsigned long long _watchRemovedNotificationCountForCurrentIncompleteReport;
	unsigned long long _watchAddedNotificationCountForLastCompleteReport;
	unsigned long long _watchRemovedNotificationCountForLastCompleteReport;
	HMFTimer* _watchConnectivityLogEventManagerTimer;
	HMFUnfairLock* _lock;

}

@property (assign,nonatomic) BOOL hasCompleteReport;                                                                  //@synthesize hasCompleteReport=_hasCompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchAddedNotificationCountForCurrentIncompleteReport;                //@synthesize watchAddedNotificationCountForCurrentIncompleteReport=_watchAddedNotificationCountForCurrentIncompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCountForCurrentIncompleteReport;              //@synthesize watchRemovedNotificationCountForCurrentIncompleteReport=_watchRemovedNotificationCountForCurrentIncompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchAddedNotificationCountForLastCompleteReport;                     //@synthesize watchAddedNotificationCountForLastCompleteReport=_watchAddedNotificationCountForLastCompleteReport - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCountForLastCompleteReport;                   //@synthesize watchRemovedNotificationCountForLastCompleteReport=_watchRemovedNotificationCountForLastCompleteReport - In the implementation block
@property (nonatomic,retain) HMFTimer * watchConnectivityLogEventManagerTimer;                                        //@synthesize watchConnectivityLogEventManagerTimer=_watchConnectivityLogEventManagerTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                                  //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(HMFTimer *)watchConnectivityLogEventManagerTimer;
-(void)completeCurrentReport;
-(void)incrementWatchAddedNotificationCount;
-(void)incrementWatchRemovedNotificationCount;
-(HMDWatchConnectivityLogEventManagerSnapshot)currentWatchConnectivitySnapshot;
-(BOOL)hasCompleteReport;
-(void)setHasCompleteReport:(BOOL)arg1 ;
-(unsigned long long)watchAddedNotificationCountForCurrentIncompleteReport;
-(void)setWatchAddedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCountForCurrentIncompleteReport;
-(void)setWatchRemovedNotificationCountForCurrentIncompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchAddedNotificationCountForLastCompleteReport;
-(void)setWatchAddedNotificationCountForLastCompleteReport:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCountForLastCompleteReport;
-(void)setWatchRemovedNotificationCountForLastCompleteReport:(unsigned long long)arg1 ;
-(void)setWatchConnectivityLogEventManagerTimer:(HMFTimer *)arg1 ;
@end

