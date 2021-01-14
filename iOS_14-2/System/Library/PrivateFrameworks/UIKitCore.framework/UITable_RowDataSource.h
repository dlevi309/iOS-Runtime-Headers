/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIView;


@protocol UITable_RowDataSource <UITable>
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (getter=_headerFooterLeadingMarginWidth,nonatomic,readonly) double headerFooterLeadingMarginWidth; 
@property (getter=_headerFooterTrailingMarginWidth,nonatomic,readonly) double headerFooterTrailingMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_sectionHeaderPadding,nonatomic,readonly) double sectionHeaderPadding; 
@property (getter=_sectionFooterPadding,nonatomic,readonly) double sectionFooterPadding; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesHeights,nonatomic,readonly) BOOL estimatesHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@required
-(id)_tableHeaderView;
-(UIEdgeInsets*)_tableContentInset;
-(id)_tableFooterView;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(double)_headerFooterLeadingMarginWidth;
-(double)_defaultSectionFooterHeight;
-(id)_constants;
-(BOOL)_estimatesSectionFooterHeights;
-(id)_titleForFooterInSection:(long long)arg1;
-(double)_sidePadding;
-(double)_heightForFooterInSection:(long long)arg1;
-(void)_prepareForRowDataHeaderFooterSizing;
-(UIEdgeInsets)_contentInset;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1;
-(BOOL)_estimatesHeights;
-(double)_estimatedHeightForFooterInSection:(long long)arg1;
-(double)_rowSpacing;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
-(BOOL)_estimatesRowHeights;
-(id)_detailTextForHeaderInSection:(long long)arg1;
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3;
-(double)_sectionFooterPadding;
-(void)_applyContentSizeDeltaImmediately:(double)arg1;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1;
-(BOOL)_isTableHeaderAutohiding;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1;
-(BOOL)_estimatesSectionHeaderHeights;
-(id)_titleForHeaderInSection:(long long)arg1;
-(double)_defaultSectionHeaderHeight;
-(double)_heightForTableFooter;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
-(double)_sectionHeaderPadding;
-(BOOL)_shouldUseNewHeaderFooterBehavior;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1;
-(BOOL)_providesRowHeights;
-(double)_heightForTableHeader;
-(double)_headerFooterTrailingMarginWidth;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1;
-(double)_heightForRowAtIndexPath:(id)arg1;
-(double)_heightForHeaderInSection:(long long)arg1;

@end

