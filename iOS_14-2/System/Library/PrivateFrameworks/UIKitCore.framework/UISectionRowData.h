/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITableViewRowData;

@interface UISectionRowData : NSObject <NSCopying> {

	BOOL _valid;
	BOOL _sectionOffsetValid;
	double _sectionOffset;
	long long _sectionRowOffset;
	unsigned long long _numRows;
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
-(void)insertRowAtIndex:(long long)arg1 inSection:(long long)arg2 rowHeight:(double)arg3 tableViewRowData:(id)arg4 ;
-(void)setHeight:(double)arg1 forRow:(long long)arg2 inSection:(long long)arg3 ;
-(double)heightForFooterInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(int)sectionLocationForRow:(long long)arg1 ;
-(void)setHeight:(double)arg1 forHeaderInSection:(long long)arg2 ;
-(void)updateSectionHeightWithDelta:(double)arg1 section:(long long)arg2 updateFooterOffset:(BOOL)arg3 ;
-(void)invalidateSectionOffset;
-(void)setHeight:(double)arg1 forFooterInSection:(long long)arg2 ;
-(void)addOffset:(double)arg1 fromRow:(long long)arg2 ;
-(double)offsetForRow:(long long)arg1 adjustedForGap:(BOOL)arg2 ;
-(double)_offsetForFirstRow;
-(double)heightForEmptySection:(long long)arg1 inTableView:(id)arg2 rowData:(id)arg3 ;
-(double)defaultSectionHeaderHeight;
-(double)_defaultSectionHeaderHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(void)deleteRowAtIndex:(long long)arg1 ;
-(void)refreshWithSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(double)defaultSectionFooterHeight;
-(double)_headerOrFooterSizeForTable:(id)arg1 title:(id)arg2 detailText:(id)arg3 isHeader:(BOOL)arg4 stripPaddingForAbuttingView:(BOOL)arg5 isTopHeader:(BOOL)arg6 ;
-(void)invalidate;
-(void)allocateArraysWithCapacity:(unsigned long long)arg1 forSection:(long long)arg2 ;
-(int)sectionLocationForReorderedRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 inSection:(long long)arg2 canGuess:(BOOL)arg3 ;
-(long long)_rowForPoint:(CGPoint)arg1 extraHitSpaceBetweenRows:(double)arg2 ;
-(id)initWithRowData:(id)arg1 ;
-(double)heightForHeaderInSection:(long long)arg1 canGuess:(BOOL)arg2 ;
-(double)_defaultSectionFooterHeightForSection:(long long)arg1 tableView:(id)arg2 tableViewRowData:(id)arg3 ;
-(long long)_rowForPoint:(CGPoint)arg1 beginningWithRow:(long long)arg2 numberOfRows:(long long)arg3 extraHitSpaceBetweenRows:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

