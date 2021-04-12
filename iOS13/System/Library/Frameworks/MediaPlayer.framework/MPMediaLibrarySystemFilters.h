/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)globalSerialQueue;
+(id)systemFiltersPerLibrary;
+(id)filtersForLibrary:(id)arg1 ;
-(void)_updateFilters;
-(id)_initWithLibrary:(id)arg1 ;
-(BOOL)shouldExcludePurchaseHistoryContent;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
@end

