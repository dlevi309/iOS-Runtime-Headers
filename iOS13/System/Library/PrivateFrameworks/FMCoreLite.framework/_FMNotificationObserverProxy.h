/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/

#import <FMCoreLite/_FMObserverProxy.h>

@class NSOperationQueue, NSString;

@interface _FMNotificationObserverProxy : _FMObserverProxy {

	id _notificationObserver;
	NSOperationQueue* _observerQueue;
	/*^block*/id _observerBlock;
	NSString* _notificationName;

}

@property (nonatomic,readonly) NSOperationQueue * observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,copy,readonly) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
-(void)invalidate;
-(NSString *)notificationName;
-(id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(/*^block*/id)arg4 ;
-(void)performObserverBlock;
-(NSOperationQueue *)observerQueue;
-(id)observerBlock;
@end

