/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_queue, MSVDistributedNotificationObserverDelegate;
@class NSString, NSObject, NSDictionary;

@interface MSVDistributedNotificationObserver : NSObject {

	int _notifyToken;
	NSString* _distributedName;
	NSString* _localName;
	NSObject*<OS_dispatch_queue> _queue;
	id<MSVDistributedNotificationObserverDelegate> _delegate;
	NSDictionary* _userInfoForLocalNotification;

}

@property (nonatomic,readonly) NSString * distributedName;                                                //@synthesize distributedName=_distributedName - In the implementation block
@property (nonatomic,readonly) NSString * localName;                                                      //@synthesize localName=_localName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MSVDistributedNotificationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForLocalNotification;                                   //@synthesize userInfoForLocalNotification=_userInfoForLocalNotification - In the implementation block
+(id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)notifyToken;
-(id<MSVDistributedNotificationObserverDelegate>)delegate;
-(void)setDelegate:(id<MSVDistributedNotificationObserverDelegate>)arg1 ;
-(NSString *)localName;
-(id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(void)_handleDistributedNotificationWithNotifyToken:(int)arg1 ;
-(NSDictionary *)userInfoForLocalNotification;
-(NSString *)distributedName;
-(void)setUserInfoForLocalNotification:(NSDictionary *)arg1 ;
@end

