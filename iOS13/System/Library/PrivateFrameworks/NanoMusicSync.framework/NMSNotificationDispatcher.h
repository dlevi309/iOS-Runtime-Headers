/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<NMSNotificationDispatcherDelegate>)delegate;
-(void)setDelegate:(id<NMSNotificationDispatcherDelegate>)arg1 ;
-(id)initWithNotificationName:(id)arg1 ;
-(void)beginWaitingForUpdates;
-(void)endWaitingForUpdates;
-(void)scheduleLocalDarwinNotification;
-(void)_handleLocalNotificationIgnoringSenderPID:(BOOL)arg1 ;
-(void)_handleRemoteNotification;
-(void)_postLocalDarwinNotification;
-(NSString *)baseNotificationName;
@end

