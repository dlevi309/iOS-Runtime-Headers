/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)systemFiltersPerLibrary;
+(id)filtersForLibrary:(id)arg1 ;
+(id)globalSerialQueue;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
-(void)_updateFilters;
-(BOOL)shouldExcludePurchaseHistoryContent;
-(id)_initWithLibrary:(id)arg1 ;
@end

