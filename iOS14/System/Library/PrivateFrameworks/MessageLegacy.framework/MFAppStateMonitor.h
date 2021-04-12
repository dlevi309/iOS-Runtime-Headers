/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isForeground;
-(void)_updateApplicationState:(id)arg1 observer:(id)arg2 ;
-(EFObservable *)appStateObservable;
-(id)initWithBundleId:(id)arg1 ;
-(void)dealloc;
@end

