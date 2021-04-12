/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNScheduler;
@class CNContactStore, CNMutableMultiDictionary;

@interface CNContactChangesNotifier : NSObject {

	BOOL _observingNotification;
	id<CNScheduler> _resourceLock;
	id<CNScheduler> _workQueue;
	id<CNScheduler> _downstream;
	CNContactStore* _contactStore;
	CNMutableMultiDictionary* _registeredObservers;

}

@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                         //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                                            //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> downstream;                                           //@synthesize downstream=_downstream - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                        //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNMutableMultiDictionary * registeredObservers;                       //@synthesize registeredObservers=_registeredObservers - In the implementation block
@property (assign,getter=isObservingNotification,nonatomic) BOOL observingNotification;              //@synthesize observingNotification=_observingNotification - In the implementation block
+(id)os_log;
+(id)sharedNotifier;
+(id)createProxyForObserver:(id)arg1 keysToFetch:(id)arg2 ;
+(id)preparedContact:(id)arg1 withStore:(id)arg2 keysToFetch:(id)arg3 ;
+(id)workQueue_createFetchersFromRegisteredObservers:(id)arg1 ;
-(id)init;
-(id<CNScheduler>)workQueue;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<CNScheduler>)downstream;
-(void)registerProxy:(id)arg1 identifier:(id)arg2 ;
-(id<CNScheduler>)resourceLock;
-(BOOL)resourceLock_removeProxiesPassingTest:(/*^block*/id)arg1 forIdentifier:(id)arg2 ;
-(void)workQueue_updateObserving;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CNMutableMultiDictionary *)registeredObservers;
-(void)workQueue_updateObservers;
-(BOOL)isObservingNotification;
-(void)contactStoreDidChange:(id)arg1 ;
-(void)setObservingNotification:(BOOL)arg1 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 ;
@end

