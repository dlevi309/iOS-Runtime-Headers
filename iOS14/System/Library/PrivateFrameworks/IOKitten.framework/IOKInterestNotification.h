/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@protocol OS_dispatch_queue;
@class NSObject, IOKInterestNotificationRef;

@interface IOKInterestNotification : NSObject {

	unsigned _object;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	IOKInterestNotificationRef* _notificationRef;

}

@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned object;                                             //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IOKInterestNotificationRef * notificationRef;              //@synthesize notificationRef=_notificationRef - In the implementation block
-(id)init;
-(void)setHandler:(id)arg1 ;
-(IOKInterestNotificationRef *)notificationRef;
-(unsigned)object;
-(void)setObject:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

