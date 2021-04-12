/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)postNotificationWithUserInfo:(id)arg1 ;
-(id)init;
-(id<VSRemoteNotifierDelegate>)delegate;
-(id)initWithNotificationName:(id)arg1 ;
-(void)_didReceiveDistributedNotification:(id)arg1 ;
-(void)setNotificationObject:(NSString *)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDelegate:(id<VSRemoteNotifierDelegate>)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(NSString *)remoteNotificationName;
-(void)postNotification;
-(NSString *)notificationObject;
-(void)dealloc;
@end

