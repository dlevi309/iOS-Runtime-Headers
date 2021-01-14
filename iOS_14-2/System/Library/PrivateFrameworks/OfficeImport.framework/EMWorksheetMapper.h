/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDWorksheet, CMStyle, ECColumnWidthConvertor;

@interface EMWorksheetMapper : EMSheetMapper {

	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	long long mMaxPopulatedColumn;
	long long mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;

}
-(int)width;
-(double)defaultRowHeight;
-(int)height;
-(BOOL)isVisible;
-(unsigned long long)columnCount;
-(void)_initWithState:(id)arg1 ;
-(double*)rowGrid;
-(void)dealloc;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
-(id)columnWidthConvertor;
-(double*)columnGrid;
-(long long)maxRowNumber;
-(double)defaultColumnWidth;
-(CGSize)preprocessSizeWithState:(id)arg1 ;
-(id)initWithEDWorksheet:(id)arg1 parent:(id)arg2 ;
-(void)countRowsAndColumnsWithState:(id)arg1 ;
-(void)setRowGrid;
-(double)xlColumnWidthToPoints:(double)arg1 ;
-(void)readHyperlinksWithState:(id)arg1 ;
-(void)mapTableAt:(id)arg1 withState:(id)arg2 ;
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)preprocessDrawableSizeWithState:(id)arg1 ;
-(void)mapColumnInfosAt:(id)arg1 withState:(id)arg2 ;
-(void)mapWorksheetClassesAtTableNode:(id)arg1 ;
@end

