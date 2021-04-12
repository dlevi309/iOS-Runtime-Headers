/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDSlideChild.h>

@class PDSlideLayout, NSMutableArray, PDNotesSlide, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {

	PDSlideLayout* mSlideLayout;
	NSMutableArray* mComments;
	PDNotesSlide* mNotesSlide;
	OITSUNoCopyDictionary* mCommentParents;

}

@property (retain) OITSUNoCopyDictionary * commentParents; 
-(id)description;
-(id)background;
-(id)transition;
-(void)addComment:(id)arg1 ;
-(unsigned long long)commentCount;
-(id)defaultTheme;
-(id)slideLayout;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(void)setSlideLayout:(id)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)notesSlide;
-(void)setNotesSlide:(id)arg1 ;
-(id)commentAtIndex:(unsigned long long)arg1 ;
-(id)commentForAuthorId:(unsigned long long)arg1 authorIdx:(unsigned long long)arg2 ;
-(OITSUNoCopyDictionary *)commentParents;
-(void)setCommentParents:(OITSUNoCopyDictionary *)arg1 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(id)inheritedTextStyleForPlaceholderType:(int)arg1 ;
@end

