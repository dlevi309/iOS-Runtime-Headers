/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

