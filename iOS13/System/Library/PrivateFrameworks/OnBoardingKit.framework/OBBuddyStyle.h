/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/


#import <OnBoardingKit/OnBoardingKit-Structs.h>
@interface OBBuddyStyle : NSObject
+(id)sharedStyle;
-(id)backgroundColor;
-(CGSize)_effectiveSizeForIconSize:(CGSize)arg1 inView:(id)arg2 ;
-(double)headerYOffsetForIconSize:(CGSize)arg1 inView:(id)arg2 ;
-(double)headerIconBaselineOffsetForView:(id)arg1 ;
-(double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(BOOL)arg2 ;
-(double)baselineInsetForHeaderTitle;
-(id)headerTitleFont;
-(void)applyThemeToNavigationController:(id)arg1 allowUnderlap:(BOOL)arg2 ;
-(UIEdgeInsets)horizontalInsetsForContainingInView:(id)arg1 width:(double)arg2 ;
-(id)tableCellFont;
-(double)headerTitleBaselineOffsetForView:(id)arg1 iconSize:(CGSize)arg2 ;
-(double)headerYOffsetForIcon:(id)arg1 inView:(id)arg2 ;
-(double)headerIconBaselineOffset;
-(double)headerTitleBaselineOffsetHasIcon:(BOOL)arg1 ;
-(double)headerSubheaderBaselineSpacingForView:(id)arg1 ;
-(double)screenHeaderHeightForView:(id)arg1 ;
-(double)screenHeaderFooterSideInsetForView:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForHeaderView:(id)arg1 ;
-(double)singleLineCellHeightForTable:(id)arg1 ;
-(double)nonTableHorizontalMargin;
-(double)horizontalMarginForView:(id)arg1 ;
-(UIEdgeInsets)edgeInsetsForTable:(id)arg1 ;
-(void)applyThemeToNavigationController:(id)arg1 ;
-(id)continueButtonWithTitle:(id)arg1 inView:(id)arg2 ;
-(CGSize)sizeForContinueButtonInAncestor:(id)arg1 ;
-(double)tallRowHeight;
-(void)applyThemeToLabel:(id)arg1 ;
-(void)applyThemeToTextView:(id)arg1 ;
-(void)applyThemeToAllTableViews;
-(void)applyThemeToTitleLabel:(id)arg1 ;
-(void)applyThemeToTableCell:(id)arg1 ;
-(void)applyThemeToSectionHeaderLabel:(id)arg1 ;
@end

