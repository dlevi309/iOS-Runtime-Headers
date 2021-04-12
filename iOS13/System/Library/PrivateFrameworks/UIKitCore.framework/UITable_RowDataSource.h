/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIEdgeInsets)_contentInset;
-(id)_constants;
-(double)_rowSpacing;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(BOOL)_estimatesRowHeights;
-(BOOL)_estimatesSectionHeaderHeights;
-(BOOL)_estimatesSectionFooterHeights;
-(double)_heightForTableHeader;
-(double)_heightForTableFooter;
-(double)_headerFooterLeadingMarginWidth;
-(double)_headerFooterTrailingMarginWidth;
-(id)_tableHeaderView;
-(UIEdgeInsets*)_tableContentInset;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1;
-(double)_heightForRowAtIndexPath:(id)arg1;
-(double)_heightForHeaderInSection:(long long)arg1;
-(double)_heightForFooterInSection:(long long)arg1;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForFooterInSection:(long long)arg1;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
-(void)_applyContentSizeDeltaImmediately:(double)arg1;
-(id)_titleForHeaderInSection:(long long)arg1;
-(id)_titleForFooterInSection:(long long)arg1;
-(id)_detailTextForHeaderInSection:(long long)arg1;
-(id)_viewForHeaderInSection:(long long)arg1;
-(id)_viewForFooterInSection:(long long)arg1;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3;
-(double)_sidePadding;
-(BOOL)_isTableHeaderAutohiding;
-(BOOL)_providesRowHeights;
-(BOOL)_estimatesHeights;
-(id)_tableFooterView;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(BOOL)_shouldUseNewHeaderFooterBehavior;

@end

