/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@protocol MPLazySectionedCollectionDataSource;
@class NSCache;

@interface MPLazySectionedCollection : MPSectionedCollection {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _itemIdentifierSetMap;
	NSCache* _sectionsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _sectionIdentifierSetMap;
	os_unfair_lock_s _mapLock;
	id<MPLazySectionedCollectionDataSource> _dataSource;

}

@property (nonatomic,retain) id<MPLazySectionedCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)firstItem;
-(id)initWithDataSource:(id)arg1 ;
-(id<MPLazySectionedCollectionDataSource>)dataSource;
-(void)setDataSource:(id<MPLazySectionedCollectionDataSource>)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)lastItem;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)allItems;
-(id)allSections;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstSection;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)lastSection;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)_cachedObjectAtIndexPath:(id)arg1 ;
-(void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2 ;
@end

