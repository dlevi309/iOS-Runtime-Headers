/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/

#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class CNContactStore, NSMutableDictionary, NSHashTable, NSObject, NSSet, NSString;

@interface ASContactsManager : NSObject <ASActivitySharingManagerReadyObserver> {

	CNContactStore* _contactStore;
	NSMutableDictionary* _contactsByUUID;
	NSMutableDictionary* _placeholderContactsByUUID;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _contactsQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _persistQueue;
	NSObject*<OS_dispatch_group> _contactsTransactionBarrier;

}

@property (nonatomic,copy) NSSet * contacts; 
@property (nonatomic,readonly) NSSet * placeholderContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContacts:(NSSet *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSSet *)contacts;
-(id)init;
-(void)_endTransaction;
-(void)_beginTransaction;
-(void)removeObserver:(id)arg1 ;
-(void)removePlaceholderContactWithToken:(id)arg1 ;
-(id)contactWithUUID:(id)arg1 ;
-(void)saveContact:(id)arg1 ;
-(id)contactWithDestinations:(id)arg1 ;
-(id)createContactWithDestinations:(id)arg1 ;
-(id)savePlaceholderContact:(id)arg1 ;
-(id)contactMatchingCriteriaBlock:(/*^block*/id)arg1 ;
-(id)placeholderContactWithUUID:(id)arg1 ;
-(void)setContactsUsingTransaction:(/*^block*/id)arg1 ;
-(void)removeAllPlaceholderContacts;
-(NSSet *)placeholderContacts;
-(void)loadCachedContacts;
-(id)_contactStoreContactWithIdentifier:(id)arg1 ;
-(id)_queue_allContacts;
-(void)_setContacts:(id)arg1 waitForTransaction:(BOOL)arg2 ;
-(id)_findMatchingContactStoreContactForDestinations:(id)arg1 ;
-(void)_waitForTransaction;
-(void)_queue_notifyObservers;
-(void)_persistContacts:(id)arg1 ;
@end

