/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)identifiersForSectionAtIndex:(long long)arg1;
-(id)identifiersForItemAtIndexPath:(id)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
-(NSRange*)optionalSectionIndexTitlesRange;
-(id)sectionIndexTitles;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;

@required
-(id)sectionAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(unsigned long long)numberOfSections;

@end

