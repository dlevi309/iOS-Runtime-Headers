/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPLazySectionedCollectionDataSource.h>

@class MPSectionedCollection, NSIndexPath, NSArray, NSDictionary, NSString;

@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPSectionedCollection* _items;
	NSIndexPath* _playingItemIndexPath;
	NSArray* _sections;
	NSDictionary* _sectionRanges;

}

@property (nonatomic,readonly) MPSectionedCollection * items;                        //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSIndexPath * playingItemIndexPath;              //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) NSDictionary * sectionRanges;                         //@synthesize sectionRanges=_sectionRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)displayIndexPathForStructuredIndexPath:(id)arg1 ;
-(id)initWithTracklistItems:(id)arg1 playingItemIndexPath:(id)arg2 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(NSArray *)sections;
-(MPSectionedCollection *)items;
-(id)structuredIndexPathForDisplayIndexPath:(id)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(NSDictionary *)sectionRanges;
@end

