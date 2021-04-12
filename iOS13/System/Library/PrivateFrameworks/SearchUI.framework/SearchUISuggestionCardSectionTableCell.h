/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionTableCell.h>

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell {

	BOOL _sectionHasHeader;
	int _actualSectionLocation;

}

@property (assign) int actualSectionLocation;                    //@synthesize actualSectionLocation=_actualSectionLocation - In the implementation block
@property (assign,nonatomic) BOOL sectionHasHeader;              //@synthesize sectionHasHeader=_sectionHasHeader - In the implementation block
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(int)sectionLocation;
-(BOOL)_isUsingOldStyleMultiselection;
-(BOOL)_insetsBackground;
-(BOOL)_showSeparatorAtTopOfSection;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)isDark;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)shouldDrawBackgroundColor;
-(void)setSectionHasHeader:(BOOL)arg1 ;
-(void)setActualSectionLocation:(int)arg1 ;
-(int)actualSectionLocation;
-(BOOL)sectionHasHeader;
-(BOOL)shouldDrawFullLengthSeparatorForSectionLocation:(int)arg1 ;
@end

