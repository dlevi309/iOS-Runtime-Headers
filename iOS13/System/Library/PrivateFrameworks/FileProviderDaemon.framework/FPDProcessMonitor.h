/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;
@class NSObject, BKSApplicationStateMonitor, NSMutableDictionary, NSCountedSet, NSMutableSet, NSSet;

@interface FPDProcessMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	BKSApplicationStateMonitor* _monitor;
	NSMutableDictionary* _bundleIDForPID;
	NSCountedSet* _bundleIDs;
	NSCountedSet* _pids;
	NSMutableSet* _foregroundBundleIDs;
	NSSet* _excludedBundleIDs;
	id<FPDProcessMonitorDelegate> _delegate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (__weak) id<FPDProcessMonitorDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
-(id)description;
-(void)invalidate;
-(id<FPDProcessMonitorDelegate>)delegate;
-(void)setDelegate:(id<FPDProcessMonitorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(BOOL)isForeground;
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)prettyDescription;
-(id)_createAppMonitor;
-(void)process:(int)arg1 didBecomeForeground:(BOOL)arg2 ;
-(void)_handleAppStateChange:(id)arg1 ;
-(void)_updateMonitoredBundleIDs;
-(void)_addPIDToObserve:(int)arg1 ;
-(void)_removePIDToObserve:(int)arg1 ;
-(id)initWithExcludedBundleIDs:(id)arg1 ;
-(void)addPIDToObserve:(int)arg1 ;
-(void)removePIDToObserve:(int)arg1 ;
@end

