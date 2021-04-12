/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSRemoteNotifierDelegate;
@class NSString, NSDistributedNotificationCenter;

@interface VSRemoteNotifier : NSObject {

	NSString* _remoteNotificationName;
	id<VSRemoteNotifierDelegate> _delegate;
	NSString* _notificationObject;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (nonatomic,copy) NSString * notificationObject;                                                  //@synthesize notificationObject=_notificationObject - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteNotificationName;                                     //@synthesize remoteNotificationName=_remoteNotificationName - In the implementation block
@property (assign,nonatomic,__weak) id<VSRemoteNotifierDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
+(id)_currentProcessIdentifier;
-(id)init;
-(void)dealloc;
-(id<VSRemoteNotifierDelegate>)delegate;
-(void)setDelegate:(id<VSRemoteNotifierDelegate>)arg1 ;
-(NSString *)notificationObject;
-(void)postNotification;
-(void)_didReceiveDistributedNotification:(id)arg1 ;
-(void)postNotificationWithUserInfo:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(NSString *)remoteNotificationName;
-(id)initWithNotificationName:(id)arg1 ;
-(void)setNotificationObject:(NSString *)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
@end

