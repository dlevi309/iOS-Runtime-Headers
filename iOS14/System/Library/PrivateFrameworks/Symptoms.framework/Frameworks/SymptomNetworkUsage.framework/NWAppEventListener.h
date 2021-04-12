/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 ;
-(void)setAppStateDelegate:(id<NWAppStateEventListenerDelegate>)arg1 ;
-(void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 state:(unsigned)arg4 ;
-(void)_applicationStateMonitorInit;
-(id<NWAppStateEventListenerDelegate>)appStateDelegate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

