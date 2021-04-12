/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContactStore *)contactStore;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(void)setFavoritesEntries:(NSArray *)arg1 ;
-(id)init;
-(id)transportNameForFavoritesEntry:(id)arg1 ;
-(void)handleContactsFavoritesDidChangeNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionDispatchQueue;
-(NSArray *)favoritesEntries;
-(CNFavorites *)favoritesManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(id)addEntry:(id)arg1 ;
-(void)removeEntriesAtIndexes:(id)arg1 ;
-(NSCache *)transportNameCache;
-(TUCallProviderManager *)callProviderManager;
-(id)fetchFavoritesEntries;
-(id)fetchContactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2 ;
-(NSCache *)contactCache;
-(BOOL)canAddEntry;
-(unsigned long long)absoluteIndexForIndex:(unsigned long long)arg1 ;
-(id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 prefetchCount:(unsigned long long)arg2 ;
-(id)fetchTransportNameForFavoritesEntry:(id)arg1 ;
-(id)contactCacheKeyForFavoritesEntry:(id)arg1 ;
-(id)contactForFavoritesEntry:(id)arg1 ;
-(id)transportNameCacheKeyForFavoritesEntry:(id)arg1 ;
-(id)fetchContactForFavoritesEntry:(id)arg1 ;
-(void)moveEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(unsigned long long)prefetchCount;
-(void)dealloc;
@end

