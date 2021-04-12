/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper {

	double edValue;
	EDStyle* edStyle;
	EDWorkbook* workbook;
	double _columnWidth;

}

@property (assign) double columnWidth;              //@synthesize columnWidth=_columnWidth - In the implementation block
-(void)setColumnWidth:(double)arg1 ;
-(double)columnWidth;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5 ;
-(id)formatValueAsNumber;
-(id)insertRedSpanIfNegativeAt:(id)arg1 ;
@end

