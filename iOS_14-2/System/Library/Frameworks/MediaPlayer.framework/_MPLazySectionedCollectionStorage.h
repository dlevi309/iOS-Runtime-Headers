/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSCache;

@interface _MPLazySectionedCollectionStorage : NSObject {

	vector<long, std::__1::allocator<long> >* _cachedNumberOfItemsInSections;
	long long _cachedNumberOfSections;
	BOOL _hasValidCachedNumberOfSections;
	NSCache* _itemsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _itemIdentifierSetMap;
	NSCache* _sectionsCache;
	map<long, MPIdentifierSet *, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, MPIdentifierSet *> > >* _sectionIdentifierSetMap;

}
@end

