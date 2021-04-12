/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)prettyDescription;
-(id<FPDProcessMonitorDelegate>)delegate;
-(void)_handleAppStateChange:(id)arg1 ;
-(id)_createAppMonitor;
-(void)process:(int)arg1 didBecomeForeground:(BOOL)arg2 ;
-(void)_updateMonitoredBundleIDs;
-(void)addPIDToObserve:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(BOOL)isForeground;
-(void)setDelegate:(id<FPDProcessMonitorDelegate>)arg1 ;
-(id)description;
-(void)_addPIDToObserve:(int)arg1 ;
-(void)invalidate;
-(void)removePIDToObserve:(int)arg1 ;
-(void)_removePIDToObserve:(int)arg1 ;
-(id)initWithExcludedBundleIDs:(id)arg1 ;
@end

