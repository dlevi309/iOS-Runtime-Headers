/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSpringboardStartMonitorObserver.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSystemStateDelegate;
@class NSString;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate> {

	BOOL _restoreDoneHandled;
	id<MTSystemStateDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTSystemStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL restoreDoneHandled;                                //@synthesize restoreDoneHandled=_restoreDoneHandled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemRestoreDone;
+(id)_restoreNotification;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(id)gatherDiagnostics;
-(void)printDiagnostics;
-(id<MTSystemStateDelegate>)delegate;
-(BOOL)restoreDoneHandled;
-(void)_handleRestoreDone;
-(void)springboardStartMonitor:(id)arg1 didReceiveStarted:(BOOL)arg2 ;
-(BOOL)_checkIfRestoreDone;
-(void)setRestoreDoneHandled:(BOOL)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)checkSystemReady;
-(void)_verifyRestoreDone;
-(void)setDelegate:(id<MTSystemStateDelegate>)arg1 ;
-(id)liveDarwinNotifications;
-(id)initWithDelegate:(id)arg1 ;
-(void)_handleF5Reset;
@end

