/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, CNContactStore, NSArray, NSCache, NSHashTable;

@interface PKPeerPaymentContactResolver : NSObject {

	NSObject*<OS_dispatch_queue> _contactLookupQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CNContactStore* _contactStore;
	NSArray* _keysToFetch;
	NSCache* _handleToContactCache;
	NSHashTable* _delegates;

}

@property (nonatomic,retain) NSCache * handleToContactCache;              //@synthesize handleToContactCache=_handleToContactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(void)invalidateCache;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(NSArray *)keysToFetch;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)contactForHandle:(id)arg1 ;
-(void)_handleContactStoreDidChangeNotification:(id)arg1 ;
-(id)_predicateForHandle:(id)arg1 ;
-(BOOL)haveCachedResultForHandle:(id)arg1 ;
-(void)contactForHandle:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSCache *)handleToContactCache;
-(void)setHandleToContactCache:(NSCache *)arg1 ;
@end

