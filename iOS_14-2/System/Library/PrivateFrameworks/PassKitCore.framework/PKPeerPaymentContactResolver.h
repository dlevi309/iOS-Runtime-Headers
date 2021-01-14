/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class NSObject, CNContactStore, NSArray, NSCache, NSHashTable;

@interface PKPeerPaymentContactResolver : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	os_unfair_lock_s _delegatesLock;
	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	NSCache* _handleToContactCache;
	NSHashTable* _delegates;

}

@property (nonatomic,retain) NSCache * handleToContactCache;              //@synthesize handleToContactCache=_handleToContactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)invalidateCache;
-(NSHashTable *)delegates;
-(NSArray *)keysToFetch;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(CNContactStore *)contactStore;
-(void)_handleContactStoreDidChangeNotification:(id)arg1 ;
-(void)_accessDelegatesWithHandler:(/*^block*/id)arg1 ;
-(id)_predicateForHandle:(id)arg1 ;
-(BOOL)haveCachedResultForHandle:(id)arg1 ;
-(void)contactForHandles:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSCache *)handleToContactCache;
-(void)setHandleToContactCache:(NSCache *)arg1 ;
-(id)contactForHandle:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(void)contactForHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

