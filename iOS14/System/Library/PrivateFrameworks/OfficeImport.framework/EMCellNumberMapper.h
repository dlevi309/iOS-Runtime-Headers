/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)columnWidth;
-(void)setColumnWidth:(double)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithDoubleValue:(double)arg1 style:(id)arg2 columnWidth:(double)arg3 workbook:(id)arg4 parent:(id)arg5 ;
-(id)formatValueAsNumber;
-(id)insertRedSpanIfNegativeAt:(id)arg1 ;
@end

