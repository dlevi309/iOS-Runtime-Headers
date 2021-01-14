/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITableView, NSArray, UITableViewRowData, NSMutableIndexSet, NSMutableArray;

@interface _UITableViewUpdateSupport : NSObject {

	long long oldSection;
	long long newSection;
	long long oldGlobalRow;
	long long newGlobalRow;
	UITableView* tableView;
	NSRange visibleRows;
	NSArray* updateItems;
	UITableViewRowData* oldRowData;
	UITableViewRowData* newRowData;
	NSRange oldRowRange;
	NSRange newRowRange;
	NSMutableIndexSet* rows;
	NSMutableIndexSet* movedRows;
	NSMutableIndexSet* movedSections;
	CGRect oldTableViewVisibleBounds;
	CGRect newTableViewVisibleBounds;
	CGRect tableViewVisibleBoundsUnion;
	double tableViewVisibleBoundsOffset;
	long long oldSectionCount;
	long long newSectionCount;
	long long* oldSectionMap;
	long long* newSectionMap;
	long long oldGlobalRowCount;
	long long newGlobalRowCount;
	long long* oldGlobalRowMap;
	long long* newGlobalRowMap;
	id* animatedCells;
	id* animatedHeaders;
	id* animatedFooters;
	long long globalReorderingRow;
	id _context;
	NSMutableArray* viewAnimations;
	NSMutableArray* deletedSections;
	NSMutableArray* insertedSections;
	NSMutableArray* gaps;

}
-(void)_setupAnimationsForExistingOffscreenCells;
-(BOOL)_isReloadSectionUpdate;
-(id)_imageViewForView:(id)arg1 ;
-(NSRange)_visibleRowRangePlusAdjoining;
-(void)_setupAnimationsForInsertedHeadersAndFooters;
-(void)_setupAnimationForTableFooter;
-(void)_faultInRealHeightsOfNeededElements;
-(void)_setupAnimationsForExistingHeadersAndFooters;
-(double)_startOfRowAfterFooterInSection:(long long)arg1 withRowData:(id)arg2 ;
-(void)_setupAnimationForReorderingRow;
-(double)_startOfRowAfterRow:(long long)arg1 withRowData:(id)arg2 ;
-(void)_setupInsertAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_addBottomShadowViewViewForViewAnimation:(id)arg1 viewType:(int)arg2 ;
-(void)_setupAnimationsForDeletedHeadersAndFooters;
-(void)_setupAnimationsForNewlyInsertedCells;
-(void)_setupAnimationForTableHeader;
-(void)_computeGaps;
-(void)_setupDeleteAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_validateAnimatedCells;
-(void)_setupAnimationStructures;
-(void)_setupAnimationsForExistingVisibleCells;
-(void)_computeAutomaticAnimationTypes;
-(void)_setupAnimations;
-(void)_setupDeleteAnimationForHeaderInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_computeVisibleBounds;
-(double)_startOfRowAfterHeaderInSection:(long long)arg1 withRowData:(id)arg2 ;
-(void)_reallocateAndComputeNewGlobalRowMapWithActualNewGlobalRowCount:(long long)arg1 ;
-(void)_setupAnimationsForDeletedCells;
-(void)_setupInsertAnimationForFooterInSection:(long long)arg1 withTargetRect:(CGRect)arg2 forUpdateItem:(id)arg3 ;
-(void)_computeRowUpdates;
-(void)_computeSectionUpdates;
-(id)initWithTableView:(id)arg1 updateItems:(id)arg2 oldRowData:(id)arg3 newRowData:(id)arg4 oldRowRange:(NSRange)arg5 newRowRange:(NSRange)arg6 context:(id)arg7 ;
-(void)dealloc;
@end

