/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableStyle, WMTableColumnInfo;

@interface WMTableMapper : CMMapper {

	WDTable* mWdTable;
	WMBordersProperty* mInsideBorders;
	WMTableStyle* mStyle;
	WMTableColumnInfo* mColumnInfo;

}
+(BOOL)isTableDeleted:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTable:(id)arg1 parent:(id)arg2 ;
-(id)columnInfo;
-(id)insideBorders;
-(id)copyColumnInfo;
-(void)setInsideBorders:(id)arg1 ;
-(id)copyStopArrayForRow:(unsigned long long)arg1 ;
@end

