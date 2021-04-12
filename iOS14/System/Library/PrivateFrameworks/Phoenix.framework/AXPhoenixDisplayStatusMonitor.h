/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
*/

#import <Phoenix/AXPhoenixEventMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface AXPhoenixDisplayStatusMonitor : AXPhoenixEventMonitor {

	BOOL _displayOn;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,getter=isDisplayOn,nonatomic) BOOL displayOn;               //@synthesize displayOn=_displayOn - In the implementation block
@property (assign,nonatomic) int notifyToken;                                 //@synthesize notifyToken=_notifyToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(int)notifyToken;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isDisplayOn;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDisplayOn:(BOOL)arg1 ;
-(void)_registerForSpringboardNotificationsWithQueue:(id)arg1 ;
-(BOOL)_queryIsDisplayOn;
-(void)_displayStateChanged:(double)arg1 ;
-(void)_unregisterForSpringboardNotifications;
-(void)_notifyObserver:(id)arg1 isDisplayOn:(BOOL)arg2 timestamp:(double)arg3 ;
@end

