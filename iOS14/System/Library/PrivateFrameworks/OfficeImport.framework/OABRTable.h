/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)map;
-(void)dealloc;
-(id)readStrokeFromShape:(EshShape*)arg1 ;
-(void)readAnchor;
-(void)mapScale;
-(void)readCoordinates;
-(void)readCellsAndLines;
-(void)validateTable;
-(void)createTargetTableContents;
-(id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3 ;
@end

