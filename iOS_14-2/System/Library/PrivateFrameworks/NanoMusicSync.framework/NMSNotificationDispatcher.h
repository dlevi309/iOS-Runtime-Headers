/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@protocol OS_dispatch_queue, NMSNotificationDispatcherDelegate;
@class NSString, NSObject;

@interface NMSNotificationDispatcher : NSObject {

	int _localNotifyToken;
	int _remoteNotifyToken;
	NSString* _localDarwinNotificationName;
	NSString* _remoteDarwinNotificationName;
	long long _waitingCount;
	BOOL _hasPendingUpdates;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _baseNotificationName;
	id<NMSNotificationDispatcherDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * baseNotificationName;                                  //@synthesize baseNotificationName=_baseNotificationName - In the implementation block
@property (assign,nonatomic,__weak) id<NMSNotificationDispatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginWaitingForUpdates;
-(id<NMSNotificationDispatcherDelegate>)delegate;
-(void)scheduleLocalDarwinNotification;
-(id)initWithNotificationName:(id)arg1 ;
-(void)setDelegate:(id<NMSNotificationDispatcherDelegate>)arg1 ;
-(NSString *)baseNotificationName;
-(void)_postLocalDarwinNotification;
-(void)_handleRemoteNotification;
-(void)endWaitingForUpdates;
-(void)_handleLocalNotificationIgnoringSenderPID:(BOOL)arg1 ;
-(void)dealloc;
@end

