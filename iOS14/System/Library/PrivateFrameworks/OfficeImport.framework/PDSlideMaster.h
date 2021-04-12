/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/PDSlideBase.h>

@class NSMutableArray, OADTheme, OADColorMap, OADTextListStyle, PDPresentation;

@interface PDSlideMaster : PDSlideBase {

	NSMutableArray* mSlideLayouts;
	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mTitleTextStyle;
	OADTextListStyle* mBodyTextStyle;
	OADTextListStyle* mOtherTextStyle;
	BOOL mHeaderPlaceholderIsVisible;
	BOOL mFooterPlaceholderIsVisible;
	BOOL mSlideNumberPlaceholderIsVisible;
	BOOL mDateTimePlaceholderIsVisible;
	PDPresentation* mPresentation;

}

@property (nonatomic,__weak,readonly) PDPresentation * presentation; 
@property (nonatomic,retain) NSMutableArray * slideLayouts; 
@property (assign,nonatomic) BOOL headerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL footerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL slideNumberPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL dateTimePlaceholderIsVisible; 
-(id)colorMap;
-(id)theme;
-(id)description;
-(id)titleTextStyle;
-(PDPresentation *)presentation;
-(id)colorScheme;
-(void)setTitleTextStyle:(id)arg1 ;
-(id)styleMatrix;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(id)drawingTheme;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(void)setHeaderPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setFooterPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setDateTimePlaceholderIsVisible:(BOOL)arg1 ;
-(void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1 ;
-(unsigned long long)slideLayoutCount;
-(id)slideLayoutAtIndex:(unsigned long long)arg1 ;
-(id)addSlideLayout;
-(id)initWithPresentation:(id)arg1 ;
-(id)slideLayoutOfType:(int)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)defaultTextListStyle;
-(void)addSlideLayout:(id)arg1 ;
-(id)bodyTextStyle;
-(id)otherTextStyle;
-(void)setBodyTextStyle:(id)arg1 ;
-(void)setOtherTextStyle:(id)arg1 ;
-(NSMutableArray *)slideLayouts;
-(void)setSlideLayouts:(NSMutableArray *)arg1 ;
-(BOOL)headerPlaceholderIsVisible;
-(BOOL)footerPlaceholderIsVisible;
-(BOOL)slideNumberPlaceholderIsVisible;
-(BOOL)dateTimePlaceholderIsVisible;
@end

