/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>

@class SXDataTableBorderSides, SXDataTableRowStyle, SXDataTableColumnStyle, SXDataTableCellStyle;

@interface SXDataTableStyle : SXJSONObject

@property (nonatomic,readonly) SXDataTableBorderSides * border; 
@property (nonatomic,readonly) SXDataTableRowStyle * headerRows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * headerColumns; 
@property (nonatomic,readonly) SXDataTableCellStyle * headerCells; 
@property (nonatomic,readonly) SXDataTableRowStyle * rows; 
@property (nonatomic,readonly) SXDataTableColumnStyle * columns; 
@property (nonatomic,readonly) SXDataTableCellStyle * cells; 
-(SXDataTableCellStyle *)cells;
-(SXDataTableColumnStyle *)columns;
-(SXDataTableRowStyle *)rows;
-(SXDataTableCellStyle *)headerCells;
-(SXDataTableColumnStyle *)headerColumns;
-(SXDataTableRowStyle *)headerRows;
-(SXDataTableBorderSides *)border;
@end

