/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)workQueue_createFetchersFromRegisteredObservers:(id)arg1 ;
+(id)sharedNotifier;
-(void)contactStoreDidChange:(id)arg1 ;
-(id)init;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 ;
@end

