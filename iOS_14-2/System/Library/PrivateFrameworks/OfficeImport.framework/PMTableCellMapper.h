/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class OADTableCell, CMStyle;

@interface PMTableCellMapper : CMMapper {

	OADTableCell* mCell;
	CMStyle* mStyle;
	int mColIndex;
	unsigned long long mRowIndex;
	float mWidth;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapBordersWithState:(id)arg1 ;
-(void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2 ;
-(id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(int)arg3 parent:(id)arg4 ;
-(float)widthWithState:(id)arg1 ;
-(id)rowMapper;
@end

