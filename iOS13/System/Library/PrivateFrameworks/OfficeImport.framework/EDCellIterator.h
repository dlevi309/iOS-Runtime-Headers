/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class EDRowBlocks, EDRowBlock;

@interface EDCellIterator : NSObject {

	EDRowBlocks* mRowBlocks;
	EDRowBlock* mCurrentRowBlock;
	EDRowInfo* mCurrentRowInfo;
	unsigned mCurrentRowInfoIndex;
	EDCellHeader* mCurrentCell;
	unsigned mCurrentCellIndex;
	unsigned mDesiredRowNumber;
	unsigned mDesiredColumnNumber;

}
-(void)dealloc;
-(id)initWithWorksheet:(id)arg1 ;
-(EDCellHeader*)adjacentCell:(int)arg1 ;
-(EDCellHeader*)adjacentCellLeft;
-(EDCellHeader*)adjacentCellRight;
-(EDCellHeader*)scanToRowNumber:(unsigned)arg1 columnNumber:(unsigned)arg2 ;
@end

