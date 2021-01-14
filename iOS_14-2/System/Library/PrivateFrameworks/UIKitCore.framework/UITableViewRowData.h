/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UITable_RowDataSource;
@class UITableViewHeaderFooterView, NSIndexPath;

@interface UITableViewRowData : NSObject <NSCopying> {

	id<UITable_RowDataSource> _tableView;
	UITableViewHeaderFooterView* _headerFooterViewUsedForMeasurements;
	double _tableViewWidth;
	long long _numSections;
	BOOL _estimatesHeights;
	long long _sectionRowDataCapacity;
	id* _sectionRowData;
	double _tableHeaderHeight;
	double _tableFooterHeight;
	double _heightForTableHeaderViewHiding;
	struct {
		unsigned tableHeaderHeightValid : 1;
		unsigned tableFooterHeightValid : 1;
		unsigned tableSidePaddingValid : 1;
		unsigned usesVariableMargins : 1;
		unsigned pinsTableHeaderView : 1;
	}  _rowDataFlags;
	double _minimumRowHeight;
	double _rowSpacing;
	double _tableTopPadding;
	double _tableBottomPadding;
	double _tableSidePadding;
	NSIndexPath* _gapIndexPath;
	NSIndexPath* _reorderedIndexPath;
	NSIndexPath* _draggedIndexPath;
	double _defaultSectionHeaderHeight;
	double _defaultSectionFooterHeight;
	double _gapRowHeight;
	double _draggedRowHeight;

}

@property (nonatomic,readonly) double defaultSectionHeaderHeight;                                    //@synthesize defaultSectionHeaderHeight=_defaultSectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) double defaultSectionFooterHeight;                                    //@synthesize defaultSectionFooterHeight=_defaultSectionFooterHeight - In the implementation block
@property (nonatomic,readonly) NSIndexPath * temporarilyDeletedIndexPathBeingReordered; 
@property (nonatomic,retain) NSIndexPath * gapIndexPath;                                             //@synthesize gapIndexPath=_gapIndexPath - In the implementation block
@property (assign,nonatomic) double gapRowHeight;                                                    //@synthesize gapRowHeight=_gapRowHeight - In the implementation block
@property (assign,nonatomic) double draggedRowHeight;                                                //@synthesize draggedRowHeight=_draggedRowHeight - In the implementation block
@property (nonatomic,retain) NSIndexPath * reorderedIndexPath;                                       //@synthesize reorderedIndexPath=_reorderedIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * draggedIndexPath;                                         //@synthesize draggedIndexPath=_draggedIndexPath - In the implementation block
@property (nonatomic,readonly) double heightForAutohidingTableHeaderView; 
@property (nonatomic,readonly) double heightForTableHeaderViewHiding; 
@property (assign,nonatomic) double minimumRowHeight;                                                //@synthesize minimumRowHeight=_minimumRowHeight - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                                      //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double tableTopPadding;                                                 //@synthesize tableTopPadding=_tableTopPadding - In the implementation block
@property (assign,nonatomic) double tableBottomPadding;                                              //@synthesize tableBottomPadding=_tableBottomPadding - In the implementation block
@property (assign,nonatomic) double tableSidePadding;                                                //@synthesize tableSidePadding=_tableSidePadding - In the implementation block
@property (assign,nonatomic) BOOL usesVariableMargins; 
@property (assign,nonatomic) BOOL pinsTableHeaderView; 
-(double)tableTopPadding;
-(void)tableFooterHeightDidChangeToHeight:(double)arg1 ;
-(void)tableHeaderHeightDidChangeToHeight:(double)arg1 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 adjustForReorderedRow:(BOOL)arg4 ;
-(long long)footerAlignmentForSection:(long long)arg1 ;
-(long long)_sectionForPoint:(CGPoint)arg1 beginningWithSection:(long long)arg2 numberOfSections:(long long)arg3 ;
-(id)_indexPathsBelowIndexPath:(id)arg1 ;
-(long long)dropLocationForPoint:(CGPoint)arg1 atIndexPath:(id)arg2 withInsets:(UIEdgeInsets)arg3 ;
-(void)setDraggedIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)usesVariableMargins;
-(double)draggedRowHeight;
-(void)adjustSectionOffsetsBeginningAtIndex:(long long)arg1 count:(long long)arg2 delta:(double)arg3 rowDelta:(long long)arg4 ;
-(void)setGapIndexPath:(NSIndexPath *)arg1 ;
-(NSRange)globalRowsInRect:(CGRect)arg1 canGuess:(BOOL)arg2 ;
-(void)setTableTopPadding:(double)arg1 ;
-(CGRect)rectForTableFooterView;
-(double)heightForSection:(long long)arg1 ;
-(void)setMinimumRowHeight:(double)arg1 ;
-(void)addDropTargetGapAtIndexPath:(id)arg1 ;
-(void)ensureAllSectionsAreValid;
-(NSIndexPath *)draggedIndexPath;
-(long long)numberOfRowsBeforeSection:(long long)arg1 ;
-(double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(BOOL)hasHeaderForSection:(long long)arg1 ;
-(void)_assertValidIndexPath:(id)arg1 allowEmptySection:(BOOL)arg2 ;
-(int)sectionLocationForRow:(long long)arg1 inSection:(long long)arg2 ;
-(void)setGapRowHeight:(double)arg1 ;
-(void)setHeight:(double)arg1 forHeaderInSection:(long long)arg2 ;
-(long long)numberOfSections;
-(long long)numberOfRows;
-(CGRect)rectForFooterInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(id)indexPathForRowAtGlobalRow:(long long)arg1 ;
-(double)heightForTableHeaderViewHiding;
-(id)_nextIndexPathOrSectionHeader:(id)arg1 ;
-(void)setHeight:(double)arg1 forFooterInSection:(long long)arg2 ;
-(void)moveDropTargetGapToIndexPath:(id)arg1 ;
-(NSIndexPath *)temporarilyDeletedIndexPathBeingReordered;
-(double)heightForTableHeaderView;
-(void)_updateNumSections;
-(id)_previousIndexPathOrSectionHeader:(id)arg1 ;
-(double)rowSpacing;
-(double)maxHeaderTitleWidthForSection:(long long)arg1 ;
-(CGRect)rectForTableHeaderView;
-(void)setRowSpacing:(double)arg1 ;
-(CGRect)rectForTable;
-(id)targetIndexPathForPoint:(CGPoint)arg1 adjustedForGap:(BOOL)arg2 ;
-(double)tableBottomPadding;
-(void)restoreReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(CGRect)rectForGap;
-(CGRect)rectForSection:(long long)arg1 ;
-(void)setDraggedRowHeight:(double)arg1 ;
-(BOOL)hasFooterForSection:(long long)arg1 ;
-(double)defaultSectionHeaderHeight;
-(int)sectionLocationForReorderedRow:(long long)arg1 inSection:(long long)arg2 ;
-(double)tableSidePadding;
-(double)heightForAutohidingTableHeaderView;
-(double)gapRowHeight;
-(NSIndexPath *)gapIndexPath;
-(BOOL)pinsTableHeaderView;
-(void)invalidateSection:(long long)arg1 ;
-(long long)_sectionRowForGlobalRow:(long long)arg1 inSection:(long long*)arg2 ;
-(NSIndexPath *)reorderedIndexPath;
-(void)invalidateAllSectionOffsetsAndUpdatePadding;
-(double)_dropTargetGapHeightForIndexPath:(id)arg1 ;
-(CGRect)floatingRectForFooterInSection:(long long)arg1 visibleRect:(CGRect)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(CGRect)floatingRectForHeaderInSection:(long long)arg1 visibleRect:(CGRect)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(long long)sectionForSectionRowData:(id)arg1 ;
-(CGRect)rectForHeaderInSection:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 extraHitSpaceBetweenRows:(double)arg2 ;
-(long long)headerAlignmentForSection:(long long)arg1 ;
-(void)invalidateAllSections;
-(double)minimumRowHeight;
-(id)initWithTableView:(id)arg1 ;
-(NSRange)sectionsInRect:(CGRect)arg1 ;
-(void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(BOOL)hasRows;
-(CGRect)rectForRow:(long long)arg1 inSection:(long long)arg2 heightCanBeGuessed:(BOOL)arg3 ;
-(double)maxFooterTitleWidthForSection:(long long)arg1 ;
-(double)offsetForSection:(id)arg1 ;
-(double)defaultSectionFooterHeight;
-(void)setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 ;
-(double)removeReorderedRowWithHeight:(double)arg1 atIndexPath:(id)arg2 ;
-(void)setTableBottomPadding:(double)arg1 ;
-(void)addGapAtIndexPath:(id)arg1 ;
-(void)setPinsTableHeaderView:(BOOL)arg1 ;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(CGRect)rectForGlobalRow:(long long)arg1 heightCanBeGuessed:(BOOL)arg2 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 ;
-(void)setReorderedIndexPath:(NSIndexPath *)arg1 ;
-(void)_ensureSectionOffsetIsValidForSection:(long long)arg1 ;
-(void)setUsesVariableMargins:(BOOL)arg1 ;
-(double)heightForTableFooterView;
-(void)setHeightForTableHeaderViewHiding:(double)arg1 ;
-(void)setTableSidePadding:(double)arg1 ;
-(void)_updateSectionRowDataArrayForNumSections:(long long)arg1 ;
-(void)removeDropTargetGap;
-(long long)globalRowForRowAtIndexPath:(id)arg1 ;
-(BOOL)shouldStripHeaderTopPaddingForSection:(long long)arg1 ;
-(void)_updateTopAndBottomPadding;
-(double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(void)tableViewWidthDidChangeToWidth:(double)arg1 ;
-(void)removeGap;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)ensureHeightsFaultedInForScrollToIndexPath:(id)arg1 boundsHeight:(double)arg2 ;
-(double)heightForTable;
-(void)dealloc;
-(long long)sectionForPoint:(CGPoint)arg1 ;
@end

