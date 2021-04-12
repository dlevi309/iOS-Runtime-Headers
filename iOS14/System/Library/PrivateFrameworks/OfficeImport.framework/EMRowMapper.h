/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class EDRowBlock;

@interface EMRowMapper : CMMapper {

	EDRowBlock* mRowBlock;
	EDRowInfo* mRowInfo;
	double* columnGrid;
	unsigned long long columnCount;

}
+(void)mapEmptyRowAt:(id)arg1 colspan:(unsigned long long)arg2 height:(double)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(BOOL)isColumnHidden:(unsigned long long)arg1 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned long long)arg1 ;
-(void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned long long)arg2 height:(double)arg3 ;
-(void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned long long)arg3 lastColumn:(unsigned long long)arg4 ;
-(id)initWithEDRowBlock:(id)arg1 rowInfo:(EDRowInfo*)arg2 parent:(id)arg3 ;
-(BOOL)isMergedCell:(EDCellHeader*)arg1 ;
@end

