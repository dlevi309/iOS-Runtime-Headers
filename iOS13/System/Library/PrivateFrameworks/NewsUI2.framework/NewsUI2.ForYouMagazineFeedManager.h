/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSForYouMagazineFeedManagerType.h>

@interface NewsUI2.ForYouMagazineFeedManager : _UKNOWN_SUPERCLASS_ <TSForYouMagazineFeedManagerType> {

	 magazineFeedServiceConfigFetcher;
	 magazineFeedService;
	 personalizationService;
	 knownCursors;
	 knownGroups;
	 lock;

}
-(id)knownGroupForIdentifier:(id)arg1 headlines:(id)arg2 assetHandles:(id)arg3 ;
-(id)cursorForTopOfFeed;
-(id)knownCursorForIdentifier:(id)arg1 ;
-(void)fetchNextGroupFromCursor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

