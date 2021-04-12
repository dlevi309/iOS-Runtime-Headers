/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;
@class NSMutableSet, NSObject, BKSApplicationStateMonitor;

@interface PLForegroundMonitor : NSObject {

	NSMutableSet* _foregroundBundleIDs;
	NSObject*<OS_dispatch_queue> _applicationStateMonitorQueue;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	id<PLForegroundMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PLForegroundMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<PLForegroundMonitorDelegate>)delegate;
-(void)setDelegate:(id<PLForegroundMonitorDelegate>)arg1 ;
-(void)_applicationChangeToFG:(id)arg1 ;
-(void)_applicationChangeToBG:(id)arg1 ;
-(void)_locked_applicationDidMoveToForeground:(id)arg1 ;
-(void)_locked_applicationDidMoveToBackground:(id)arg1 ;
-(void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1 ;
@end

