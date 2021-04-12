/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface RTNotifier : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _observersMap;

}

@property (nonatomic,retain) NSMutableDictionary * observersMap;              //@synthesize observersMap=_observersMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithName:(id)arg1 ;
-(void)postNotification:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)removeAllObservers;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(void)postNotification:(id)arg1 toObserver:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)removeObserver:(id)arg1 fromNotification:(id)arg2 ;
-(unsigned long long)getNumberOfObservers:(id)arg1 ;
-(NSMutableDictionary *)observersMap;
-(BOOL)observer:(id)arg1 observingNotificationName:(id)arg2 ;
-(void)setObserversMap:(NSMutableDictionary *)arg1 ;
@end

