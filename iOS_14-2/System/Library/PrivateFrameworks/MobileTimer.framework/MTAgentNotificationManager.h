/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@class NSMutableArray;

@interface MTAgentNotificationManager : NSObject {

	NSMutableArray* _listeners;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) NSMutableArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
+(double)_schedulingAssertionTimeout;
+(double)defaultAssertionTimeOutForNotification:(id)arg1 type:(long long)arg2 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)registerListener:(id)arg1 ;
-(NSMutableArray *)listeners;
-(void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2 ;
-(id)init;
-(void)beginListening;
-(void)_registerForDarwinNotifications;
-(id<NAScheduler>)serializer;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(void)_registerForAlarmNotifications;
-(void)_handleNotificationWithName:(id)arg1 type:(long long)arg2 ;
-(void)_registerForDistributedNotifications;
-(void)_registerForLiveDarwinNotification:(id)arg1 ;
-(void)dealloc;
@end

