/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMutableArray, NSString;

@interface HDHRNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _fakingNotifyTokens;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(id)_userNotificationCenter;
-(void)dealloc;
-(void)_subscribeToFakingNotifications;
-(void)_unsubscribeToFakingNotifications;
-(void)_queue_showNotificationForHeartEvent:(id)arg1 ;
-(void)_subscribeToFakingNotification:(id)arg1 type:(id)arg2 withData:(BOOL)arg3 ;
-(void)_queue_fakeNotificationWithEventType:(id)arg1 withData:(BOOL)arg2 ;
@end

