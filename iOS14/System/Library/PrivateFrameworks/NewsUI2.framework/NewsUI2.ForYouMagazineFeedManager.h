/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cursorForTopOfFeed;
-(id)knownCursorForIdentifier:(id)arg1 ;
-(void)fetchNextGroupFromCursor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)knownGroupForIdentifier:(id)arg1 headlines:(id)arg2 tags:(id)arg3 assetHandles:(id)arg4 ;
@end

