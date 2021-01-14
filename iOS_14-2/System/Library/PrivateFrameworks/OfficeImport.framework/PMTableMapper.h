/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, CMDrawableStyle, CMTableGridInfo, OADOrientedBounds;

@interface PMTableMapper : CMMapper {

	OADTable* mTable;
	CMDrawableStyle* mStyle;
	CMTableGridInfo* mGrid;
	OADOrientedBounds* mBounds;

}
-(id)grid;
-(id)cellStyle;
-(unsigned long long)rowCount;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(float)columnWidthAtIndex:(unsigned long long)arg1 state:(id)arg2 ;
-(id)tableBorderStyle;
-(id)defaultCellFillForRow:(unsigned long long)arg1 withState:(id)arg2 ;
-(id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3 ;
-(void)mapTablePropertiesWithState:(id)arg1 ;
-(void)mapColumnGridAt:(id)arg1 withState:(id)arg2 ;
-(id)defaultCellFillWithState:(id)arg1 ;
@end

