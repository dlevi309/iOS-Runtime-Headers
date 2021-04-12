/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@protocol OS_dispatch_queue, NWAppStateEventListenerDelegate;
@class BKSApplicationStateMonitor, FBSDisplayLayoutMonitor, NSObject;

@interface NWAppEventListener : NSObject {

	BKSApplicationStateMonitor* appStateMonitor;
	FBSDisplayLayoutMonitor* displayLayoutMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	id<NWAppStateEventListenerDelegate> _appStateDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<NWAppStateEventListenerDelegate> appStateDelegate;              //@synthesize appStateDelegate=_appStateDelegate - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(id<NWAppStateEventListenerDelegate>)appStateDelegate;
-(void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned)arg4 ;
-(void)_applicationStateMonitorInit;
-(void)setAppStateDelegate:(id<NWAppStateEventListenerDelegate>)arg1 ;
@end

