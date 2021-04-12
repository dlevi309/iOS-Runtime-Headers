/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class TUCallProviderManager, NSCache, CNContactStore, NSArray, CNFavorites, NSObject, NSString;

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate> {

	TUCallProviderManager* _callProviderManager;
	NSCache* _contactCache;
	CNContactStore* _contactStore;
	NSArray* _favoritesEntries;
	CNFavorites* _favoritesManager;
	NSCache* _transportNameCache;
	unsigned long long _prefetchCount;
	NSObject*<OS_dispatch_queue> _completionDispatchQueue;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;

}

@property (nonatomic,readonly) NSCache * contactCache;                                            //@synthesize contactCache=_contactCache - In the implementation block
@property (nonatomic,readonly) NSCache * transportNameCache;                                      //@synthesize transportNameCache=_transportNameCache - In the implementation block
@property (nonatomic,readonly) TUCallProviderManager * callProviderManager;                       //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,readonly) CNFavorites * favoritesManager;                                    //@synthesize favoritesManager=_favoritesManager - In the implementation block
@property (nonatomic,readonly) unsigned long long prefetchCount;                                  //@synthesize prefetchCount=_prefetchCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionDispatchQueue;              //@synthesize completionDispatchQueue=_completionDispatchQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialDispatchQueue;                  //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,copy) NSArray * favoritesEntries;                                            //@synthesize favoritesEntries=_favoritesEntries - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                     //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)addEntry:(id)arg1 ;
-(CNContactStore *)contactStore;
-(TUCallProviderManager *)callProviderManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(unsigned long long)prefetchCount;
-(id)fetchFavoritesEntries;
-(void)handleContactsFavoritesDidChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(CNFavorites *)favoritesManager;
-(void)setFavoritesEntries:(NSArray *)arg1 ;
-(unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1 ;
-(id)contactCacheKeyForFavoritesEntry:(id)arg1 ;
-(NSCache *)contactCache;
-(id)fetchContactForFavoritesEntry:(id)arg1 ;
-(id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2 ;
-(id)transportNameCacheKeyForFavoritesEntry:(id)arg1 ;
-(NSCache *)transportNameCache;
-(id)fetchTransportNameForFavoritesEntry:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(id)initWithContactStore:(id)arg1 prefetchCount:(unsigned long long)arg2 ;
-(NSArray *)favoritesEntries;
-(BOOL)canAddEntry;
-(void)removeEntriesAtIndexes:(id)arg1 ;
-(id)contactForFavoritesEntry:(id)arg1 ;
-(id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2 ;
-(id)transportNameForFavoritesEntry:(id)arg1 ;
@end

