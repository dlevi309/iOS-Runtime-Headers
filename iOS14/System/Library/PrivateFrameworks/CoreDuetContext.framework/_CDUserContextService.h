/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_CDXPCEventPublisherDelegate.h>

@protocol _CDContextPersisting, OS_dispatch_queue;
@class _CDInMemoryUserContext, NSMutableSet, NSXPCListener, NSMutableDictionary, _CDXPCEventPublisher, NSObject, NSString;

@interface _CDUserContextService : NSObject <NSXPCListenerDelegate, _CDXPCEventPublisherDelegate> {

	BOOL _remoteDevicesHaveBeenActivated;
	id<_CDContextPersisting> _persistence;
	_CDInMemoryUserContext* _userContext;
	NSMutableSet* _clients;
	NSXPCListener* _listener;
	NSMutableSet* _openRegistrations;
	NSMutableSet* _firedRegistrations;
	NSMutableDictionary* _firedRegistrationInfos;
	_CDXPCEventPublisher* _mdcsEventPublisher;
	_CDXPCEventPublisher* _notificationEventPublisher;
	NSMutableDictionary* _mdcsEventSubscribersByToken;
	NSMutableDictionary* _notificationEventSubscribersByToken;
	NSMutableDictionary* _notificationEventSubscribersByClientIdentifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _remoteDevicesByDeviceID;

}

@property (nonatomic,retain) _CDInMemoryUserContext * userContext;                                              //@synthesize userContext=_userContext - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                                                            //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                          //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) id<_CDContextPersisting> persistence;                                              //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,retain) NSMutableSet * openRegistrations;                                                  //@synthesize openRegistrations=_openRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableSet * firedRegistrations;                                                 //@synthesize firedRegistrations=_firedRegistrations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firedRegistrationInfos;                                      //@synthesize firedRegistrationInfos=_firedRegistrationInfos - In the implementation block
@property (nonatomic,retain) _CDXPCEventPublisher * mdcsEventPublisher;                                         //@synthesize mdcsEventPublisher=_mdcsEventPublisher - In the implementation block
@property (nonatomic,retain) _CDXPCEventPublisher * notificationEventPublisher;                                 //@synthesize notificationEventPublisher=_notificationEventPublisher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mdcsEventSubscribersByToken;                                 //@synthesize mdcsEventSubscribersByToken=_mdcsEventSubscribersByToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationEventSubscribersByToken;                         //@synthesize notificationEventSubscribersByToken=_notificationEventSubscribersByToken - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationEventSubscribersByClientIdentifier;              //@synthesize notificationEventSubscribersByClientIdentifier=_notificationEventSubscribersByClientIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                            //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL remoteDevicesHaveBeenActivated;                                               //@synthesize remoteDevicesHaveBeenActivated=_remoteDevicesHaveBeenActivated - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * remoteDevicesByDeviceID;                                   //@synthesize remoteDevicesByDeviceID=_remoteDevicesByDeviceID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstanceWithSharedMemoryStore:(id)arg1 ;
+(id)sharedInstanceWithPersistence:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)clients;
-(id<_CDContextPersisting>)persistence;
-(_CDInMemoryUserContext *)userContext;
-(void)setPersistence:(id<_CDContextPersisting>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setNotificationEventSubscribersByClientIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setRemoteDevicesHaveBeenActivated:(BOOL)arg1 ;
-(void)setToken:(unsigned long long)arg1 forUserID:(unsigned)arg2 ;
-(void)start;
-(void)setNotificationEventSubscribersByToken:(NSMutableDictionary *)arg1 ;
-(void)informClientOfFiredRegistration:(id)arg1 info:(id)arg2 ;
-(unsigned long long)tokenForSourceDeviceUUID:(id)arg1 ;
-(NSMutableDictionary *)notificationEventSubscribersByClientIdentifier;
-(void)setMdcsEventSubscribersByToken:(NSMutableDictionary *)arg1 ;
-(id)obtainFiredRegistrationMatchingRegistration:(id)arg1 info:(id*)arg2 ;
-(_CDXPCEventPublisher *)mdcsEventPublisher;
-(void)requestActivateDevicesFromSubscriber:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)addOpenRegistration:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(void)addProxyWithSourceDeviceUUID:(id)arg1 ;
-(BOOL)setMappingObject:(id)arg1 forContextualKeyPath:(id)arg2 ;
-(NSMutableDictionary *)notificationEventSubscribersByToken;
-(void)sendEvent:(id)arg1 toClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendEvent:(id)arg1 toClient:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(NSXPCListener *)listener;
-(void)removeSubscriberWithToken:(unsigned long long)arg1 streamName:(id)arg2 ;
-(id)initWithListener:(id)arg1 withStorage:(id)arg2 withStore:(id)arg3 ;
-(void)setFiredRegistrationInfos:(NSMutableDictionary *)arg1 ;
-(void)removeOpenRegistration:(id)arg1 ;
-(void)setOpenRegistrations:(NSMutableSet *)arg1 ;
-(void)clientWasInterrupted:(id)arg1 ;
-(void)setMdcsEventPublisher:(_CDXPCEventPublisher *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(_CDXPCEventPublisher *)notificationEventPublisher;
-(id)proxySourceDeviceUUIDForUserID:(unsigned)arg1 ;
-(void)removeTokenForUserID:(unsigned)arg1 ;
-(void)sendEvent:(id)arg1 toProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)requestActivateDevicesFromAllSubscribersWithHandler:(/*^block*/id)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setProxySourceDeviceUUID:(id)arg1 forUserID:(unsigned)arg2 ;
-(NSMutableSet *)openRegistrations;
-(BOOL)remoteDevicesHaveBeenActivated;
-(void)setUserContext:(_CDInMemoryUserContext *)arg1 ;
-(NSMutableDictionary *)mdcsEventSubscribersByToken;
-(void)sendEvent:(id)arg1 toProxy:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)setNotificationEventPublisher:(_CDXPCEventPublisher *)arg1 ;
-(void)deleteSavedData;
-(id)subscriberForSourceDeviceUUID:(id)arg1 ;
-(NSMutableSet *)firedRegistrations;
-(NSMutableDictionary *)remoteDevicesByDeviceID;
-(void)fetchProxySourceDeviceUUIDFromSubscriber:(id)arg1 ;
-(void)regenerateState;
-(id)subscribersForClientIdentifier:(id)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)firedRegistrationInfos;
-(void)setFiredRegistrations:(NSMutableSet *)arg1 ;
-(id)initWithListener:(id)arg1 withPersistence:(id)arg2 withStorage:(id)arg3 withStore:(id)arg4 ;
@end
