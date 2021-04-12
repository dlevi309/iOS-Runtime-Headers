/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPLazySectionedCollectionDataSource <NSObject>
@optional
-(id)sectionIndexTitles;
-(id)identifiersForItemAtIndexPath:(id)arg1;
-(id)identifiersForSectionAtIndex:(long long)arg1;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
-(NSRange*)optionalSectionIndexTitlesRange;
-(long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
-(BOOL)hasSameContentAsDataSource:(id)arg1;

@required
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
-(id)sectionAtIndex:(unsigned long long)arg1;
-(id)itemAtIndexPath:(id)arg1;

@end

