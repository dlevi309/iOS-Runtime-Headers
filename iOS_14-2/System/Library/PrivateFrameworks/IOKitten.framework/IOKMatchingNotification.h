/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/


@protocol OS_dispatch_queue;
@class IOKIterator, NSObject, IOKMatchingNotificationRef;

@interface IOKMatchingNotification : NSObject {

	/*^block*/id _handler;
	IOKIterator* _iterator;
	NSObject*<OS_dispatch_queue> _queue;
	IOKMatchingNotificationRef* _notificationRef;

}

@property (nonatomic,copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) IOKIterator * iterator;                                      //@synthesize iterator=_iterator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IOKMatchingNotificationRef * notificationRef;              //@synthesize notificationRef=_notificationRef - In the implementation block
-(id)init;
-(void)setHandler:(id)arg1 ;
-(IOKMatchingNotificationRef *)notificationRef;
-(IOKIterator *)iterator;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)setIterator:(IOKIterator *)arg1 ;
-(void)primeNotification;
@end

