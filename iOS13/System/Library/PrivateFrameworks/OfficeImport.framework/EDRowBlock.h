/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EDRowBlock : NSObject {

	CFDataRef mPackedData;
	CFDataRef mCellOffsets;

}

@property (nonatomic,readonly) unsigned rowCount; 
@property (nonatomic,readonly) unsigned firstRowNumber; 
@property (nonatomic,readonly) unsigned lastRowNumber; 
@property (nonatomic,readonly) unsigned minRowNumber; 
@property (nonatomic,readonly) unsigned maxRowNumber; 
+(id)rowBlock;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)index;
-(unsigned)rowCount;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned)maxRowNumber;
-(EDCellHeader*)cellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 ;
-(EDCellHeader*)addCellWithColumnNumber:(unsigned)arg1 type:(int)arg2 isFormulaCell:(BOOL)arg3 rowInfo:(EDRowInfo*)arg4 rowBlocks:(id)arg5 ;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(unsigned)indexOfRowInfoWithRowNumber:(unsigned)arg1 ;
-(EDRowInfo*)rowInfoAtIndex:(unsigned)arg1 ;
-(unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(void)doneWithContent;
-(unsigned)firstRowNumber;
-(unsigned)minRowNumber;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 createIfNil:(BOOL)arg2 ;
-(EDRowInfo*)addRowInfoWithRowNumber:(unsigned)arg1 cellCountHint:(unsigned)arg2 ;
-(unsigned)indexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(unsigned)lastRowNumber;
-(void)removeCellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(unsigned long long)startOfCellsOrThrow;
-(void)checkCellOffsetOrThrow:(unsigned long long)arg1 ;
-(void)incrementIndex;
@end

