/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol OS_dispatch_queue, EFObserver;
@class BKSApplicationStateMonitor, NSObject, EFObservable;

@interface MFAppStateMonitor : NSObject {

	unsigned _appState;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	EFObservable*<EFObserver> _observable;

}

@property (nonatomic,readonly) EFObservable * appStateObservable; 
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isForeground;
-(id)initWithBundleId:(id)arg1 ;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(EFObservable *)appStateObservable;
@end

