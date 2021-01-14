/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@protocol MPLazySectionedCollectionDataSource;
@class _MPLazySectionedCollectionStorage;

@interface MPLazySectionedCollection : MPSectionedCollection {

	_MPLazySectionedCollectionStorage* _storage;
	os_unfair_lock_s _mapLock;
	id<MPLazySectionedCollectionDataSource> _dataSource;

}

@property (nonatomic,retain) id<MPLazySectionedCollectionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)sectionAtIndex:(long long)arg1 ;
-(BOOL)hasSameContentAsSectionedCollection:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)firstItem;
-(id)itemsInSectionAtIndex:(long long)arg1 ;
-(id)lastItem;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)firstSection;
-(void)enumerateSectionsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)initWithDataSource:(id)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(id)lastSection;
-(id)allSections;
-(void)_updateCacheWithObject:(id)arg1 atIndexPath:(id)arg2 ;
-(void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id<MPLazySectionedCollectionDataSource>)dataSource;
-(void)setDataSource:(id<MPLazySectionedCollectionDataSource>)arg1 ;
-(id)_cachedObjectAtIndexPath:(id)arg1 ;
-(void)dealloc;
@end

