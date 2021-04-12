/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDSlideBase.h>

@class OADTheme, OADColorMap, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase {

	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mNotesTextStyle;

}
-(id)colorMap;
-(id)theme;
-(id)init;
-(id)description;
-(id)colorScheme;
-(id)styleMatrix;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(id)drawingTheme;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(id)notesTextStyle;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)defaultTextListStyle;
@end

