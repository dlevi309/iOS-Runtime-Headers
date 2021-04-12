/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXDataTableDataSource <NSObject>
@required
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(unsigned long long)dataOrientation;
-(id)tableBorder;
-(id)backgroundColorForRowAtIndex:(unsigned long long)arg1;
-(id)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
-(id)backgroundColorForCellAtIndexPath:(NSRange)arg1;
-(double)widthForCellAtIndexPath:(NSRange)arg1;
-(double)heightForCellAtIndexPath:(NSRange)arg1;
-(double)minimumWidthForCellAtIndexPath:(NSRange)arg1;
-(double)heightForCellndexPath:(NSRange)arg1 forWidth:(double)arg2;
-(id)cellBorderForCellAtIndexPath:(NSRange)arg1;
-(UIEdgeInsets*)paddingForCellAtIndexPath:(NSRange)arg1;
-(unsigned long long)verticalAlignmentForCellAtIndexPath:(NSRange)arg1;
-(unsigned long long)horizontalAlignmentForCellAtIndexPath:(NSRange)arg1;
-(id)rowDividerAtIndex:(unsigned long long)arg1;
-(id)columnDividerAtIndex:(unsigned long long)arg1;

@end

