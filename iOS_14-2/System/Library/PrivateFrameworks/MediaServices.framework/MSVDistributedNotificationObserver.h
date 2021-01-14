/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)userInfoForLocalNotification;
-(id<MSVDistributedNotificationObserverDelegate>)delegate;
-(void)setUserInfoForLocalNotification:(NSDictionary *)arg1 ;
-(void)_handleDistributedNotificationWithNotifyToken:(int)arg1 ;
-(NSString *)localName;
-(int)notifyToken;
-(id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(void)setDelegate:(id<MSVDistributedNotificationObserverDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)distributedName;
-(void)dealloc;
@end

