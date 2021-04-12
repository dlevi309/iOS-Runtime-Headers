/*
* Generated on Thursday, January 14, 2021 at 2:22:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<PLForegroundMonitorDelegate>)delegate;
-(void)_applicationChangeToBG:(id)arg1 ;
-(void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1 ;
-(void)setDelegate:(id<PLForegroundMonitorDelegate>)arg1 ;
-(void)_applicationChangeToFG:(id)arg1 ;
-(void)_locked_applicationDidMoveToBackground:(id)arg1 ;
-(void)_locked_applicationDidMoveToForeground:(id)arg1 ;
-(void)dealloc;
@end

