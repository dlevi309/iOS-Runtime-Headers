/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/


@protocol TPProcessObserverDelegate;
@class BKSApplicationStateMonitor;

@interface TPProcessObserver : NSObject {

	BOOL _cachedApplicationRunning;
	id<TPProcessObserverDelegate> _delegate;
	BKSApplicationStateMonitor* _applicationMonitor;

}

@property (nonatomic,readonly) BKSApplicationStateMonitor * applicationMonitor;              //@synthesize applicationMonitor=_applicationMonitor - In the implementation block
@property (assign,nonatomic) BOOL cachedApplicationRunning;                                  //@synthesize cachedApplicationRunning=_cachedApplicationRunning - In the implementation block
@property (assign,nonatomic,__weak) id<TPProcessObserverDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isApplicationStateRunning:(unsigned)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id<TPProcessObserverDelegate>)delegate;
-(void)setDelegate:(id<TPProcessObserverDelegate>)arg1 ;
-(BKSApplicationStateMonitor *)applicationMonitor;
-(void)dealloc;
-(void)applicationMonitorStateDidChangeForBundleIdentifier:(id)arg1 ;
-(BOOL)cachedApplicationRunning;
-(void)setCachedApplicationRunning:(BOOL)arg1 ;
@end

