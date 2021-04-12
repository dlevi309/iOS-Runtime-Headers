/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, PCPersistentTimer, NSMutableArray, BBObserverClientProxy, NSString, BBMaskedSet;

@interface BBObserverGatewayHolder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timeoutTimer;
	NSMutableArray* _timeouts;
	BBObserverClientProxy* _gateway;
	unsigned long long _gatewayPriority;
	unsigned long long _feed;
	NSString* _name;
	BBMaskedSet* _observerFeedSet;

}

@property (nonatomic,retain) BBObserverClientProxy * gateway;                 //@synthesize gateway=_gateway - In the implementation block
@property (assign,nonatomic) unsigned long long gatewayPriority;              //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                         //@synthesize feed=_feed - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BBMaskedSet * observerFeedSet;                 //@synthesize observerFeedSet=_observerFeedSet - In the implementation block
-(void)setGateway:(BBObserverClientProxy *)arg1 ;
-(id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BBObserverClientProxy *)gateway;
-(void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(BOOL)arg3 forFeeds:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)_startNextTimer;
-(void)setFeed:(unsigned long long)arg1 ;
-(NSString *)name;
-(unsigned long long)feed;
-(void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 ;
-(void)sendAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(/*^block*/id)arg5 ;
-(void)_handleTimeout;
-(void)setGatewayPriority:(unsigned long long)arg1 ;
-(BBMaskedSet *)observerFeedSet;
-(BOOL)_invalidateTimeout:(id)arg1 ;
-(void)_invalidateTimer;
-(void)setName:(NSString *)arg1 ;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(unsigned long long)gatewayPriority;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
@end

