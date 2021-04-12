/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedCollection.h>

@interface MPMutableSectionedCollection : MPSectionedCollection
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAllObjects;
-(void)appendItem:(id)arg1 ;
-(void)_initializeAsEmptySectionedCollection;
-(void)insertSection:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSectionAtIndex:(long long)arg1 ;
-(void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)appendSection:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2 ;
-(void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)appendItems:(id)arg1 ;
@end

