/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {

	BOOL _valid;
	unsigned long long _numRows;
	double _sectionOffset;
	BOOL _sectionOffsetValid;
	long long _sectionRowOffset;
	double _sectionHeight;
	double _headerOffset;
	double _footerOffset;
	long long _headerAlignment;
	long long _footerAlignment;
	double _maxHeaderTitleWidth;
	double _maxFooterTitleWidth;
	UITableViewRowData* _rowData;
	double _headerHeight;
	double _footerHeight;
	unsigned long long _arrayLength;
	float* _rowHeights;
	double* _rowOffsets;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(void)setHeight:(double)arg1 forHeaderInSection:(long long)arg2 ;
-(void)setHeight:(double)arg1 forFooterInSection:(long long)arg2 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 ;
-(void)invalidateSectionOffset;
-(void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(BOOL)arg3 ;
-(double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(BOOL)arg4 stripPaddingForAbuttingView:(BOOL)arg5 isTopHeader:(BOOL)arg6 ;
-(double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3 ;
-(double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(double)defaultSectionFooterHeight;
-(void)allocateArraysWithCapacity:(unsigned long long)arg1 forSection:(long long)arg2 ;
-(void)deleteRowAtIndex:(long long)arg1 ;
-(void)addOffset:(double)arg1 fromRow:(long long)arg2 ;
-(double)_offsetForFirstRow;
-(double)offsetForRow:(long long)arg1 adjustedForGap:(BOOL)arg2 ;
-(long long)_rowForPoint:(CGPoint)arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3 extraHitSpaceBetweenRows:(double)arg4 ;
-(id)initWithRowData:(id)arg1 ;
-(void)setHeight:(double)arg1 forRow:(long long)arg2 inSection:(long long)arg3 ;
-(void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4 ;
-(int)sectionLocationForRow:(long long)arg1 ;
-(int)sectionLocationForReorderedRow:(long long)arg1 ;
-(long long)_rowForPoint:(CGPoint)arg1 extraHitSpaceBetweenRows:(double)arg2 ;
-(double)defaultSectionHeaderHeight;
@end

