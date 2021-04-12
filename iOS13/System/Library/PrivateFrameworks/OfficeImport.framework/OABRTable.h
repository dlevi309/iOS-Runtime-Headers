/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, OADTable, OABReaderState, OABTableSortedIntArray;

@interface OABRTable : NSObject {

	ESDContainer* mSrcTable;
	OADTable* mTgtTable;
	OABReaderState* mState;
	CGPoint mScale;
	int mRowCount;
	int mColumnCount;
	OABTableSortedIntArray* mXCoords;
	OABTableSortedIntArray* mYCoords;
	OABTable2DArray<EshShape *>* mHorzLines;
	OABTable2DArray<EshShape *>* mVertLines;
	OABTable2DArray<OABTableCell>* mCells;

}
-(void)dealloc;
-(void)map;
-(id)readStrokeFromShape:(EshShape*)arg1 ;
-(void)readAnchor;
-(void)mapScale;
-(void)readCoordinates;
-(void)readCellsAndLines;
-(void)validateTable;
-(void)createTargetTableContents;
-(id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3 ;
@end

